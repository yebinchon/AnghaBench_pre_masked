
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_mode; } ;
struct TYPE_3__ {int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct file*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct file *VAR_3)
{
 if (FUNC_0(VAR_0))
  return 1;
 if (VAR_3->f_mode & VAR_1)
  return 1;
 if (FUNC_4(FUNC_1(), FUNC_2(VAR_3)->i_uid))
  return 1;
 if (!FUNC_3(FUNC_2(VAR_3), VAR_2))
  return 1;
 return 0;
}
