
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct ivtv* private_data; int hw; } ;
struct snd_ivtv_card {struct snd_pcm_substream* capture_pcm_substream; struct v4l2_device* v4l2_dev; } ;
struct ivtv_stream {int s_flags; int type; int vdev; } ;
struct ivtv_open_id {int fh; int type; struct ivtv* itv; } ;
struct ivtv {int pcm_announce_callback; struct ivtv_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ivtv_open_id*,int ) ;
 scalar_t__ FUNC_1 (struct ivtv*) ;
 int FUNC_2 (struct ivtv_stream*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_7 ;
 int FUNC_4 (struct snd_ivtv_card*) ;
 int FUNC_5 (struct snd_ivtv_card*) ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 struct snd_ivtv_card* FUNC_7 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 struct ivtv* FUNC_10 (struct v4l2_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_8)
{
 struct snd_ivtv_card *VAR_9 = FUNC_7(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 struct v4l2_device *VAR_11 = VAR_9->v4l2_dev;
 struct ivtv *VAR_12 = FUNC_10(VAR_11);
 struct ivtv_stream *VAR_13;
 struct ivtv_open_id VAR_14;
 int VAR_15;


 FUNC_4(VAR_9);

 if (FUNC_1(VAR_12)) {
  FUNC_5(VAR_9);
  return -VAR_1;
 }

 VAR_13 = &VAR_12->streams[VAR_2];

 FUNC_12(&VAR_14.fh, &VAR_13->vdev);
 VAR_14.itv = VAR_12;
 VAR_14.type = VAR_13->type;


 if (FUNC_0(&VAR_14, VAR_14.type)) {

  FUNC_11(&VAR_14.fh);
  FUNC_5(VAR_9);
  return -VAR_0;
 }

 if (FUNC_9(VAR_4, &VAR_13->s_flags) ||
     FUNC_8(VAR_3, &VAR_13->s_flags)) {

  FUNC_5(VAR_9);
  return 0;
 }


 VAR_10->hw = VAR_7;
 FUNC_6(VAR_10, VAR_5);
 VAR_9->capture_pcm_substream = VAR_8;
 VAR_10->private_data = VAR_12;

 VAR_12->pcm_announce_callback = VAR_6;


 FUNC_3(VAR_3, &VAR_13->s_flags);
 VAR_15 = FUNC_2(VAR_13);
 FUNC_5(VAR_9);

 return VAR_15;
}
