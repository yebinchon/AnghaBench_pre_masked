
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int bbt_options; unsigned long long phys_erase_shift; scalar_t__ bbt; } ;
struct TYPE_2__ {int badblocks; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;
struct erase_info {unsigned long long len; int addr; } ;
typedef int loff_t ;
typedef int einfo ;


 int VAR_0 ;
 int FUNC_0 (struct erase_info*,int ,int) ;
 int FUNC_1 (struct nand_chip*,struct erase_info*,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int ) ;
 int FUNC_4 (struct nand_chip*,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_1, loff_t VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_6(VAR_1);
 int VAR_4, VAR_5 = 0;

 if (!(VAR_1->bbt_options & VAR_0)) {
  struct erase_info VAR_6;


  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.addr = VAR_2;
  VAR_6.len = 1ULL << VAR_1->phys_erase_shift;
  FUNC_1(VAR_1, &VAR_6, 0);


  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_3(VAR_1, VAR_2);
  FUNC_5(VAR_1);
 }


 if (VAR_1->bbt) {
  VAR_4 = FUNC_4(VAR_1, VAR_2);
  if (!VAR_5)
   VAR_5 = VAR_4;
 }

 if (!VAR_5)
  VAR_3->ecc_stats.badblocks++;

 return VAR_5;
}
