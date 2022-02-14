
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* dev; int * clk_gals0; int * clk_smi; int * clk_apb; } ;
struct mtk_smi_larb {struct device* smi_common_dev; TYPE_1__ smi; TYPE_2__* larb_gen; int * base; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {scalar_t__ has_gals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 int * FUNC_5 (struct device*,struct resource*) ;
 struct mtk_smi_larb* FUNC_6 (struct device*,int,int ) ;
 int VAR_6 ;
 TYPE_2__* FUNC_7 (struct device*) ;
 struct platform_device* FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (struct platform_device*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct mtk_smi_larb*) ;
 int FUNC_14 (struct device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct mtk_smi_larb *VAR_8;
 struct resource *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 struct device_node *VAR_11;
 struct platform_device *VAR_12;

 VAR_8 = FUNC_6(VAR_10, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->larb_gen = FUNC_7(VAR_10);
 VAR_9 = FUNC_12(VAR_7, VAR_5, 0);
 VAR_8->base = FUNC_5(VAR_10, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->smi.clk_apb = FUNC_4(VAR_10, "apb");
 if (FUNC_0(VAR_8->smi.clk_apb))
  return FUNC_1(VAR_8->smi.clk_apb);

 VAR_8->smi.clk_smi = FUNC_4(VAR_10, "smi");
 if (FUNC_0(VAR_8->smi.clk_smi))
  return FUNC_1(VAR_8->smi.clk_smi);

 if (VAR_8->larb_gen->has_gals) {

  VAR_8->smi.clk_gals0 = FUNC_4(VAR_10, "gals");
  if (FUNC_1(VAR_8->smi.clk_gals0) == -VAR_1)
   VAR_8->smi.clk_gals0 = ((void*)0);
  else if (FUNC_0(VAR_8->smi.clk_gals0))
   return FUNC_1(VAR_8->smi.clk_gals0);
 }
 VAR_8->smi.dev = VAR_10;

 VAR_11 = FUNC_10(VAR_10->of_node, "mediatek,smi", 0);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_8(VAR_11);
 FUNC_9(VAR_11);
 if (VAR_12) {
  if (!FUNC_11(VAR_12))
   return -VAR_3;
  VAR_8->smi_common_dev = &VAR_12->dev;
 } else {
  FUNC_3(VAR_10, "Failed to get the smi_common device\n");
  return -VAR_0;
 }

 FUNC_14(VAR_10);
 FUNC_13(VAR_7, VAR_8);
 return FUNC_2(VAR_10, &VAR_6);
}
