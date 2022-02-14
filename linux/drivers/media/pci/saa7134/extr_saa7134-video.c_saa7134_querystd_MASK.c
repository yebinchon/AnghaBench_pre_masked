
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct saa7134_dev*) ;
 struct saa7134_dev* FUNC_1 (struct file*) ;

int FUNC_2(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct saa7134_dev *VAR_3 = FUNC_1(VAR_0);
 *VAR_2 &= FUNC_0(VAR_3);
 return 0;
}
