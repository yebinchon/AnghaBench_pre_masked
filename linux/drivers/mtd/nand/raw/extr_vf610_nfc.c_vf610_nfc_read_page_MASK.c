
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct vf610_nfc {scalar_t__ regs; int ecc_mode; } ;
struct nand_chip {int * oob_poi; int cur_cs; } ;
struct TYPE_2__ {int corrected; int failed; } ;
struct mtd_info {int writesize; int oobsize; TYPE_1__ ecc_stats; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 struct vf610_nfc* FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int *,int *,int) ;
 int FUNC_4 (struct vf610_nfc*,int ) ;
 int FUNC_5 (struct nand_chip*,int,int*,int*) ;
 int FUNC_6 (int *,scalar_t__,int,int) ;
 int FUNC_7 (struct vf610_nfc*,int ,int,int,int,int) ;
 int FUNC_8 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_12, uint8_t *VAR_13,
          int VAR_14, int VAR_15)
{
 struct vf610_nfc *VAR_16 = FUNC_1(VAR_12);
 struct mtd_info *VAR_17 = FUNC_2(VAR_12);
 int VAR_18 = VAR_17->writesize + VAR_17->oobsize;
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 int VAR_23;

 FUNC_8(VAR_12, VAR_12->cur_cs);

 VAR_21 |= VAR_10 << VAR_0;
 VAR_22 |= VAR_5 | VAR_3 | VAR_4;

 FUNC_5(VAR_12, VAR_15, &VAR_22, &VAR_19);

 VAR_20 |= VAR_11 << VAR_1;
 VAR_22 |= VAR_6 | VAR_7 | VAR_8;

 VAR_21 |= VAR_22 << VAR_2;

 FUNC_4(VAR_16, VAR_16->ecc_mode);
 FUNC_7(VAR_16, 0, VAR_19, VAR_20, VAR_21, VAR_18);
 FUNC_4(VAR_16, VAR_9);





 FUNC_6(VAR_13, VAR_16->regs + FUNC_0(0),
          VAR_17->writesize, 0);
 if (VAR_14)
  FUNC_6(VAR_12->oob_poi,
           VAR_16->regs + FUNC_0(0) +
         VAR_17->writesize,
           VAR_17->oobsize, 0);

 VAR_23 = FUNC_3(VAR_12, VAR_13, VAR_12->oob_poi, VAR_15);

 if (VAR_23 < 0) {
  VAR_17->ecc_stats.failed++;
  return 0;
 } else {
  VAR_17->ecc_stats.corrected += VAR_23;
  return VAR_23;
 }
}
