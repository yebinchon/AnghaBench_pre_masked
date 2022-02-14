
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int kobj; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int mode; int ioc; int ipp; void* xhci_ec_regs; void* ctrl_regs; int family_name; int product_id; int family_id; } ;
struct brcm_usb_phy_data {int has_xhci; int has_eohci; int usb_30_clk; int usb_20_clk; TYPE_1__ ini; int mutex; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct phy_provider*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int ** VAR_7 ;
 int FUNC_4 (struct device*,struct brcm_usb_phy_data*,struct device_node*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct device*,char*,int ) ;
 int FUNC_13 (struct device*,char*) ;
 int FUNC_14 (struct device*,char*) ;
 void* FUNC_15 (struct device*,struct resource*) ;
 struct brcm_usb_phy_data* FUNC_16 (struct device*,int,int ) ;
 struct phy_provider* FUNC_17 (struct device*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,char const*,int *) ;
 scalar_t__ FUNC_20 (struct device_node*,char*) ;
 int FUNC_21 (struct device_node*,char*,char const**) ;
 int FUNC_22 (struct device_node*,char*,int *) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int) ;
 int FUNC_24 (struct platform_device*,struct brcm_usb_phy_data*) ;
 int FUNC_25 (int *,int *) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 struct device *VAR_12 = &VAR_10->dev;
 struct brcm_usb_phy_data *VAR_13;
 struct phy_provider *VAR_14;
 struct device_node *VAR_15 = VAR_10->dev.of_node;
 int VAR_16;
 const char *VAR_17;

 VAR_13 = FUNC_16(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;
 FUNC_24(VAR_10, VAR_13);

 VAR_13->ini.family_id = FUNC_9();
 VAR_13->ini.product_id = FUNC_10();
 FUNC_5(&VAR_13->ini);
 FUNC_12(VAR_12, "Best mapping table is for %s\n",
  VAR_13->ini.family_name);
 VAR_11 = FUNC_23(VAR_10, VAR_3, 0);
 if (!VAR_11) {
  FUNC_13(VAR_12, "can't get USB_CTRL base address\n");
  return -VAR_0;
 }
 VAR_13->ini.ctrl_regs = FUNC_15(VAR_12, VAR_11);
 if (FUNC_1(VAR_13->ini.ctrl_regs)) {
  FUNC_13(VAR_12, "can't map CTRL register space\n");
  return -VAR_0;
 }


 VAR_11 = FUNC_23(VAR_10, VAR_3, 1);
 if (VAR_11) {
  VAR_13->ini.xhci_ec_regs =
   FUNC_15(VAR_12, VAR_11);
  if (FUNC_1(VAR_13->ini.xhci_ec_regs)) {
   FUNC_13(VAR_12, "can't map XHCI EC register space\n");
   return -VAR_0;
  }
 }

 FUNC_22(VAR_15, "brcm,ipp", &VAR_13->ini.ipp);
 FUNC_22(VAR_15, "brcm,ioc", &VAR_13->ini.ioc);

 VAR_13->ini.mode = VAR_5;
 VAR_16 = FUNC_21(VAR_15, "dr_mode", &VAR_17);
 if (VAR_16 == 0) {
  FUNC_19(&VAR_6[0],
         FUNC_0(VAR_6),
   VAR_17, &VAR_13->ini.mode);
 }
 if (FUNC_20(VAR_15, "brcm,has-xhci"))
  VAR_13->has_xhci = 1;
 if (FUNC_20(VAR_15, "brcm,has-eohci"))
  VAR_13->has_eohci = 1;

 VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_15);
 if (VAR_16)
  return VAR_16;

 FUNC_18(&VAR_13->mutex);


 FUNC_3(&VAR_13->ini);





 if (VAR_13->ini.mode != VAR_4)
  VAR_7[1] = ((void*)0);
 VAR_16 = FUNC_25(&VAR_12->kobj, &VAR_8);
 if (VAR_16)
  FUNC_14(VAR_12, "Error creating sysfs attributes\n");


 if (VAR_13->has_xhci)
  FUNC_8(&VAR_13->ini);
 if (VAR_13->has_eohci)
  FUNC_7(&VAR_13->ini);
 FUNC_6(&VAR_13->ini);
 FUNC_11(VAR_13->usb_20_clk);
 FUNC_11(VAR_13->usb_30_clk);

 VAR_14 = FUNC_17(VAR_12, VAR_9);

 return FUNC_2(VAR_14);
}
