
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {unsigned int input; } ;
struct file {int dummy; } ;


 struct vivid_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned *VAR_2)
{
 struct vivid_dev *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->input;
 return 0;
}
