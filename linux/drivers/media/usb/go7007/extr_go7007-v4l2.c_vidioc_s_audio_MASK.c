
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_audio {scalar_t__ index; } ;
struct go7007 {size_t aud_input; TYPE_1__* board_info; int sd_audio; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int audio_input; } ;
struct TYPE_3__ {scalar_t__ num_aud_inputs; TYPE_2__* aud_inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 struct go7007* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
 const struct v4l2_audio *VAR_5)
{
 struct go7007 *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->index >= VAR_6->board_info->num_aud_inputs)
  return -VAR_0;
 VAR_6->aud_input = VAR_5->index;
 FUNC_0(VAR_6->sd_audio, VAR_1, VAR_2,
  VAR_6->board_info->aud_inputs[VAR_6->aud_input].audio_input, 0, 0);
 return 0;
}
