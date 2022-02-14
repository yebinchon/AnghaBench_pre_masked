
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {unsigned int ctl_input; } ;
struct file {int dummy; } ;


 struct saa7134_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct saa7134_dev *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->ctl_input;
 return 0;
}
