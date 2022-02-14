
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;
struct file {struct pid* private_data; int * f_op; } ;


 int VAR_0 ;
 struct pid* FUNC_0 (int ) ;
 int VAR_1 ;

struct pid *FUNC_1(const struct file *VAR_2)
{
 if (VAR_2->f_op == &VAR_1)
  return VAR_2->private_data;

 return FUNC_0(-VAR_0);
}
