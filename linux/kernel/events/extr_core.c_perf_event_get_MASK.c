
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * f_op; } ;


 int VAR_0 ;
 struct file* FUNC_0 (int ) ;
 struct file* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct file*) ;
 int VAR_1 ;

struct file *FUNC_3(unsigned int VAR_2)
{
 struct file *VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 if (VAR_3->f_op != &VAR_1) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
