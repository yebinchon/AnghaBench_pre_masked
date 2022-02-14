
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; int * oob_poi; } ;
struct mtd_info {int writesize; } ;
struct meson_nfc_nand_chip {int info_buf; int data_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct nand_chip*,int *) ;
 int FUNC_3 (struct nand_chip*,int,int ) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1,
          const u8 *VAR_2, int VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_4(VAR_1);
 struct meson_nfc_nand_chip *VAR_6 = FUNC_5(VAR_1);
 u8 *VAR_7 = VAR_1->oob_poi;

 FUNC_0(VAR_6->data_buf, VAR_2, VAR_5->writesize);
 FUNC_1(VAR_6->info_buf, 0, VAR_1->ecc.steps * VAR_0);
 FUNC_2(VAR_1, VAR_7);

 return FUNC_3(VAR_1, VAR_4, 0);
}
