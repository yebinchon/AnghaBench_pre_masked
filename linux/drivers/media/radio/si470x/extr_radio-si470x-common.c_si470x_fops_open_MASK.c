
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int (* fops_open ) (struct file*) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 struct si470x_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0)
{
 struct si470x_device *VAR_1 = FUNC_1(VAR_0);

 return VAR_1->fops_open(VAR_0);
}
