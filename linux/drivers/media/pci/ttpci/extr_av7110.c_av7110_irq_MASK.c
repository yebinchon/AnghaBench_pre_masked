
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct saa7146_dev {struct av7110* ext_priv; } ;
struct av7110 {int vpe_tasklet; int gpio_tasklet; int debi_tasklet; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct saa7146_dev* VAR_3, u32 *VAR_4)
{
 struct av7110 *VAR_5 = VAR_3->ext_priv;







 if (*VAR_4 & VAR_2) {
  FUNC_0(VAR_5->dev, VAR_2);
  FUNC_1(VAR_5->dev, VAR_2);
  FUNC_2(&VAR_5->debi_tasklet);
 }

 if (*VAR_4 & VAR_0) {

  FUNC_2(&VAR_5->gpio_tasklet);
 }

 if (*VAR_4 & VAR_1)
  FUNC_2(&VAR_5->vpe_tasklet);
}
