
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct go7007 {unsigned int input; int aud_input; TYPE_3__* board_info; int sd_audio; int sd_video; } ;
struct TYPE_6__ {TYPE_2__* aud_inputs; TYPE_1__* inputs; scalar_t__ num_aud_inputs; int video_config; } ;
struct TYPE_5__ {int audio_input; } ;
struct TYPE_4__ {int audio_index; int video_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct go7007 *VAR_3)
{
 unsigned int VAR_4 = VAR_3->input;

 FUNC_0(VAR_3->sd_video, VAR_2, VAR_1,
   VAR_3->board_info->inputs[VAR_4].video_input, 0,
   VAR_3->board_info->video_config);
 if (VAR_3->board_info->num_aud_inputs) {
  int VAR_5 = VAR_3->board_info->inputs[VAR_4].audio_index;

  FUNC_0(VAR_3->sd_audio, VAR_0, VAR_1,
   VAR_3->board_info->aud_inputs[VAR_5].audio_input, 0, 0);
  VAR_3->aud_input = VAR_5;
 }
}
