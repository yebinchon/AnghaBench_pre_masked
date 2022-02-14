
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct meson_nfc_nand_chip {void* data_buf; void* info_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_2(VAR_3);
 struct meson_nfc_nand_chip *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_4->writesize / VAR_3->ecc.size;

 VAR_6 = VAR_4->writesize + VAR_4->oobsize;
 VAR_7 = VAR_8 * VAR_2;

 VAR_5->data_buf = FUNC_1(VAR_6, VAR_1);
 if (!VAR_5->data_buf)
  return -VAR_0;

 VAR_5->info_buf = FUNC_1(VAR_7, VAR_1);
 if (!VAR_5->info_buf) {
  FUNC_0(VAR_5->data_buf);
  return -VAR_0;
 }

 return 0;
}
