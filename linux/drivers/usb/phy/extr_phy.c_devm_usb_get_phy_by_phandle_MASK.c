
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_phy {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_phy* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct usb_phy* FUNC_2 (struct device*,struct device_node*,int *) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char const*,int ) ;

struct usb_phy *FUNC_5(struct device *VAR_2,
 const char *VAR_3, u8 VAR_4)
{
 struct device_node *VAR_5;
 struct usb_phy *VAR_6;

 if (!VAR_2->of_node) {
  FUNC_1(VAR_2, "device does not have a device node entry\n");
  return FUNC_0(-VAR_0);
 }

 VAR_5 = FUNC_4(VAR_2->of_node, VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_1(VAR_2, "failed to get %s phandle in %pOF node\n", VAR_3,
   VAR_2->of_node);
  return FUNC_0(-VAR_1);
 }
 VAR_6 = FUNC_2(VAR_2, VAR_5, ((void*)0));
 FUNC_3(VAR_5);
 return VAR_6;
}
