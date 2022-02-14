
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int * phy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct usbhs_priv* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct usbhs_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->phy);
 VAR_1->phy = ((void*)0);

 return 0;
}
