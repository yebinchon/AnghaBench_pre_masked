
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct atmel_nand_controller_caps {scalar_t__ legacy_of_bindings; scalar_t__ has_dma; } ;
struct TYPE_4__ {int * ops; } ;
struct atmel_nand_controller {int smc; int mck; struct atmel_nand_controller_caps const* caps; struct device* dev; int dmac; int pmecc; int chips; TYPE_2__ base; } ;
typedef int dma_cap_mask_t ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (struct platform_device*,struct atmel_nand_controller*) ;
 int FUNC_13 (struct device_node*) ;

__attribute__((used)) static int FUNC_14(struct atmel_nand_controller *VAR_5,
    struct platform_device *VAR_6,
    const struct atmel_nand_controller_caps *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 int VAR_10;

 FUNC_8(&VAR_5->base);
 VAR_5->base.ops = &VAR_4;
 FUNC_0(&VAR_5->chips);
 VAR_5->dev = VAR_8;
 VAR_5->caps = VAR_7;

 FUNC_12(VAR_6, VAR_5);

 VAR_5->pmecc = FUNC_4(VAR_8);
 if (FUNC_1(VAR_5->pmecc)) {
  VAR_10 = FUNC_2(VAR_5->pmecc);
  if (VAR_10 != -VAR_2)
   FUNC_3(VAR_8, "Could not get PMECC object (err = %d)\n",
    VAR_10);
  return VAR_10;
 }

 if (VAR_5->caps->has_dma && !VAR_3) {
  dma_cap_mask_t VAR_11;

  FUNC_6(VAR_11);
  FUNC_5(VAR_0, VAR_11);

  VAR_5->dmac = FUNC_7(VAR_11, ((void*)0), ((void*)0));
  if (!VAR_5->dmac)
   FUNC_3(VAR_5->dev, "Failed to request DMA channel\n");
 }


 if (VAR_5->caps->legacy_of_bindings)
  return 0;

 VAR_5->mck = FUNC_9(VAR_8->parent->of_node, 0);
 if (FUNC_1(VAR_5->mck)) {
  FUNC_3(VAR_8, "Failed to retrieve MCK clk\n");
  return FUNC_2(VAR_5->mck);
 }

 VAR_9 = FUNC_11(VAR_8->parent->of_node, "atmel,smc", 0);
 if (!VAR_9) {
  FUNC_3(VAR_8, "Missing or invalid atmel,smc property\n");
  return -VAR_1;
 }

 VAR_5->smc = FUNC_13(VAR_9);
 FUNC_10(VAR_9);
 if (FUNC_1(VAR_5->smc)) {
  VAR_10 = FUNC_2(VAR_5->smc);
  FUNC_3(VAR_8, "Could not get SMC regmap (err = %d)\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
