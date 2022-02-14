
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_fmc2_nand {int ncs; int* cs_used; int chip; } ;
struct stm32_fmc2_nfc {int cs_assigned; int dev; struct stm32_fmc2_nand nand; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*,char*,int,int*) ;

__attribute__((used)) static int FUNC_5(struct stm32_fmc2_nfc *VAR_2,
      struct device_node *VAR_3)
{
 struct stm32_fmc2_nand *VAR_4 = &VAR_2->nand;
 u32 VAR_5;
 int VAR_6, VAR_7;

 if (!FUNC_3(VAR_3, "reg", &VAR_4->ncs))
  return -VAR_0;

 VAR_4->ncs /= sizeof(u32);
 if (!VAR_4->ncs) {
  FUNC_1(VAR_2->dev, "invalid reg property size\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->ncs; VAR_7++) {
  VAR_6 = FUNC_4(VAR_3, "reg", VAR_7, &VAR_5);
  if (VAR_6) {
   FUNC_1(VAR_2->dev, "could not retrieve reg property: %d\n",
    VAR_6);
   return VAR_6;
  }

  if (VAR_5 > VAR_1) {
   FUNC_1(VAR_2->dev, "invalid reg value: %d\n", VAR_5);
   return -VAR_0;
  }

  if (VAR_2->cs_assigned & FUNC_0(VAR_5)) {
   FUNC_1(VAR_2->dev, "cs already assigned: %d\n", VAR_5);
   return -VAR_0;
  }

  VAR_2->cs_assigned |= FUNC_0(VAR_5);
  VAR_4->cs_used[VAR_7] = VAR_5;
 }

 FUNC_2(&VAR_4->chip, VAR_3);

 return 0;
}
