
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct meson_nfc_nand_chip {int bch_mode; } ;
struct meson_nfc {scalar_t__ reg_base; } ;


 int FUNC_0 (int,int,int,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct mtd_info*) ;
 struct meson_nfc* FUNC_4 (int ) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct nand_chip *VAR_2, int VAR_3, bool VAR_4,
     int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_5(VAR_2);
 struct meson_nfc *VAR_7 = FUNC_4(FUNC_3(VAR_6));
 struct meson_nfc_nand_chip *VAR_8 = FUNC_6(VAR_2);
 u32 VAR_9 = VAR_8->bch_mode, VAR_10;
 int VAR_11 = VAR_6->writesize, VAR_12, VAR_13;

 VAR_12 = VAR_2->ecc.size;

 if (VAR_3) {
  VAR_11 = VAR_6->writesize + VAR_6->oobsize;
  VAR_10 = (VAR_11 & FUNC_2(5, 0)) | VAR_5 | FUNC_1(VAR_4);
  FUNC_7(VAR_10, VAR_7->reg_base + VAR_1);
  return;
 }

 VAR_13 = VAR_11 / VAR_2->ecc.size;

 VAR_10 = FUNC_0(FUNC_1(VAR_4), VAR_5, VAR_9,
         VAR_0, VAR_12, VAR_13);

 FUNC_7(VAR_10, VAR_7->reg_base + VAR_1);
}
