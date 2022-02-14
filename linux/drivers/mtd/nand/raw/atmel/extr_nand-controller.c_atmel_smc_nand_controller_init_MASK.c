
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct device {TYPE_3__* parent; } ;
struct atmel_smc_nand_ebi_csa_cfg {int offs; } ;
struct TYPE_5__ {TYPE_1__* caps; struct device* dev; } ;
struct atmel_smc_nand_controller {struct atmel_smc_nand_ebi_csa_cfg* ebi_csa; int ebi_csa_regmap; TYPE_2__ base; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_4__ {int ebi_csa_regmap_name; scalar_t__ legacy_of_bindings; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 struct of_device_id* FUNC_4 (int ,struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct device_node*) ;

__attribute__((used)) static int
FUNC_8(struct atmel_smc_nand_controller *VAR_1)
{
 struct device *VAR_2 = VAR_1->base.dev;
 const struct of_device_id *VAR_3;
 struct device_node *VAR_4;
 int VAR_5;


 if (VAR_1->base.caps->legacy_of_bindings)
  return 0;

 VAR_4 = FUNC_6(VAR_2->parent->of_node,
         VAR_1->base.caps->ebi_csa_regmap_name, 0);
 if (!VAR_4)
  return 0;

 VAR_3 = FUNC_4(VAR_0, VAR_4);
 if (!VAR_3) {
  FUNC_5(VAR_4);
  return 0;
 }

 VAR_1->ebi_csa_regmap = FUNC_7(VAR_4);
 FUNC_5(VAR_4);
 if (FUNC_0(VAR_1->ebi_csa_regmap)) {
  VAR_5 = FUNC_1(VAR_1->ebi_csa_regmap);
  FUNC_2(VAR_2, "Could not get EBICSA regmap (err = %d)\n", VAR_5);
  return VAR_5;
 }

 VAR_1->ebi_csa = (struct atmel_smc_nand_ebi_csa_cfg *)VAR_3->data;





 if (FUNC_3(VAR_2->parent->of_node,
        "atmel,at91sam9263-ebi1"))
  VAR_1->ebi_csa->offs += 4;

 return 0;
}
