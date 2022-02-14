
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct cx18* private_data; int hw; } ;
struct snd_cx18_card {struct snd_pcm_substream* capture_pcm_substream; struct v4l2_device* v4l2_dev; } ;
struct cx18_stream {int s_flags; int type; } ;
struct cx18_open_id {int type; scalar_t__ open_id; struct cx18* cx; } ;
struct cx18 {int pcm_announce_callback; int open_id; struct cx18_stream* streams; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct cx18_open_id*,int ) ;
 int FUNC_1 (struct cx18_stream*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct snd_cx18_card*) ;
 int FUNC_4 (struct snd_cx18_card*) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 struct snd_cx18_card* FUNC_6 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct cx18* FUNC_9 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_7)
{
 struct snd_cx18_card *VAR_8 = FUNC_6(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 struct v4l2_device *VAR_10 = VAR_8->v4l2_dev;
 struct cx18 *VAR_11 = FUNC_9(VAR_10);
 struct cx18_stream *VAR_12;
 struct cx18_open_id VAR_13;
 int VAR_14;


 FUNC_3(VAR_8);
 VAR_12 = &VAR_11->streams[VAR_0];

 VAR_13.cx = VAR_11;
 VAR_13.type = VAR_12->type;
 VAR_13.open_id = VAR_11->open_id++;


 if (FUNC_0(&VAR_13, VAR_13.type)) {

  FUNC_4(VAR_8);
  return -VAR_3;
 }

 if (FUNC_8(VAR_2, &VAR_12->s_flags) ||
     FUNC_7(VAR_1, &VAR_12->s_flags)) {

  FUNC_4(VAR_8);
  return 0;
 }


 VAR_9->hw = VAR_6;
 FUNC_5(VAR_9, VAR_4);
 VAR_8->capture_pcm_substream = VAR_7;
 VAR_9->private_data = VAR_11;

 VAR_11->pcm_announce_callback = VAR_5;


 FUNC_2(VAR_1, &VAR_12->s_flags);
 VAR_14 = FUNC_1(VAR_12);
 FUNC_4(VAR_8);

 return VAR_14;
}
