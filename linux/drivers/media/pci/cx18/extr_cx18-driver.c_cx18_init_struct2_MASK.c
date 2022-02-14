
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cx18 {int nof_inputs; int nof_audio_inputs; int active_input; TYPE_3__* card; int audio_input; } ;
struct TYPE_6__ {TYPE_2__* video_inputs; TYPE_1__* audio_inputs; } ;
struct TYPE_5__ {scalar_t__ video_type; int audio_index; } ;
struct TYPE_4__ {scalar_t__ audio_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct cx18 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++)
  if (VAR_3->card->video_inputs[VAR_4].video_type == 0)
   break;
 VAR_3->nof_inputs = VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1 - 1; VAR_4++)
  if (VAR_3->card->audio_inputs[VAR_4].audio_type == 0)
   break;
 VAR_3->nof_audio_inputs = VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_3->nof_inputs; VAR_4++) {
  if (VAR_3->card->video_inputs[VAR_4].video_type ==
    VAR_0)
   break;
 }
 if (VAR_4 == VAR_3->nof_inputs)
  VAR_4 = 0;
 VAR_3->active_input = VAR_4;
 VAR_3->audio_input = VAR_3->card->video_inputs[VAR_4].audio_index;
}
