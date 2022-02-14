
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int ep0_req; int gadget; int role_sw; int dentry; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 struct renesas_usb3* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct renesas_usb3*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct renesas_usb3 *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2->dentry);
 FUNC_2(&VAR_1->dev, &VAR_0);

 FUNC_7(VAR_2->role_sw);

 FUNC_6(&VAR_2->gadget);
 FUNC_5(VAR_2, &VAR_1->dev);

 FUNC_0(VAR_2->ep0_req);
 FUNC_4(&VAR_1->dev);

 return 0;
}
