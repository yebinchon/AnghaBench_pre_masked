
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;
struct device {int dummy; } ;
typedef enum usb_phy_type { ____Placeholder_usb_phy_type } usb_phy_type ;


 int VAR_0 ;
 struct usb_phy* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_phy*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct usb_phy**) ;
 struct usb_phy** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct usb_phy**) ;
 struct usb_phy* FUNC_5 (int) ;

struct usb_phy *FUNC_6(struct device *VAR_3, enum usb_phy_type VAR_4)
{
 struct usb_phy **VAR_5, *VAR_6;

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_5(VAR_4);
 if (!FUNC_1(VAR_6)) {
  *VAR_5 = VAR_6;
  FUNC_2(VAR_3, VAR_5);
 } else
  FUNC_4(VAR_5);

 return VAR_6;
}
