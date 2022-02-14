
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_device_attribute {struct renesas_usb3_priv* data; } ;
struct resource {int dummy; } ;
struct renesas_usb3_priv {int workaround_for_vbus; } ;
struct TYPE_6__ {int ep_list; int max_speed; int name; int * ops; } ;
struct renesas_usb3 {int role_sw_by_connector; int ep0_req; TYPE_2__ gadget; int * phy; int workaround_for_vbus; int * role_sw; int host_dev; int role_work; int * extcon; int extcon_work; int lock; int * reg; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *) ;
 int * FUNC_14 (int *,struct resource*) ;
 struct renesas_usb3* FUNC_15 (int *,int,int ) ;
 int * FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,int,int ,int ,int ,struct renesas_usb3*) ;
 struct renesas_usb3_priv* FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct renesas_usb3*) ;
 int FUNC_22 (int *) ;
 int VAR_5 ;
 int FUNC_23 (struct renesas_usb3*,int *) ;
 int FUNC_24 (struct renesas_usb3*,int *) ;
 int FUNC_25 (struct renesas_usb3*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_26 (struct renesas_usb3*,int *,struct renesas_usb3_priv const*) ;
 int FUNC_27 (struct renesas_usb3*,int *,struct renesas_usb3_priv const*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 struct soc_device_attribute* FUNC_28 (int ) ;
 int FUNC_29 (int *) ;
 int VAR_12 ;
 int FUNC_30 (int *,TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*) ;
 int FUNC_32 (int *) ;
 int * FUNC_33 (int *,TYPE_1__*) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_13)
{
 struct renesas_usb3 *VAR_14;
 struct resource *VAR_15;
 int VAR_16, VAR_17;
 const struct renesas_usb3_priv *VAR_18;
 const struct soc_device_attribute *VAR_19;

 VAR_19 = FUNC_28(VAR_9);
 if (VAR_19)
  VAR_18 = VAR_19->data;
 else
  VAR_18 = FUNC_18(&VAR_13->dev);

 VAR_16 = FUNC_19(VAR_13, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = FUNC_15(&VAR_13->dev, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = FUNC_20(VAR_13, VAR_2, 0);
 VAR_14->reg = FUNC_14(&VAR_13->dev, VAR_15);
 if (FUNC_2(VAR_14->reg))
  return FUNC_3(VAR_14->reg);

 FUNC_21(VAR_13, VAR_14);
 FUNC_29(&VAR_14->lock);

 VAR_14->gadget.ops = &VAR_7;
 VAR_14->gadget.name = VAR_12;
 VAR_14->gadget.max_speed = VAR_3;
 FUNC_0(&VAR_14->gadget.ep_list);
 VAR_17 = FUNC_26(VAR_14, &VAR_13->dev, VAR_18);
 if (VAR_17 < 0)
  return VAR_17;
 FUNC_27(VAR_14, &VAR_13->dev, VAR_18);

 VAR_17 = FUNC_17(&VAR_13->dev, VAR_16, VAR_8, 0,
          FUNC_9(&VAR_13->dev), VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_1(&VAR_14->extcon_work, VAR_6);
 VAR_14->extcon = FUNC_12(&VAR_13->dev, VAR_5);
 if (FUNC_2(VAR_14->extcon))
  return FUNC_3(VAR_14->extcon);

 VAR_17 = FUNC_13(&VAR_13->dev, VAR_14->extcon);
 if (VAR_17 < 0) {
  FUNC_6(&VAR_13->dev, "Failed to register extcon\n");
  return VAR_17;
 }


 VAR_14->ep0_req = FUNC_4(VAR_1);
 if (!VAR_14->ep0_req)
  return -VAR_0;

 VAR_17 = FUNC_24(VAR_14, &VAR_13->dev);
 if (VAR_17 < 0)
  goto err_alloc_prd;





 VAR_14->phy = FUNC_16(&VAR_13->dev, "usb");
 if (FUNC_2(VAR_14->phy)) {
  VAR_17 = FUNC_3(VAR_14->phy);
  goto err_add_udc;
 }

 FUNC_22(&VAR_13->dev);
 VAR_17 = FUNC_30(&VAR_13->dev, &VAR_14->gadget);
 if (VAR_17 < 0)
  goto err_add_udc;

 VAR_17 = FUNC_10(&VAR_13->dev, &VAR_4);
 if (VAR_17 < 0)
  goto err_dev_create;

 if (FUNC_11(&VAR_13->dev, "usb-role-switch")) {
  VAR_14->role_sw_by_connector = 1;
  VAR_10.fwnode = FUNC_7(&VAR_13->dev);
 }

 FUNC_1(&VAR_14->role_work, VAR_11);
 VAR_14->role_sw = FUNC_33(&VAR_13->dev,
     &VAR_10);
 if (!FUNC_2(VAR_14->role_sw)) {
  VAR_14->host_dev = FUNC_32(&VAR_13->dev);
  if (!VAR_14->host_dev) {

   FUNC_34(VAR_14->role_sw);
   VAR_14->role_sw = ((void*)0);
  }
 } else {
  VAR_14->role_sw = ((void*)0);
 }

 VAR_14->workaround_for_vbus = VAR_18->workaround_for_vbus;

 FUNC_23(VAR_14, &VAR_13->dev);

 FUNC_8(&VAR_13->dev, "probed%s\n", VAR_14->phy ? " with phy" : "");

 return 0;

err_dev_create:
 FUNC_31(&VAR_14->gadget);

err_add_udc:
 FUNC_25(VAR_14, &VAR_13->dev);

err_alloc_prd:
 FUNC_5(VAR_14->ep0_req);

 return VAR_17;
}
