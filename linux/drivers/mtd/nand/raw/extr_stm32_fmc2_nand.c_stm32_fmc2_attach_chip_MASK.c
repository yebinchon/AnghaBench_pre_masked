
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_fmc2_nfc {int dev; } ;
struct TYPE_2__ {scalar_t__ mode; int size; } ;
struct nand_chip {int bbt_options; int options; TYPE_1__ ecc; int controller; } ;
struct mtd_info {int writesize; scalar_t__ oobsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtd_info*,int *) ;
 int FUNC_2 (struct nand_chip*,int *,scalar_t__) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int VAR_7 ;
 int FUNC_4 (struct nand_chip*) ;
 int VAR_8 ;
 int FUNC_5 (struct stm32_fmc2_nfc*,int) ;
 struct stm32_fmc2_nfc* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_9)
{
 struct stm32_fmc2_nfc *VAR_10 = FUNC_6(VAR_9->controller);
 struct mtd_info *VAR_11 = FUNC_3(VAR_9);
 int VAR_12;
 if (VAR_9->ecc.mode != VAR_6) {
  FUNC_0(VAR_10->dev, "nand_ecc_mode is not well defined in the DT\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_2(VAR_9, &VAR_7,
       VAR_11->oobsize - VAR_1);
 if (VAR_12) {
  FUNC_0(VAR_10->dev, "no valid ECC settings set\n");
  return VAR_12;
 }

 if (VAR_11->writesize / VAR_9->ecc.size > VAR_2) {
  FUNC_0(VAR_10->dev, "nand page size is not supported\n");
  return -VAR_0;
 }

 if (VAR_9->bbt_options & VAR_4)
  VAR_9->bbt_options |= VAR_3;


 FUNC_4(VAR_9);


 FUNC_1(VAR_11, &VAR_8);


 if (VAR_9->options & VAR_5)
  FUNC_5(VAR_10, 1);

 return 0;
}
