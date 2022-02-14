
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ FUNC_0 (struct saa7134_dev*,unsigned int) ;
 struct saa7134_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct saa7134_dev*,unsigned int) ;

int FUNC_3(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct saa7134_dev *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5 >= VAR_1)
  return -VAR_0;
 if (FUNC_0(VAR_6, VAR_5).type == VAR_2)
  return -VAR_0;
 FUNC_2(VAR_6, VAR_5);
 return 0;
}
