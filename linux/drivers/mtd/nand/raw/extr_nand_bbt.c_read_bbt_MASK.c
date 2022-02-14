
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct nand_chip {size_t page_shift; int bbt_erase_shift; } ;
struct nand_bbt_descr {int options; int reserved_block_code; } ;
struct TYPE_2__ {int badblocks; int bbtblocks; } ;
struct mtd_info {size_t writesize; TYPE_1__ ecc_stats; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nand_bbt_descr*) ;
 int FUNC_1 (struct nand_chip*,int,int ) ;
 size_t FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mtd_info*,size_t,size_t,size_t*,int*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_4, uint8_t *VAR_5, int VAR_6, int VAR_7,
      struct nand_bbt_descr *VAR_8, int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_6(VAR_4);
 int VAR_11, VAR_12 = 0, VAR_13, VAR_14, VAR_15 = 0;
 size_t VAR_16, VAR_17, VAR_18;
 loff_t VAR_19;
 int VAR_20 = VAR_8->options & VAR_3;
 uint8_t VAR_21 = (uint8_t)((1 << VAR_20) - 1);
 u32 VAR_22;
 int VAR_23 = VAR_8->reserved_block_code;

 VAR_18 = (VAR_7 * VAR_20) >> 3;
 VAR_22 = FUNC_0(VAR_8);
 VAR_19 = ((loff_t)VAR_6) << VAR_4->page_shift;

 while (VAR_18) {
  VAR_17 = FUNC_2(VAR_18, (size_t)(1 << VAR_4->bbt_erase_shift));
  if (VAR_22) {




   VAR_17 -= VAR_22;
   VAR_19 += VAR_22;
   VAR_22 = 0;
  }
  VAR_11 = FUNC_5(VAR_10, VAR_19, VAR_17, &VAR_16, VAR_5);
  if (VAR_11 < 0) {
   if (FUNC_4(VAR_11)) {
    FUNC_7("nand_bbt: ECC error in BBT at 0x%012llx\n",
     VAR_19 & ~VAR_10->writesize);
    return VAR_11;
   } else if (FUNC_3(VAR_11)) {
    FUNC_7("nand_bbt: corrected error in BBT at 0x%012llx\n",
     VAR_19 & ~VAR_10->writesize);
    VAR_12 = VAR_11;
   } else {
    FUNC_7("nand_bbt: error reading BBT\n");
    return VAR_11;
   }
  }


  for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
   uint8_t VAR_24 = VAR_5[VAR_13];
   for (VAR_14 = 0; VAR_14 < 8; VAR_14 += VAR_20, VAR_15++) {
    uint8_t VAR_25 = (VAR_24 >> VAR_14) & VAR_21;
    if (VAR_25 == VAR_21)
     continue;
    if (VAR_23 && (VAR_25 == VAR_23)) {
     FUNC_7("nand_read_bbt: reserved block at 0x%012llx\n",
       (loff_t)(VAR_9 + VAR_15) <<
       VAR_4->bbt_erase_shift);
     FUNC_1(VAR_4, VAR_9 + VAR_15,
       VAR_1);
     VAR_10->ecc_stats.bbtblocks++;
     continue;
    }




    FUNC_7("nand_read_bbt: bad block at 0x%012llx\n",
      (loff_t)(VAR_9 + VAR_15) <<
      VAR_4->bbt_erase_shift);

    if (VAR_25 == 0)
     FUNC_1(VAR_4, VAR_9 + VAR_15,
       VAR_0);
    else
     FUNC_1(VAR_4, VAR_9 + VAR_15,
       VAR_2);
    VAR_10->ecc_stats.badblocks++;
   }
  }
  VAR_18 -= VAR_17;
  VAR_19 += VAR_17;
 }
 return VAR_12;
}
