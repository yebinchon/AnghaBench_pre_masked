
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbhs_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct usbhs_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_0(VAR_2);

 return VAR_1 & FUNC_1(VAR_3, VAR_0);
}
