
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; struct snd_cobalt_card* private_data; scalar_t__ info_flags; } ;
struct snd_cobalt_card {struct cobalt_stream* s; struct snd_card* sc; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {int gfp_flags; } ;
struct cobalt_stream {int video_channel; int is_output; TYPE_1__ q; struct cobalt* cobalt; } ;
struct cobalt {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cobalt*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct snd_card*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_5 (struct snd_pcm*,int ,int *) ;
 int FUNC_6 (int ,char*,int) ;

int FUNC_7(struct snd_cobalt_card *VAR_6)
{
 struct snd_pcm *VAR_7;
 struct snd_card *VAR_8 = VAR_6->sc;
 struct cobalt_stream *VAR_9 = VAR_6->s;
 struct cobalt *VAR_10 = VAR_9->cobalt;
 int VAR_11;

 VAR_9->q.gfp_flags |= VAR_3;

 if (!VAR_9->is_output) {
  FUNC_2(VAR_10,
   FUNC_0(VAR_9->video_channel),
   0);
  FUNC_3(2);
  FUNC_2(VAR_10,
   FUNC_0(VAR_9->video_channel),
   1);
  FUNC_3(1);

  VAR_11 = FUNC_4(VAR_8, "Cobalt PCM-In HDMI",
   0,
   0,
   1,
   &VAR_7);
  if (VAR_11) {
   FUNC_1("snd_cobalt_pcm_create() failed for input with err %d\n",
       VAR_11);
   goto err_exit;
  }

  FUNC_5(VAR_7, VAR_1,
    &VAR_4);
  VAR_7->info_flags = 0;
  VAR_7->private_data = VAR_6;
  FUNC_6(VAR_7->name, "cobalt", sizeof(VAR_7->name));
 } else {
  FUNC_2(VAR_10,
   VAR_0, 0);
  FUNC_3(2);
  FUNC_2(VAR_10,
   VAR_0, 1);
  FUNC_3(1);

  VAR_11 = FUNC_4(VAR_8, "Cobalt PCM-Out HDMI",
   0,
   1,
   0,
   &VAR_7);
  if (VAR_11) {
   FUNC_1("snd_cobalt_pcm_create() failed for output with err %d\n",
       VAR_11);
   goto err_exit;
  }

  FUNC_5(VAR_7, VAR_2,
    &VAR_5);
  VAR_7->info_flags = 0;
  VAR_7->private_data = VAR_6;
  FUNC_6(VAR_7->name, "cobalt", sizeof(VAR_7->name));
 }

 return 0;

err_exit:
 return VAR_11;
}
