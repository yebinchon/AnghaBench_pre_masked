
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct go7007 {unsigned int input; int vidq; TYPE_1__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_2__ {unsigned int num_inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct go7007*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct go7007 *VAR_5 = FUNC_2(VAR_2);

 if (VAR_4 >= VAR_5->board_info->num_inputs)
  return -VAR_1;
 if (FUNC_1(&VAR_5->vidq))
  return -VAR_0;

 VAR_5->input = VAR_4;
 FUNC_0(VAR_5);

 return 0;
}
