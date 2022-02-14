
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int size; } ;
struct nand_chip {TYPE_2__ ecc; } ;
struct mtk_nfc {TYPE_1__* caps; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct TYPE_3__ {int* spare_size; int num_spare_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mtk_nfc* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(u32 *VAR_2, struct mtd_info *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_3);
 struct mtk_nfc *VAR_5 = FUNC_1(VAR_4);
 const u8 *VAR_6 = VAR_5->caps->spare_size;
 u32 VAR_7, VAR_8, VAR_9 = 0;

 VAR_7 = VAR_3->writesize / VAR_4->ecc.size;
 *VAR_2 = VAR_3->oobsize / VAR_7;

 if (VAR_4->ecc.size == 1024)
  *VAR_2 >>= 1;

 if (*VAR_2 < VAR_1)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5->caps->num_spare_size; VAR_8++) {
  if (*VAR_2 >= VAR_6[VAR_8] && VAR_6[VAR_8] >= VAR_6[VAR_9]) {
   VAR_9 = VAR_8;
   if (*VAR_2 == VAR_6[VAR_8])
    break;
  }
 }

 *VAR_2 = VAR_6[VAR_9];

 if (VAR_4->ecc.size == 1024)
  *VAR_2 <<= 1;

 return 0;
}
