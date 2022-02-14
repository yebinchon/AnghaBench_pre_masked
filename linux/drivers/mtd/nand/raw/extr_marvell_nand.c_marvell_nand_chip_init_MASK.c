
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pxa3xx_nand_platform_data {int nr_parts; int * parts; } ;
struct TYPE_8__ {int mode; } ;
struct nand_chip {int options; TYPE_4__ ecc; int * controller; } ;
struct TYPE_7__ {struct device* parent; } ;
struct mtd_info {TYPE_3__ dev; } ;
struct marvell_nfc {int chips; scalar_t__ regs; int controller; TYPE_1__* caps; int assigned_cs; } ;
struct marvell_nand_chip {int nsels; int selected_die; int node; void* ndtr1; void* ndtr0; struct nand_chip chip; TYPE_2__* sels; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int cs; int rb; int ndcb0_csel; } ;
struct TYPE_5__ {int max_cs_nb; int max_rb_nb; scalar_t__ legacy_of_bindings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct pxa3xx_nand_platform_data* FUNC_1 (struct device*) ;
 struct marvell_nand_chip* FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int) ;
 int FUNC_7 (struct nand_chip*,struct device_node*) ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct device_node*,char*,int) ;
 int FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*,char*,int,int*) ;
 void* FUNC_12 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_13 (struct marvell_nand_chip*,int ,int) ;
 scalar_t__ FUNC_14 (int,int *) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_10, struct marvell_nfc *VAR_11,
      struct device_node *VAR_12)
{
 struct pxa3xx_nand_platform_data *VAR_13 = FUNC_1(VAR_10);
 struct marvell_nand_chip *VAR_14;
 struct mtd_info *VAR_15;
 struct nand_chip *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21;
 if (VAR_13 || VAR_11->caps->legacy_of_bindings) {
  VAR_17 = 1;
 } else {
  VAR_17 = FUNC_9(VAR_12, "reg", sizeof(u32));
  if (VAR_17 <= 0) {
   FUNC_0(VAR_10, "missing/invalid reg property\n");
   return -VAR_0;
  }
 }


 VAR_14 = FUNC_2(VAR_10,
        FUNC_13(VAR_14, VAR_9, VAR_17),
        VAR_2);
 if (!VAR_14) {
  FUNC_0(VAR_10, "could not allocate chip structure\n");
  return -VAR_1;
 }

 VAR_14->nsels = VAR_17;
 VAR_14->selected_die = -1;

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  if (VAR_13 || VAR_11->caps->legacy_of_bindings) {




   VAR_20 = VAR_19;
  } else {

   VAR_18 = FUNC_11(VAR_12, "reg", VAR_19, &VAR_20);
   if (VAR_18) {
    FUNC_0(VAR_10, "could not retrieve reg property: %d\n",
     VAR_18);
    return VAR_18;
   }
  }

  if (VAR_20 >= VAR_11->caps->max_cs_nb) {
   FUNC_0(VAR_10, "invalid reg value: %u (max CS = %d)\n",
    VAR_20, VAR_11->caps->max_cs_nb);
   return -VAR_0;
  }

  if (FUNC_14(VAR_20, &VAR_11->assigned_cs)) {
   FUNC_0(VAR_10, "CS %d already assigned\n", VAR_20);
   return -VAR_0;
  }
  VAR_14->sels[VAR_19].cs = VAR_20;
  switch (VAR_20) {
  case 0:
  case 2:
   VAR_14->sels[VAR_19].ndcb0_csel = 0;
   break;
  case 1:
  case 3:
   VAR_14->sels[VAR_19].ndcb0_csel = VAR_6;
   break;
  default:
   return -VAR_0;
  }


  if (VAR_13 || VAR_11->caps->legacy_of_bindings) {

   VAR_21 = 0;
  } else {
   VAR_18 = FUNC_11(VAR_12, "nand-rb", VAR_19,
        &VAR_21);
   if (VAR_18) {
    FUNC_0(VAR_10,
     "could not retrieve RB property: %d\n",
     VAR_18);
    return VAR_18;
   }
  }

  if (VAR_21 >= VAR_11->caps->max_rb_nb) {
   FUNC_0(VAR_10, "invalid reg value: %u (max RB = %d)\n",
    VAR_21, VAR_11->caps->max_rb_nb);
   return -VAR_0;
  }

  VAR_14->sels[VAR_19].rb = VAR_21;
 }

 VAR_16 = &VAR_14->chip;
 VAR_16->controller = &VAR_11->controller;
 FUNC_7(VAR_16, VAR_12);

 if (!FUNC_10(VAR_12, "marvell,nand-keep-config"))
  VAR_16->options |= VAR_5;

 VAR_15 = FUNC_8(VAR_16);
 VAR_15->dev.parent = VAR_10;





 VAR_16->ecc.mode = VAR_4;





 VAR_14->ndtr0 = FUNC_12(VAR_11->regs + VAR_7);
 VAR_14->ndtr1 = FUNC_12(VAR_11->regs + VAR_8);

 VAR_16->options |= VAR_3;

 VAR_18 = FUNC_6(VAR_16, VAR_14->nsels);
 if (VAR_18) {
  FUNC_0(VAR_10, "could not scan the nand chip\n");
  return VAR_18;
 }

 if (VAR_13)

  VAR_18 = FUNC_4(VAR_15, VAR_13->parts, VAR_13->nr_parts);
 else
  VAR_18 = FUNC_4(VAR_15, ((void*)0), 0);
 if (VAR_18) {
  FUNC_0(VAR_10, "failed to register mtd device: %d\n", VAR_18);
  FUNC_5(VAR_16);
  return VAR_18;
 }

 FUNC_3(&VAR_14->node, &VAR_11->chips);

 return 0;
}
