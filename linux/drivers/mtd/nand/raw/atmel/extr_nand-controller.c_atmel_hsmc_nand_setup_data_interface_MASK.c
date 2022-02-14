
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_data_interface {int dummy; } ;
struct atmel_smc_cs_conf {int timings; } ;
struct TYPE_5__ {scalar_t__ type; int id; } ;
struct atmel_nand_cs {struct atmel_smc_cs_conf smcconf; int id; TYPE_2__ rb; } ;
struct TYPE_4__ {int controller; } ;
struct atmel_nand {struct atmel_nand_cs* cs; TYPE_1__ base; } ;
struct TYPE_6__ {int smc; } ;
struct atmel_hsmc_nand_controller {int hsmc_layout; TYPE_3__ base; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,struct atmel_smc_cs_conf*) ;
 int FUNC_2 (struct atmel_nand*,struct nand_data_interface const*,struct atmel_smc_cs_conf*) ;
 struct atmel_hsmc_nand_controller* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct atmel_nand *VAR_2,
     int VAR_3,
     const struct nand_data_interface *VAR_4)
{
 struct atmel_hsmc_nand_controller *VAR_5;
 struct atmel_smc_cs_conf VAR_6;
 struct atmel_nand_cs *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_3(VAR_2->base.controller);

 VAR_8 = FUNC_2(VAR_2, VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_3 == VAR_1)
  return 0;

 VAR_7 = &VAR_2->cs[VAR_3];
 VAR_7->smcconf = VAR_6;

 if (VAR_7->rb.type == VAR_0)
  VAR_7->smcconf.timings |= FUNC_0(VAR_7->rb.id);

 FUNC_1(VAR_5->base.smc, VAR_5->hsmc_layout, VAR_7->id,
     &VAR_7->smcconf);

 return 0;
}
