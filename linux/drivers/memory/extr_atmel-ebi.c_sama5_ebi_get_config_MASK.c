
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atmel_ebi_dev_config {int smcconf; int cs; } ;
struct atmel_ebi_dev {TYPE_2__* ebi; } ;
struct TYPE_3__ {int layout; int regmap; } ;
struct TYPE_4__ {TYPE_1__ smc; } ;


 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct atmel_ebi_dev *VAR_0,
     struct atmel_ebi_dev_config *VAR_1)
{
 FUNC_0(VAR_0->ebi->smc.regmap, VAR_0->ebi->smc.layout,
          VAR_1->cs, &VAR_1->smcconf);
}
