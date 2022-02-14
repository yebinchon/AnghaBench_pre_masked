
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct cafe_priv {TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct cafe_priv*,int ) ;
 int FUNC_2 (struct cafe_priv*,int,int ) ;
 struct nand_chip* FUNC_3 (struct mtd_info*) ;
 struct cafe_priv* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct mtd_info *VAR_5 = VAR_4;
 struct nand_chip *VAR_6 = FUNC_3(VAR_5);
 struct cafe_priv *VAR_7 = FUNC_4(VAR_6);
 uint32_t VAR_8 = FUNC_1(VAR_7, VAR_2);
 FUNC_2(VAR_7, VAR_8 & ~0x90000000, VAR_2);
 if (!VAR_8)
  return VAR_1;

 FUNC_0(&VAR_7->pdev->dev, "irq, bits %x (%x)\n", VAR_8, FUNC_1(VAR_7, VAR_2));
 return VAR_0;
}
