
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int id; } ;


 struct saa7134_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct saa7134_dev *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->tvnorm->id;
 return 0;
}
