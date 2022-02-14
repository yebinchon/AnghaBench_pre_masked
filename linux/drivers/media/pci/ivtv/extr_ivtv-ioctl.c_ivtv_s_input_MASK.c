
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct ivtv {unsigned int nof_inputs; unsigned int active_input; TYPE_4__* streams; int tuner_std; TYPE_2__* card; int audio_input; int capturing; } ;
struct file {int dummy; } ;
struct TYPE_10__ {struct ivtv* itv; } ;
struct TYPE_8__ {int tvnorms; } ;
struct TYPE_9__ {TYPE_3__ vdev; } ;
struct TYPE_7__ {TYPE_1__* video_inputs; } ;
struct TYPE_6__ {scalar_t__ video_type; int audio_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (void*) ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*) ;
 int FUNC_6 (struct ivtv*) ;

int FUNC_7(struct file *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct ivtv *VAR_8 = FUNC_2(VAR_6)->itv;
 v4l2_std_id VAR_9;
 int VAR_10;

 if (VAR_7 >= VAR_8->nof_inputs)
  return -VAR_1;

 if (VAR_7 == VAR_8->active_input) {
  FUNC_0("Input unchanged\n");
  return 0;
 }

 if (FUNC_1(&VAR_8->capturing) > 0) {
  return -VAR_0;
 }

 FUNC_0("Changing input from %d to %d\n",
   VAR_8->active_input, VAR_7);

 VAR_8->active_input = VAR_7;


 VAR_8->audio_input = VAR_8->card->video_inputs[VAR_7].audio_index;

 if (VAR_8->card->video_inputs[VAR_7].video_type == VAR_2)
  VAR_9 = VAR_8->tuner_std;
 else
  VAR_9 = VAR_4;
 for (VAR_10 = 0; VAR_10 <= VAR_3; VAR_10++)
  VAR_8->streams[VAR_10].vdev.tvnorms = VAR_9;



 FUNC_4(VAR_8);
 FUNC_6(VAR_8);
 FUNC_3(VAR_8);
 FUNC_5(VAR_8);

 return 0;
}
