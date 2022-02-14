
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* controller; } ;
struct usb_hcd {TYPE_1__ self; int rsrc_len; int rsrc_start; void* regs; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ohci_hcd {int hc_control; int num_ports; } ;
struct ohci_at91_priv {int sfr_regmap; void* hclk; void* fclk; void* iclk; } ;
struct hc_driver {int dummy; } ;
struct at91_usbh_data {int ports; } ;
struct TYPE_4__ {struct at91_usbh_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (struct device*,char*) ;
 void* FUNC_9 (struct device*,struct resource*) ;
 struct ohci_hcd* FUNC_10 (struct usb_hcd*) ;
 struct ohci_at91_priv* FUNC_11 (struct usb_hcd*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_16 (struct hc_driver const*,struct device*,char*) ;
 int FUNC_17 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_18(const struct hc_driver *VAR_4,
   struct platform_device *VAR_5)
{
 struct at91_usbh_data *VAR_6;
 struct ohci_hcd *VAR_7;
 int VAR_8;
 struct usb_hcd *VAR_9;
 struct ohci_at91_priv *VAR_10;
 struct device *VAR_11 = &VAR_5->dev;
 struct resource *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_12(VAR_5, 0);
 if (VAR_13 < 0) {
  FUNC_5(VAR_11, "hcd probe: missing irq resource\n");
  return VAR_13;
 }

 VAR_9 = FUNC_16(VAR_4, VAR_11, "at91");
 if (!VAR_9)
  return -VAR_0;
 VAR_10 = FUNC_11(VAR_9);

 VAR_12 = FUNC_13(VAR_5, VAR_1, 0);
 VAR_9->regs = FUNC_9(VAR_11, VAR_12);
 if (FUNC_0(VAR_9->regs)) {
  VAR_8 = FUNC_1(VAR_9->regs);
  goto err;
 }
 VAR_9->rsrc_start = VAR_12->start;
 VAR_9->rsrc_len = FUNC_14(VAR_12);

 VAR_10->iclk = FUNC_8(VAR_11, "ohci_clk");
 if (FUNC_0(VAR_10->iclk)) {
  FUNC_6(VAR_11, "failed to get ohci_clk\n");
  VAR_8 = FUNC_1(VAR_10->iclk);
  goto err;
 }
 VAR_10->fclk = FUNC_8(VAR_11, "uhpck");
 if (FUNC_0(VAR_10->fclk)) {
  FUNC_6(VAR_11, "failed to get uhpck\n");
  VAR_8 = FUNC_1(VAR_10->fclk);
  goto err;
 }
 VAR_10->hclk = FUNC_8(VAR_11, "hclk");
 if (FUNC_0(VAR_10->hclk)) {
  FUNC_6(VAR_11, "failed to get hclk\n");
  VAR_8 = FUNC_1(VAR_10->hclk);
  goto err;
 }

 VAR_10->sfr_regmap = FUNC_2();
 if (!VAR_10->sfr_regmap)
  FUNC_5(VAR_11, "failed to find sfr node\n");

 VAR_6 = VAR_9->self.controller->platform_data;
 VAR_7 = FUNC_10(VAR_9);
 VAR_7->num_ports = VAR_6->ports;
 FUNC_3(VAR_5);





 VAR_7->hc_control = VAR_3;

 VAR_8 = FUNC_15(VAR_9, VAR_13, VAR_2);
 if (VAR_8 == 0) {
  FUNC_7(VAR_9->self.controller);
  return VAR_8;
 }


 FUNC_4(VAR_5);

 err:
 FUNC_17(VAR_9);
 return VAR_8;
}
