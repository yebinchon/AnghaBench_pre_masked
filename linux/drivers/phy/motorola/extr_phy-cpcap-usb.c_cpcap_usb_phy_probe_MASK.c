
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_otg {TYPE_1__* usb_phy; int set_peripheral; int set_host; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct of_device_id {int dummy; } ;
struct TYPE_7__ {char* label; int type; struct usb_otg* otg; TYPE_2__* dev; } ;
struct cpcap_phy_ddata {int detect_work; int active; TYPE_1__ phy; TYPE_2__* dev; struct phy_provider* vusb; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct phy_provider*) ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 int VAR_5 ;
 int FUNC_4 (struct cpcap_phy_ddata*) ;
 int FUNC_5 (struct platform_device*,struct cpcap_phy_ddata*) ;
 int FUNC_6 (struct cpcap_phy_ddata*) ;
 int FUNC_7 (struct cpcap_phy_ddata*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int *) ;
 void* FUNC_9 (TYPE_2__*,int,int ) ;
 struct phy_provider* FUNC_10 (TYPE_2__*,int ) ;
 struct phy_provider* FUNC_11 (TYPE_2__*,int *,int *) ;
 struct phy_provider* FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (int) ;
 struct of_device_id* FUNC_14 (int ,TYPE_2__*) ;
 int FUNC_15 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (struct phy_provider*,struct cpcap_phy_ddata*) ;
 int FUNC_17 (struct platform_device*,struct cpcap_phy_ddata*) ;
 int FUNC_18 (struct phy_provider*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_11)
{
 struct cpcap_phy_ddata *VAR_12;
 struct phy *VAR_13;
 struct phy_provider *VAR_14;
 struct usb_otg *VAR_15;
 const struct of_device_id *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_14(FUNC_15(VAR_6),
    &VAR_11->dev);
 if (!VAR_16)
  return -VAR_0;

 VAR_12 = FUNC_9(&VAR_11->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->reg = FUNC_8(VAR_11->dev.parent, ((void*)0));
 if (!VAR_12->reg)
  return -VAR_1;

 VAR_15 = FUNC_9(&VAR_11->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_12->dev = &VAR_11->dev;
 VAR_12->phy.dev = VAR_12->dev;
 VAR_12->phy.label = "cpcap_usb_phy";
 VAR_12->phy.otg = VAR_15;
 VAR_12->phy.type = VAR_4;
 VAR_15->set_host = VAR_7;
 VAR_15->set_peripheral = VAR_8;
 VAR_15->usb_phy = &VAR_12->phy;
 FUNC_0(&VAR_12->detect_work, VAR_5);
 FUNC_17(VAR_11, VAR_12);

 VAR_12->vusb = FUNC_12(&VAR_11->dev, "vusb");
 if (FUNC_1(VAR_12->vusb))
  return FUNC_2(VAR_12->vusb);

 VAR_17 = FUNC_18(VAR_12->vusb);
 if (VAR_17)
  return VAR_17;

 VAR_13 = FUNC_11(VAR_12->dev, ((void*)0), &VAR_10);
 if (FUNC_1(VAR_13)) {
  VAR_17 = FUNC_2(VAR_13);
  return FUNC_2(VAR_13);
 }

 FUNC_16(VAR_13, VAR_12);

 VAR_14 = FUNC_10(VAR_12->dev,
           VAR_9);
 if (FUNC_1(VAR_14))
  return FUNC_2(VAR_14);

 VAR_17 = FUNC_7(VAR_12);
 if (VAR_17)
  return VAR_17;

 FUNC_6(VAR_12);

 VAR_17 = FUNC_4(VAR_12);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_5(VAR_11, VAR_12);
 if (VAR_17)
  return VAR_17;

 FUNC_20(&VAR_12->phy);
 FUNC_3(&VAR_12->active, 1);
 FUNC_19(&VAR_12->detect_work, FUNC_13(1));

 return 0;
}
