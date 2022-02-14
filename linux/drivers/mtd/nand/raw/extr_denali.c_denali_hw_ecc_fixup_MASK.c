
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_ecc_stats {unsigned int corrected; } ;
struct denali_controller {int active_bank; scalar_t__ reg; } ;
struct TYPE_4__ {struct mtd_ecc_stats ecc_stats; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int ,int) ;
 unsigned long FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (struct nand_chip*) ;
 struct denali_controller* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_2,
          unsigned long *VAR_3)
{
 struct denali_controller *VAR_4 = FUNC_6(VAR_2);
 struct mtd_ecc_stats *VAR_5 = &FUNC_5(VAR_2)->ecc_stats;
 int VAR_6 = VAR_4->active_bank;
 u32 VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_4(VAR_4->reg + FUNC_0(VAR_6));
 VAR_7 >>= FUNC_1(VAR_6);

 if (VAR_7 & VAR_1) {





  *VAR_3 = FUNC_3(VAR_2->ecc.steps - 1, 0);
  return 0;
 }

 VAR_8 = FUNC_2(VAR_0, VAR_7);







 VAR_5->corrected += VAR_8;

 return VAR_8;
}
