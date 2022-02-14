
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int rsts; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct usbhs_priv*) ;
 int FUNC_4 (struct usbhs_priv*,int ) ;
 int FUNC_5 (struct usbhs_priv*) ;
 struct usbhs_priv* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct usbhs_priv*) ;
 int FUNC_8 (struct usbhs_priv*,int ,struct platform_device*) ;
 int FUNC_9 (struct usbhs_priv*) ;
 int FUNC_10 (struct usbhs_priv*,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_6(VAR_2);

 FUNC_0(&VAR_2->dev, "usb remove\n");


 if (!FUNC_4(VAR_3, VAR_1))
  FUNC_10(VAR_3, 0);

 FUNC_1(&VAR_2->dev);

 FUNC_8(VAR_3, VAR_0, VAR_2);
 FUNC_9(VAR_3);
 FUNC_2(VAR_3->rsts);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);
 FUNC_7(VAR_3);

 return 0;
}
