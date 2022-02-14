
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct usb_phy*) ;

void FUNC_2(struct device *VAR_2, struct usb_phy *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_0, VAR_3);
 FUNC_0(VAR_2, VAR_4, "couldn't find PHY resource\n");
}
