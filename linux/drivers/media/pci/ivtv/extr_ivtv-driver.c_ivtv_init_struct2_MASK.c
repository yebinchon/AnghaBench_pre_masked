
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sliced_size; } ;
struct ivtv {int nof_inputs; int nof_audio_inputs; int active_input; TYPE_4__* card; int audio_input; TYPE_2__ vbi; } ;
struct TYPE_8__ {int hw_all; TYPE_3__* video_inputs; TYPE_1__* audio_inputs; } ;
struct TYPE_7__ {scalar_t__ video_type; int audio_index; } ;
struct TYPE_5__ {scalar_t__ audio_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ivtv *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (VAR_4->card->video_inputs[VAR_5].video_type == 0)
   break;
 VAR_4->nof_inputs = VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_4->card->audio_inputs[VAR_5].audio_type == 0)
   break;
 VAR_4->nof_audio_inputs = VAR_5;

 if (VAR_4->card->hw_all & VAR_3) {
  VAR_4->vbi.sliced_size = 288;
 } else {
  VAR_4->vbi.sliced_size = 64;
 }


 for (VAR_5 = 0; VAR_5 < VAR_4->nof_inputs; VAR_5++) {
  if (VAR_4->card->video_inputs[VAR_5].video_type ==
    VAR_0)
   break;
 }
 if (VAR_5 >= VAR_4->nof_inputs)
  VAR_5 = 0;
 VAR_4->active_input = VAR_5;
 VAR_4->audio_input = VAR_4->card->video_inputs[VAR_5].audio_index;
}
