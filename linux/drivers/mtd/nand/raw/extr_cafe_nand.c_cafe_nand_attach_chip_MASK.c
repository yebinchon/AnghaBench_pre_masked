
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mtd_info {int writesize; } ;
struct TYPE_4__ {int size; int bytes; int strength; int read_oob; int read_page; int write_oob; int write_page; int mode; } ;
struct TYPE_5__ {TYPE_1__ ecc; int * bbt_md; int * bbt_td; } ;
struct cafe_priv {int dmaaddr; int dmabuf; TYPE_3__* pdev; TYPE_2__ nand; int ctl2; int usedma; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct cafe_priv*,int ) ;
 int FUNC_3 (struct cafe_priv*,int ,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int,int *,int ) ;
 int FUNC_6 (int *,int,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mtd_info*,int *) ;
 struct cafe_priv* FUNC_9 (struct nand_chip*) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_16)
{
 struct mtd_info *VAR_17 = FUNC_10(VAR_16);
 struct cafe_priv *VAR_18 = FUNC_9(VAR_16);
 int VAR_19 = 0;

 VAR_18->dmabuf = FUNC_5(&VAR_18->pdev->dev, 2112,
       &VAR_18->dmaaddr, VAR_2);
 if (!VAR_18->dmabuf)
  return -VAR_0;


 FUNC_3(VAR_18, FUNC_7(VAR_18->dmaaddr), VAR_3);
 FUNC_3(VAR_18, FUNC_11(VAR_18->dmaaddr), VAR_4);

 FUNC_1(&VAR_18->pdev->dev, "Set DMA address to %x (virt %p)\n",
       FUNC_2(VAR_18, VAR_3), VAR_18->dmabuf);


 VAR_18->usedma = VAR_15;

 VAR_18->ctl2 = FUNC_0(27);
 if (VAR_17->writesize == 2048)
  VAR_18->ctl2 |= FUNC_0(29);


 FUNC_8(VAR_17, &VAR_14);
 if (VAR_17->writesize == 2048) {
  VAR_18->nand.bbt_td = &VAR_6;
  VAR_18->nand.bbt_md = &VAR_8;
 } else if (VAR_17->writesize == 512) {
  VAR_18->nand.bbt_td = &VAR_7;
  VAR_18->nand.bbt_md = &VAR_9;
 } else {
  FUNC_4(&VAR_18->pdev->dev,
    "Unexpected NAND flash writesize %d. Aborting\n",
    VAR_17->writesize);
  VAR_19 = -VAR_1;
  goto out_free_dma;
 }

 VAR_18->nand.ecc.mode = VAR_5;
 VAR_18->nand.ecc.size = VAR_17->writesize;
 VAR_18->nand.ecc.bytes = 14;
 VAR_18->nand.ecc.strength = 4;
 VAR_18->nand.ecc.write_page = VAR_13;
 VAR_18->nand.ecc.write_oob = VAR_12;
 VAR_18->nand.ecc.read_page = VAR_11;
 VAR_18->nand.ecc.read_oob = VAR_10;

 return 0;

 out_free_dma:
 FUNC_6(&VAR_18->pdev->dev, 2112, VAR_18->dmabuf, VAR_18->dmaaddr);

 return VAR_19;
}
