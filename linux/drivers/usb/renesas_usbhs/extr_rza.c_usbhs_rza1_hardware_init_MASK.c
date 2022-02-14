
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct usbhs_priv {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 struct device_node* FUNC_1 (int *,char*) ;
 int FUNC_2 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_3 (struct usbhs_priv*,int ,int ,int ) ;
 struct usbhs_priv* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct usbhs_priv*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct usbhs_priv *VAR_7 = FUNC_4(VAR_6);
 struct device_node *VAR_8, *VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;


 VAR_8 = FUNC_1(((void*)0), "usb_x1");
 VAR_9 = FUNC_1(((void*)0), "extal");
 FUNC_2(VAR_8, "clock-frequency", &VAR_10);
 FUNC_2(VAR_9, "clock-frequency", &VAR_11);
 if (VAR_10 == 0) {
  if (VAR_11 == 12000000) {

   FUNC_3(VAR_7, VAR_3, VAR_4, VAR_4);
  } else {
   FUNC_0(FUNC_5(VAR_7), "A 48MHz USB clock or 12MHz main clock is required.\n");
   return -VAR_0;
  }
 }


 FUNC_3(VAR_7, VAR_3, VAR_5, VAR_5);
 FUNC_6(1000, 2000);
 FUNC_3(VAR_7, VAR_2, VAR_1, VAR_1);

 return 0;
}
