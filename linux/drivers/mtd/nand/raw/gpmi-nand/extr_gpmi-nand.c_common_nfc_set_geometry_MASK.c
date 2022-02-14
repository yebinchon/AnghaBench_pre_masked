
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ strength; scalar_t__ step_size; } ;
struct TYPE_8__ {TYPE_3__ eccreq; } ;
struct TYPE_5__ {scalar_t__ strength; scalar_t__ size; } ;
struct nand_chip {TYPE_4__ base; TYPE_1__ ecc; } ;
struct gpmi_nand_data {TYPE_2__* dev; struct nand_chip nand; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpmi_nand_data*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (struct gpmi_nand_data*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpmi_nand_data *VAR_1)
{
 struct nand_chip *VAR_2 = &VAR_1->nand;

 if (VAR_2->ecc.strength > 0 && VAR_2->ecc.size > 0)
  return FUNC_2(VAR_1, VAR_2->ecc.strength,
      VAR_2->ecc.size);

 if ((FUNC_1(VAR_1->dev->of_node, "fsl,use-minimum-ecc"))
    || FUNC_0(VAR_1)) {
  if (!(VAR_2->base.eccreq.strength > 0 &&
        VAR_2->base.eccreq.step_size > 0))
   return -VAR_0;

  return FUNC_2(VAR_1,
      VAR_2->base.eccreq.strength,
      VAR_2->base.eccreq.step_size);
 }

 return 0;
}
