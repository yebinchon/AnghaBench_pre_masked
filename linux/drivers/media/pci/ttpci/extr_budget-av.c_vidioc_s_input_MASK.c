
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct file {int dummy; } ;
struct budget_av {int dummy; } ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct budget_av*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 struct saa7146_dev *VAR_3 = ((struct saa7146_fh *)VAR_1)->dev;
 struct budget_av *VAR_4 = (struct budget_av *)VAR_3->ext_priv;

 FUNC_0(1, "VIDIOC_S_INPUT %d\n", VAR_2);
 return FUNC_1(VAR_4, VAR_2);
}
