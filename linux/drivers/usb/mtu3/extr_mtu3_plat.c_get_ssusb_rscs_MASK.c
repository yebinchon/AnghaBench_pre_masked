
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_switch_mtk {void* manual_drd_enabled; void* is_u3_drd; void* edev; void* role_sw_used; void* vbus; } ;
struct ssusb_mtk {int num_phys; int u3p_dis_msk; int dr_mode; struct device* dev; void* ippc_base; void** phys; void* dma_clk; void* mcu_clk; void* ref_clk; void* sys_clk; void* vusb33; struct otg_switch_mtk otg_switch; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ,void*,int ,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 void** FUNC_7 (struct device*,int,int,int ) ;
 void* FUNC_8 (struct device*,struct device_node*,int) ;
 void* FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (struct device*,int ) ;
 int FUNC_11 (struct device_node*,char*,char*) ;
 void* FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct device_node*,char*,int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct ssusb_mtk*,struct device_node*) ;
 int FUNC_16 (struct device*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7, struct ssusb_mtk *VAR_8)
{
 struct device_node *VAR_9 = VAR_7->dev.of_node;
 struct otg_switch_mtk *VAR_10 = &VAR_8->otg_switch;
 struct device *VAR_11 = &VAR_7->dev;
 struct resource *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_8->vusb33 = FUNC_9(VAR_11, "vusb33");
 if (FUNC_0(VAR_8->vusb33)) {
  FUNC_2(VAR_11, "failed to get vusb33\n");
  return FUNC_1(VAR_8->vusb33);
 }

 VAR_8->sys_clk = FUNC_4(VAR_11, "sys_ck");
 if (FUNC_0(VAR_8->sys_clk)) {
  FUNC_2(VAR_11, "failed to get sys clock\n");
  return FUNC_1(VAR_8->sys_clk);
 }

 VAR_8->ref_clk = FUNC_5(VAR_11, "ref_ck");
 if (FUNC_0(VAR_8->ref_clk))
  return FUNC_1(VAR_8->ref_clk);

 VAR_8->mcu_clk = FUNC_5(VAR_11, "mcu_ck");
 if (FUNC_0(VAR_8->mcu_clk))
  return FUNC_1(VAR_8->mcu_clk);

 VAR_8->dma_clk = FUNC_5(VAR_11, "dma_ck");
 if (FUNC_0(VAR_8->dma_clk))
  return FUNC_1(VAR_8->dma_clk);

 VAR_8->num_phys = FUNC_11(VAR_9,
   "phys", "#phy-cells");
 if (VAR_8->num_phys > 0) {
  VAR_8->phys = FUNC_7(VAR_11, VAR_8->num_phys,
     sizeof(*VAR_8->phys), VAR_1);
  if (!VAR_8->phys)
   return -VAR_0;
 } else {
  VAR_8->num_phys = 0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_8->num_phys; VAR_13++) {
  VAR_8->phys[VAR_13] = FUNC_8(VAR_11, VAR_9, VAR_13);
  if (FUNC_0(VAR_8->phys[VAR_13])) {
   FUNC_2(VAR_11, "failed to get phy-%d\n", VAR_13);
   return FUNC_1(VAR_8->phys[VAR_13]);
  }
 }

 VAR_12 = FUNC_14(VAR_7, VAR_2, "ippc");
 VAR_8->ippc_base = FUNC_6(VAR_11, VAR_12);
 if (FUNC_0(VAR_8->ippc_base))
  return FUNC_1(VAR_8->ippc_base);

 VAR_8->dr_mode = FUNC_16(VAR_11);
 if (VAR_8->dr_mode == VAR_6)
  VAR_8->dr_mode = VAR_4;

 if (VAR_8->dr_mode == VAR_5)
  goto out;


 VAR_14 = FUNC_15(VAR_8, VAR_9);
 if (VAR_14) {
  FUNC_2(VAR_11, "failed to parse uwk property\n");
  return VAR_14;
 }


 FUNC_13(VAR_9, "mediatek,u3p-dis-msk",
        &VAR_8->u3p_dis_msk);

 VAR_10->vbus = FUNC_9(VAR_11, "vbus");
 if (FUNC_0(VAR_10->vbus)) {
  FUNC_2(VAR_11, "failed to get vbus\n");
  return FUNC_1(VAR_10->vbus);
 }

 if (VAR_8->dr_mode == VAR_3)
  goto out;


 VAR_10->is_u3_drd = FUNC_12(VAR_9, "mediatek,usb3-drd");
 VAR_10->manual_drd_enabled =
  FUNC_12(VAR_9, "enable-manual-drd");
 VAR_10->role_sw_used = FUNC_12(VAR_9, "usb-role-switch");

 if (!VAR_10->role_sw_used && FUNC_12(VAR_9, "extcon")) {
  VAR_10->edev = FUNC_10(VAR_8->dev, 0);
  if (FUNC_0(VAR_10->edev)) {
   FUNC_2(VAR_8->dev, "couldn't get extcon device\n");
   return FUNC_1(VAR_10->edev);
  }
 }

out:
 FUNC_3(VAR_11, "dr_mode: %d, is_u3_dr: %d, u3p_dis_msk: %x, drd: %s\n",
  VAR_8->dr_mode, VAR_10->is_u3_drd, VAR_8->u3p_dis_msk,
  VAR_10->manual_drd_enabled ? "manual" : "auto");

 return 0;
}
