
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct file {int * f_op; } ;
struct TYPE_2__ {int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct file*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_4(struct file *VAR_1)
{
 umode_t VAR_2 = FUNC_3(VAR_1)->i_mode;

 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  return 1;
 if (FUNC_2(VAR_2) && VAR_1->f_op != &VAR_0)
  return 1;

 return 0;
}
