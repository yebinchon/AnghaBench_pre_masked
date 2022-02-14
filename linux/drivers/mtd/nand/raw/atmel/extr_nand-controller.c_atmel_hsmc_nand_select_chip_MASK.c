
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dev_ready; } ;
struct nand_chip {TYPE_3__ legacy; int controller; } ;
struct mtd_info {int oobsize; int writesize; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_8__ {int smc; } ;
struct atmel_hsmc_nand_controller {TYPE_4__ base; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ rb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct nand_chip*,int) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 struct atmel_nand* FUNC_6 (struct nand_chip*) ;
 struct atmel_hsmc_nand_controller* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct nand_chip *VAR_10, int VAR_11)
{
 struct mtd_info *VAR_12 = FUNC_3(VAR_10);
 struct atmel_nand *VAR_13 = FUNC_6(VAR_10);
 struct atmel_hsmc_nand_controller *VAR_14;

 VAR_14 = FUNC_7(VAR_10->controller);

 FUNC_2(VAR_10, VAR_11);

 if (!VAR_13->activecs) {
  FUNC_5(VAR_14->base.smc, VAR_5,
        VAR_6);
  return;
 }

 if (VAR_13->activecs->rb.type == VAR_8)
  VAR_10->legacy.dev_ready = VAR_9;

 FUNC_4(VAR_14->base.smc, VAR_0,
      VAR_1 |
      VAR_3 |
      VAR_2 |
      VAR_4,
      FUNC_0(VAR_12->writesize) |
      FUNC_1(VAR_12->oobsize) |
      VAR_2);
 FUNC_5(VAR_14->base.smc, VAR_5,
       VAR_7);
}
