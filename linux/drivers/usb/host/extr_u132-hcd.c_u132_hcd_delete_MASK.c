
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct u132 {int going; struct platform_device* platform_dev; int u132_list; } ;
struct platform_device {int dev; } ;
struct kref {int dummy; } ;


 int FUNC_0 (int *,char*,struct usb_hcd*,struct u132*,int,struct platform_device*) ;
 struct u132* FUNC_1 (struct kref*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct usb_hcd* FUNC_5 (struct u132*) ;
 int FUNC_6 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_7(struct kref *VAR_2)
{
 struct u132 *VAR_3 = FUNC_1(VAR_2);
 struct platform_device *VAR_4 = VAR_3->platform_dev;
 struct usb_hcd *VAR_5 = FUNC_5(VAR_3);
 VAR_3->going += 1;
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_3->u132_list);
 VAR_0 -= 1;
 FUNC_4(&VAR_1);
 FUNC_0(&VAR_3->platform_dev->dev, "FREEING the hcd=%p and thus the u13"
  "2=%p going=%d pdev=%p\n", VAR_5, VAR_3, VAR_3->going, VAR_4);
 FUNC_6(VAR_5);
}
