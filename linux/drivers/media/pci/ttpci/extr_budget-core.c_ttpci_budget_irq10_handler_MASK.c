
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct budget {int vpe_tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct saa7146_dev*,struct budget*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct saa7146_dev *VAR_1, u32 * VAR_2)
{
 struct budget *VAR_3 = (struct budget *) VAR_1->ext_priv;

 FUNC_0(8, "dev: %p, budget: %p\n", VAR_1, VAR_3);

 if (*VAR_2 & VAR_0)
  FUNC_1(&VAR_3->vpe_tasklet);
}
