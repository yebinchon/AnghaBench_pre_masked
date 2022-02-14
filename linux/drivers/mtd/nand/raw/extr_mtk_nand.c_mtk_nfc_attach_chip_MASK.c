
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int options; int bbt_options; } ;
struct mtk_nfc_nand_chip {int bad_mark; int fdm; int spare_per_sector; } ;
struct mtk_nfc {int buffer; } ;
struct TYPE_2__ {struct device* parent; } ;
struct mtd_info {int writesize; int oobsize; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,struct mtd_info*) ;
 int FUNC_3 (int *,struct mtd_info*) ;
 int FUNC_4 (int *,struct mtd_info*) ;
 int FUNC_5 (int *,struct mtd_info*) ;
 struct mtk_nfc* FUNC_6 (struct nand_chip*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 struct mtk_nfc_nand_chip* FUNC_8 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_7(VAR_6);
 struct device *VAR_8 = VAR_7->dev.parent;
 struct mtk_nfc *VAR_9 = FUNC_6(VAR_6);
 struct mtk_nfc_nand_chip *VAR_10 = FUNC_8(VAR_6);
 int VAR_11;
 int VAR_12;

 if (VAR_6->options & VAR_5) {
  FUNC_0(VAR_8, "16bits buswidth not supported");
  return -VAR_0;
 }


 if (VAR_6->bbt_options & VAR_4)
  VAR_6->bbt_options |= VAR_3;

 VAR_12 = FUNC_2(VAR_8, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(&VAR_10->spare_per_sector, VAR_7);
 if (VAR_12)
  return VAR_12;

 FUNC_4(&VAR_10->fdm, VAR_7);
 FUNC_3(&VAR_10->bad_mark, VAR_7);

 VAR_11 = VAR_7->writesize + VAR_7->oobsize;
 VAR_9->buffer = FUNC_1(VAR_8, VAR_11, VAR_2);
 if (!VAR_9->buffer)
  return -VAR_1;

 return 0;
}
