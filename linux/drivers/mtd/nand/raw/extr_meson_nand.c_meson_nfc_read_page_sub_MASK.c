
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int steps; } ;
struct nand_chip {int options; TYPE_1__ ecc; int cur_cs; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct meson_nfc_nand_chip {int info_buf; int data_buf; } ;
struct meson_nfc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct meson_nfc*,struct nand_chip*,int) ;
 int FUNC_1 (struct nand_chip*,int,int ,int ) ;
 int FUNC_2 (struct meson_nfc*,int) ;
 int FUNC_3 (struct nand_chip*,int,int,int ) ;
 int FUNC_4 (struct nand_chip*,int ,int,int ,int,int ) ;
 int FUNC_5 (struct nand_chip*,int,int ) ;
 int FUNC_6 (struct nand_chip*,int ) ;
 int FUNC_7 (struct meson_nfc*) ;
 struct meson_nfc* FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_10 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_11(struct nand_chip *VAR_6,
       int VAR_7, int VAR_8)
{
 struct mtd_info *VAR_9 = FUNC_9(VAR_6);
 struct meson_nfc *VAR_10 = FUNC_8(VAR_6);
 struct meson_nfc_nand_chip *VAR_11 = FUNC_10(VAR_6);
 int VAR_12, VAR_13;
 int VAR_14;

 FUNC_6(VAR_6, VAR_6->cur_cs);

 VAR_12 = VAR_9->writesize + VAR_9->oobsize;
 VAR_13 = VAR_6->ecc.steps * VAR_5;

 VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_0);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_6, VAR_11->data_buf,
      VAR_12, VAR_11->info_buf,
      VAR_13, VAR_1);
 if (VAR_14)
  return VAR_14;

 if (VAR_6->options & VAR_2) {
  FUNC_2(VAR_10, VAR_7);
  FUNC_1(VAR_6, VAR_8, VAR_0,
         VAR_4);
 } else {
  FUNC_1(VAR_6, VAR_8, VAR_0,
         VAR_3);
 }

 VAR_14 = FUNC_7(VAR_10);
 FUNC_0(VAR_10, VAR_6, VAR_8);

 FUNC_3(VAR_6, VAR_12, VAR_13, VAR_1);

 return VAR_14;
}
