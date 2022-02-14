
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_ivtv_card {struct v4l2_device* v4l2_dev; } ;
struct ivtv_stream {int s_flags; } ;
struct ivtv {int * pcm_announce_callback; struct ivtv_stream* streams; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ivtv_stream*) ;
 int FUNC_2 (struct ivtv_stream*,int ) ;
 int FUNC_3 (struct snd_ivtv_card*) ;
 int FUNC_4 (struct snd_ivtv_card*) ;
 struct snd_ivtv_card* FUNC_5 (struct snd_pcm_substream*) ;
 struct ivtv* FUNC_6 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2)
{
 struct snd_ivtv_card *VAR_3 = FUNC_5(VAR_2);
 struct v4l2_device *VAR_4 = VAR_3->v4l2_dev;
 struct ivtv *VAR_5 = FUNC_6(VAR_4);
 struct ivtv_stream *VAR_6;


 FUNC_3(VAR_3);
 VAR_6 = &VAR_5->streams[VAR_0];
 FUNC_2(VAR_6, 0);
 FUNC_0(VAR_1, &VAR_6->s_flags);

 FUNC_1(VAR_6);

 VAR_5->pcm_announce_callback = ((void*)0);
 FUNC_4(VAR_3);

 return 0;
}
