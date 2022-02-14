
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;
struct file {int * f_op; } ;


 int VAR_0 ;
 struct pid* FUNC_0 (int ) ;
 int FUNC_1 (struct file const*) ;
 struct pid* FUNC_2 (int ) ;
 int VAR_1 ;

struct pid *FUNC_3(const struct file *VAR_2)
{
 if (VAR_2->f_op != &VAR_1)
  return FUNC_0(-VAR_0);

 return FUNC_2(FUNC_1(VAR_2));
}
