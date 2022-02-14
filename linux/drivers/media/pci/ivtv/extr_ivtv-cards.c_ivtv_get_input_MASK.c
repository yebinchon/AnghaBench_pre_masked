
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_input {int index; scalar_t__ type; int audioset; int std; int name; } ;
struct ivtv_card_video_input {int video_type; } ;
struct ivtv {int nof_inputs; int nof_audio_inputs; int tuner_std; TYPE_1__* card; } ;
struct TYPE_2__ {struct ivtv_card_video_input* video_inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char const* const,int) ;

int FUNC_1(struct ivtv *VAR_5, u16 VAR_6, struct v4l2_input *VAR_7)
{
 const struct ivtv_card_video_input *VAR_8 = VAR_5->card->video_inputs + VAR_6;
 static const char * const VAR_9[] = {
  "Tuner 1",
  "S-Video 1",
  "S-Video 2",
  "Composite 1",
  "Composite 2",
  "Composite 3"
 };

 if (VAR_6 >= VAR_5->nof_inputs)
  return -VAR_0;
 VAR_7->index = VAR_6;
 FUNC_0(VAR_7->name, VAR_9[VAR_8->video_type - 1],
  sizeof(VAR_7->name));
 VAR_7->type = (VAR_8->video_type == VAR_1 ?
   VAR_3 : VAR_2);
 VAR_7->audioset = (1 << VAR_5->nof_audio_inputs) - 1;
 VAR_7->std = (VAR_7->type == VAR_3) ?
    VAR_5->tuner_std : VAR_4;
 return 0;
}
