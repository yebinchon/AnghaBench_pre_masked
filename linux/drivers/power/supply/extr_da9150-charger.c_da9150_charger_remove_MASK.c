
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9150_charger {int vbat_chan; int tjunc_chan; int vbus_chan; int ibus_chan; int usb; int battery; int otg_nb; int usb_phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct da9150_charger*) ;
 int FUNC_2 (int ) ;
 struct da9150_charger* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct da9150_charger *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_4(VAR_0, "CHG_VBUS");
 FUNC_1(VAR_2, VAR_1);

 VAR_2 = FUNC_4(VAR_0, "CHG_VFAULT");
 FUNC_1(VAR_2, VAR_1);

 VAR_2 = FUNC_4(VAR_0, "CHG_TJUNC");
 FUNC_1(VAR_2, VAR_1);

 VAR_2 = FUNC_4(VAR_0, "CHG_STATUS");
 FUNC_1(VAR_2, VAR_1);

 if (!FUNC_0(VAR_1->usb_phy))
  FUNC_6(VAR_1->usb_phy, &VAR_1->otg_nb);

 FUNC_5(VAR_1->battery);
 FUNC_5(VAR_1->usb);


 FUNC_2(VAR_1->ibus_chan);
 FUNC_2(VAR_1->vbus_chan);
 FUNC_2(VAR_1->tjunc_chan);
 FUNC_2(VAR_1->vbat_chan);

 return 0;
}
