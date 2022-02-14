
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int u8 ;
typedef int u32 ;
struct gpmc_nand_regs {int * gpmc_bch_result0; int * gpmc_bch_result1; int * gpmc_bch_result2; int * gpmc_bch_result3; int * gpmc_bch_result4; int * gpmc_bch_result5; int * gpmc_bch_result6; } ;
struct TYPE_3__ {int bytes; } ;
struct TYPE_4__ {TYPE_1__ ecc; } ;
struct omap_nand_info {int ecc_opt; struct gpmc_nand_regs reg; TYPE_2__ nand; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;





 int* VAR_1 ;
 int* VAR_2 ;
 struct omap_nand_info* FUNC_0 (struct mtd_info*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_3,
       const u_char *VAR_4, u_char *VAR_5, int VAR_6)
{
 struct omap_nand_info *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = VAR_7->nand.ecc.bytes;
 struct gpmc_nand_regs *VAR_9 = &VAR_7->reg;
 u8 *VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_10 = VAR_5;
 switch (VAR_7->ecc_opt) {
 case 128:
 case 129:
  VAR_11 = FUNC_1(VAR_9->gpmc_bch_result0[VAR_6]);
  VAR_12 = FUNC_1(VAR_9->gpmc_bch_result1[VAR_6]);
  VAR_13 = FUNC_1(VAR_9->gpmc_bch_result2[VAR_6]);
  VAR_14 = FUNC_1(VAR_9->gpmc_bch_result3[VAR_6]);
  *VAR_10++ = (VAR_14 & 0xFF);
  *VAR_10++ = ((VAR_13 >> 24) & 0xFF);
  *VAR_10++ = ((VAR_13 >> 16) & 0xFF);
  *VAR_10++ = ((VAR_13 >> 8) & 0xFF);
  *VAR_10++ = (VAR_13 & 0xFF);
  *VAR_10++ = ((VAR_12 >> 24) & 0xFF);
  *VAR_10++ = ((VAR_12 >> 16) & 0xFF);
  *VAR_10++ = ((VAR_12 >> 8) & 0xFF);
  *VAR_10++ = (VAR_12 & 0xFF);
  *VAR_10++ = ((VAR_11 >> 24) & 0xFF);
  *VAR_10++ = ((VAR_11 >> 16) & 0xFF);
  *VAR_10++ = ((VAR_11 >> 8) & 0xFF);
  *VAR_10++ = (VAR_11 & 0xFF);
  break;
 case 130:
 case 131:
  VAR_11 = FUNC_1(VAR_9->gpmc_bch_result0[VAR_6]);
  VAR_12 = FUNC_1(VAR_9->gpmc_bch_result1[VAR_6]);
  *VAR_10++ = ((VAR_12 >> 12) & 0xFF);
  *VAR_10++ = ((VAR_12 >> 4) & 0xFF);
  *VAR_10++ = ((VAR_12 & 0xF) << 4) |
   ((VAR_11 >> 28) & 0xF);
  *VAR_10++ = ((VAR_11 >> 20) & 0xFF);
  *VAR_10++ = ((VAR_11 >> 12) & 0xFF);
  *VAR_10++ = ((VAR_11 >> 4) & 0xFF);
  *VAR_10++ = ((VAR_11 & 0xF) << 4);
  break;
 case 132:
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result6[VAR_6]);
  VAR_10[0] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[1] = ((VAR_15 >> 0) & 0xFF);
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result5[VAR_6]);
  VAR_10[2] = ((VAR_15 >> 24) & 0xFF);
  VAR_10[3] = ((VAR_15 >> 16) & 0xFF);
  VAR_10[4] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[5] = ((VAR_15 >> 0) & 0xFF);
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result4[VAR_6]);
  VAR_10[6] = ((VAR_15 >> 24) & 0xFF);
  VAR_10[7] = ((VAR_15 >> 16) & 0xFF);
  VAR_10[8] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[9] = ((VAR_15 >> 0) & 0xFF);
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result3[VAR_6]);
  VAR_10[10] = ((VAR_15 >> 24) & 0xFF);
  VAR_10[11] = ((VAR_15 >> 16) & 0xFF);
  VAR_10[12] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[13] = ((VAR_15 >> 0) & 0xFF);
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result2[VAR_6]);
  VAR_10[14] = ((VAR_15 >> 24) & 0xFF);
  VAR_10[15] = ((VAR_15 >> 16) & 0xFF);
  VAR_10[16] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[17] = ((VAR_15 >> 0) & 0xFF);
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result1[VAR_6]);
  VAR_10[18] = ((VAR_15 >> 24) & 0xFF);
  VAR_10[19] = ((VAR_15 >> 16) & 0xFF);
  VAR_10[20] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[21] = ((VAR_15 >> 0) & 0xFF);
  VAR_15 = FUNC_1(VAR_9->gpmc_bch_result0[VAR_6]);
  VAR_10[22] = ((VAR_15 >> 24) & 0xFF);
  VAR_10[23] = ((VAR_15 >> 16) & 0xFF);
  VAR_10[24] = ((VAR_15 >> 8) & 0xFF);
  VAR_10[25] = ((VAR_15 >> 0) & 0xFF);
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_7->ecc_opt) {
 case 130:



  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
   VAR_5[VAR_16] ^= VAR_1[VAR_16];
  break;
 case 131:

  VAR_5[VAR_8 - 1] = 0x0;
  break;
 case 128:



  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
   VAR_5[VAR_16] ^= VAR_2[VAR_16];
  break;
 case 129:

  VAR_5[VAR_8 - 1] = 0x0;
  break;
 case 132:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
