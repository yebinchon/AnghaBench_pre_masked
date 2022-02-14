
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nand_chip {int dummy; } ;
struct fsmc_nand_data {scalar_t__ regs_va; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_7 ;
 struct fsmc_nand_data* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_8, const u8 *VAR_9,
    u8 *VAR_10)
{
 struct fsmc_nand_data *VAR_11 = FUNC_2(VAR_8);
 u32 VAR_12;
 unsigned long VAR_13 = VAR_7 + VAR_4;

 do {
  if (FUNC_3(VAR_11->regs_va + VAR_6) & VAR_5)
   break;

  FUNC_0();
 } while (!FUNC_4(VAR_7, VAR_13));

 if (FUNC_4(VAR_7, VAR_13)) {
  FUNC_1(VAR_11->dev, "calculate ecc timed out\n");
  return -VAR_3;
 }

 VAR_12 = FUNC_3(VAR_11->regs_va + VAR_0);
 VAR_10[0] = VAR_12;
 VAR_10[1] = VAR_12 >> 8;
 VAR_10[2] = VAR_12 >> 16;
 VAR_10[3] = VAR_12 >> 24;

 VAR_12 = FUNC_3(VAR_11->regs_va + VAR_1);
 VAR_10[4] = VAR_12;
 VAR_10[5] = VAR_12 >> 8;
 VAR_10[6] = VAR_12 >> 16;
 VAR_10[7] = VAR_12 >> 24;

 VAR_12 = FUNC_3(VAR_11->regs_va + VAR_2);
 VAR_10[8] = VAR_12;
 VAR_10[9] = VAR_12 >> 8;
 VAR_10[10] = VAR_12 >> 16;
 VAR_10[11] = VAR_12 >> 24;

 VAR_12 = FUNC_3(VAR_11->regs_va + VAR_6);
 VAR_10[12] = VAR_12 >> 16;

 return 0;
}
