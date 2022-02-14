
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_audio {size_t index; int capability; int name; } ;
struct go7007 {size_t aud_input; TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* aud_inputs; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct go7007* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 struct go7007 *VAR_4 = FUNC_1(VAR_1);

 VAR_3->index = VAR_4->aud_input;
 FUNC_0(VAR_3->name, VAR_4->board_info->aud_inputs[VAR_4->aud_input].name,
  sizeof(VAR_3->name));
 VAR_3->capability = VAR_0;
 return 0;
}
