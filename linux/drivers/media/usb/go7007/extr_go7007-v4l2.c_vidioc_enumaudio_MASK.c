
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_audio {size_t index; int capability; int name; } ;
struct go7007 {TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_4__ {size_t num_aud_inputs; TYPE_1__* aud_inputs; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct go7007* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 struct go7007 *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->index >= VAR_5->board_info->num_aud_inputs)
  return -VAR_0;
 FUNC_0(VAR_4->name, VAR_5->board_info->aud_inputs[VAR_4->index].name,
  sizeof(VAR_4->name));
 VAR_4->capability = VAR_1;
 return 0;
}
