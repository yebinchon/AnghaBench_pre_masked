
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_data_interface {int dummy; } ;
struct atmel_smc_cs_conf {int dummy; } ;
struct atmel_nand_cs {struct atmel_smc_cs_conf smcconf; int id; } ;
struct atmel_nand_controller {int smc; } ;
struct TYPE_2__ {int controller; } ;
struct atmel_nand {struct atmel_nand_cs* cs; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct atmel_smc_cs_conf*) ;
 int FUNC_1 (struct atmel_nand*,struct nand_data_interface const*,struct atmel_smc_cs_conf*) ;
 struct atmel_nand_controller* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct atmel_nand *VAR_1,
     int VAR_2,
     const struct nand_data_interface *VAR_3)
{
 struct atmel_nand_controller *VAR_4;
 struct atmel_smc_cs_conf VAR_5;
 struct atmel_nand_cs *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_1->base.controller);

 VAR_7 = FUNC_1(VAR_1, VAR_3, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_2 == VAR_0)
  return 0;

 VAR_6 = &VAR_1->cs[VAR_2];
 VAR_6->smcconf = VAR_5;
 FUNC_0(VAR_4->smc, VAR_6->id, &VAR_6->smcconf);

 return 0;
}
