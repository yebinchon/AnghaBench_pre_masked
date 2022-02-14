
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {int corrected; int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;





 int VAR_0 ;

 struct mtd_info* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_1, u8 VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_0(VAR_1);





 switch (VAR_2 & VAR_0) {
 case 128:
  VAR_3->ecc_stats.failed++;
  return 0;
 case 131:
  VAR_3->ecc_stats.corrected += 3;
  return 3;
 case 130:
  VAR_3->ecc_stats.corrected += 6;

  return 6;
 case 129:
  VAR_3->ecc_stats.corrected += 8;

  return 8;
 default:
  return 0;
 }
}
