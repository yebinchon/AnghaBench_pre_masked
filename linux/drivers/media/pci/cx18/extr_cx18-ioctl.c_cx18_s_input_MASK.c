
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* v4l2_std_id ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18_card_video_input {scalar_t__ video_type; int audio_index; } ;
struct cx18 {unsigned int nof_inputs; unsigned int active_input; TYPE_3__* streams; void* tuner_std; TYPE_1__* card; int audio_input; } ;
struct TYPE_5__ {void* tvnorms; } ;
struct TYPE_6__ {TYPE_2__ video_dev; } ;
struct TYPE_4__ {struct cx18_card_video_input* video_inputs; } ;


 int FUNC_0 (char*,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (struct cx18*) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*) ;
 struct cx18_open_id* FUNC_5 (void*) ;

int FUNC_6(struct file *VAR_6, void *VAR_7, unsigned int VAR_8)
{
 struct cx18_open_id *VAR_9 = FUNC_5(VAR_7);
 struct cx18 *VAR_10 = VAR_9->cx;
 v4l2_std_id VAR_11 = VAR_5;
 const struct cx18_card_video_input *VAR_12 =
    VAR_10->card->video_inputs + VAR_8;

 if (VAR_8 >= VAR_10->nof_inputs)
  return -VAR_3;

 if (VAR_8 == VAR_10->active_input) {
  FUNC_0("Input unchanged\n");
  return 0;
 }

 FUNC_0("Changing input from %d to %d\n",
   VAR_10->active_input, VAR_8);

 VAR_10->active_input = VAR_8;

 VAR_10->audio_input = VAR_10->card->video_inputs[VAR_8].audio_index;
 if (VAR_12->video_type == VAR_4)
  VAR_11 = VAR_10->tuner_std;
 VAR_10->streams[VAR_0].video_dev.tvnorms = VAR_11;
 VAR_10->streams[VAR_2].video_dev.tvnorms = VAR_11;
 VAR_10->streams[VAR_1].video_dev.tvnorms = VAR_11;



 FUNC_2(VAR_10);
 FUNC_4(VAR_10);
 FUNC_1(VAR_10);
 FUNC_3(VAR_10);
 return 0;
}
