
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct brcm_usb_phy_data {struct phy* usb_30_clk; TYPE_1__* phys; scalar_t__ has_xhci; scalar_t__ has_eohci; struct phy* usb_20_clk; } ;
struct TYPE_2__ {size_t id; struct phy* phy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int VAR_2 ;
 int FUNC_2 (struct phy*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 struct phy* FUNC_5 (struct device*,int *,int *) ;
 void* FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (struct phy*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3,
     struct brcm_usb_phy_data *VAR_4,
     struct device_node *VAR_5)
{
 struct phy *VAR_6;
 int VAR_7;

 VAR_4->usb_20_clk = FUNC_6(VAR_5, "sw_usb");
 if (FUNC_0(VAR_4->usb_20_clk)) {
  FUNC_4(VAR_3, "Clock not found in Device Tree\n");
  VAR_4->usb_20_clk = ((void*)0);
 }
 VAR_7 = FUNC_2(VAR_4->usb_20_clk);
 if (VAR_7)
  return VAR_7;

 if (VAR_4->has_eohci) {
  VAR_6 = FUNC_5(VAR_3, ((void*)0), &VAR_2);
  if (FUNC_0(VAR_6)) {
   FUNC_3(VAR_3, "failed to create EHCI/OHCI PHY\n");
   return FUNC_1(VAR_6);
  }
  VAR_4->phys[VAR_0].phy = VAR_6;
  VAR_4->phys[VAR_0].id = VAR_0;
  FUNC_7(VAR_6, &VAR_4->phys[VAR_0]);
 }

 if (VAR_4->has_xhci) {
  VAR_6 = FUNC_5(VAR_3, ((void*)0), &VAR_2);
  if (FUNC_0(VAR_6)) {
   FUNC_3(VAR_3, "failed to create XHCI PHY\n");
   return FUNC_1(VAR_6);
  }
  VAR_4->phys[VAR_1].phy = VAR_6;
  VAR_4->phys[VAR_1].id = VAR_1;
  FUNC_7(VAR_6, &VAR_4->phys[VAR_1]);

  VAR_4->usb_30_clk = FUNC_6(VAR_5, "sw_usb3");
  if (FUNC_0(VAR_4->usb_30_clk)) {
   FUNC_4(VAR_3,
     "USB3.0 clock not found in Device Tree\n");
   VAR_4->usb_30_clk = ((void*)0);
  }
  VAR_7 = FUNC_2(VAR_4->usb_30_clk);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
