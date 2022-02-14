
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_hcd_omap {int usbhs_rev; int uhh_base; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 int FUNC_0 (struct device*,char*,...) ;
 struct usbhs_hcd_omap* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (struct usbhs_hcd_omap*,unsigned int) ;
 unsigned int FUNC_3 (struct usbhs_hcd_omap*,unsigned int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 unsigned int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_6)
{
 struct usbhs_hcd_omap *VAR_7 = FUNC_1(VAR_6);
 unsigned VAR_8;

 FUNC_0(VAR_6, "starting TI HSUSB Controller\n");

 FUNC_4(VAR_6);

 VAR_8 = FUNC_6(VAR_7->uhh_base, VAR_1);

 VAR_8 |= (VAR_3
   | VAR_4
   | VAR_2);
 VAR_8 |= VAR_0;
 VAR_8 &= ~VAR_5;

 switch (VAR_7->usbhs_rev) {
 case 129:
  VAR_8 = FUNC_2(VAR_7, VAR_8);
  break;

 case 128:
  VAR_8 = FUNC_3(VAR_7, VAR_8);
  break;

 default:
  VAR_8 = FUNC_3(VAR_7, VAR_8);
  break;
 }

 FUNC_7(VAR_7->uhh_base, VAR_1, VAR_8);
 FUNC_0(VAR_6, "UHH setup done, uhh_hostconfig=%x\n", VAR_8);

 FUNC_5(VAR_6);
}
