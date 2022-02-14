
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct cafe_priv {int dmaaddr; int dmabuf; TYPE_1__* pdev; int mmio; int rs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cafe_priv*,int ) ;
 int FUNC_1 (struct cafe_priv*,int,int ) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int ,struct mtd_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cafe_priv*) ;
 struct nand_chip* FUNC_6 (struct mtd_info*) ;
 struct cafe_priv* FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_9(VAR_1);
 struct nand_chip *VAR_3 = FUNC_6(VAR_2);
 struct cafe_priv *VAR_4 = FUNC_7(VAR_3);


 FUNC_1(VAR_4, ~1 & FUNC_0(VAR_4, VAR_0), VAR_0);
 FUNC_3(VAR_1->irq, VAR_2);
 FUNC_8(VAR_3);
 FUNC_4(VAR_4->rs);
 FUNC_10(VAR_1, VAR_4->mmio);
 FUNC_2(&VAR_4->pdev->dev, 2112, VAR_4->dmabuf, VAR_4->dmaaddr);
 FUNC_5(VAR_4);
}
