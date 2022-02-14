
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct file *VAR_1)
{
 int VAR_2;





 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 if (FUNC_2(VAR_1->f_mode & VAR_0))
  return 0;

 return FUNC_1(VAR_1);
}
