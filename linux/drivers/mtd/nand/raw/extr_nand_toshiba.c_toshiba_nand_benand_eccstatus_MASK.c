
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {unsigned int corrected; int failed; } ;
struct mtd_info {unsigned int bitflip_threshold; TYPE_1__ ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 unsigned int VAR_5 = 0;
 u8 VAR_6;


 VAR_4 = FUNC_0(VAR_2, &VAR_6);
 if (VAR_4)
  return VAR_4;

 if (VAR_6 & VAR_0) {

  VAR_3->ecc_stats.failed++;
 } else if (VAR_6 & VAR_1) {

  VAR_5 = VAR_3->bitflip_threshold;
  VAR_3->ecc_stats.corrected += VAR_5;
 }

 return VAR_5;
}
