
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int bytes; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct fsmc_nand_data {scalar_t__ regs_va; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;
 struct fsmc_nand_data* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_5, u8 *VAR_6,
      u8 *VAR_7, u8 *VAR_8)
{
 struct fsmc_nand_data *VAR_9 = FUNC_4(VAR_5);
 u32 VAR_10[8];
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = (FUNC_5(VAR_9->regs_va + VAR_4) >> 10) & 0xF;


 if (FUNC_2(VAR_11 == 0))
  return 0;


 if (FUNC_6(VAR_11 > 8)) {
  int VAR_17 = FUNC_1(VAR_7, VAR_5->ecc.bytes, 8);
  int VAR_18 = FUNC_1(VAR_6, VAR_5->ecc.size, 8);

  if ((VAR_17 + VAR_18) <= 8) {
   if (VAR_18)
    FUNC_3(VAR_6, 0xff, VAR_5->ecc.size);
   return VAR_18;
  }

  return -VAR_0;
 }
 VAR_13 = FUNC_5(VAR_9->regs_va + VAR_1);
 VAR_14 = FUNC_5(VAR_9->regs_va + VAR_2);
 VAR_15 = FUNC_5(VAR_9->regs_va + VAR_3);
 VAR_16 = FUNC_5(VAR_9->regs_va + VAR_4);

 VAR_10[0] = (VAR_13 >> 0) & 0x1FFF;
 VAR_10[1] = (VAR_13 >> 13) & 0x1FFF;
 VAR_10[2] = (((VAR_14 >> 0) & 0x7F) << 6) | ((VAR_13 >> 26) & 0x3F);
 VAR_10[3] = (VAR_14 >> 7) & 0x1FFF;
 VAR_10[4] = (((VAR_15 >> 0) & 0x1) << 12) | ((VAR_14 >> 20) & 0xFFF);
 VAR_10[5] = (VAR_15 >> 1) & 0x1FFF;
 VAR_10[6] = (VAR_15 >> 14) & 0x1FFF;
 VAR_10[7] = (((VAR_16 >> 16) & 0xFF) << 5) | ((VAR_15 >> 27) & 0x1F);

 VAR_12 = 0;
 while (VAR_11--) {
  FUNC_0(0, (unsigned long *)&VAR_10[VAR_12]);
  FUNC_0(1, (unsigned long *)&VAR_10[VAR_12]);

  if (VAR_10[VAR_12] < VAR_5->ecc.size * 8) {
   FUNC_0(VAR_10[VAR_12], (unsigned long *)VAR_6);
   VAR_12++;
  }
 }
 return VAR_12;
}
