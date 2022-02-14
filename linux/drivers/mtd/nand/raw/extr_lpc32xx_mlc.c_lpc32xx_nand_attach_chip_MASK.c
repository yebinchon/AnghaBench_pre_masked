
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int mode; } ;
struct nand_chip {TYPE_2__ ecc; } ;
struct mtd_info {int writesize; } ;
struct lpc32xx_nand_host {int mlcsubpages; void* dummy_buf; void* dma_buf; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mtd_info*,int *) ;
 struct lpc32xx_nand_host* FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_3(VAR_4);
 struct lpc32xx_nand_host *VAR_6 = FUNC_2(VAR_4);
 struct device *VAR_7 = &VAR_6->pdev->dev;

 VAR_6->dma_buf = FUNC_0(VAR_7, VAR_5->writesize, VAR_1);
 if (!VAR_6->dma_buf)
  return -VAR_0;

 VAR_6->dummy_buf = FUNC_0(VAR_7, VAR_5->writesize, VAR_1);
 if (!VAR_6->dummy_buf)
  return -VAR_0;

 VAR_4->ecc.mode = VAR_2;
 VAR_4->ecc.size = 512;
 FUNC_1(VAR_5, &VAR_3);
 VAR_6->mlcsubpages = VAR_5->writesize / 512;

 return 0;
}
