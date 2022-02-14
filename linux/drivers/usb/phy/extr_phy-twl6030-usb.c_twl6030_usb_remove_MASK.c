
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_usb {int set_vbus_work; int usb3v3; int irq2; int irq1; int get_status_work; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct twl6030_usb*) ;
 struct twl6030_usb* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct twl6030_usb *VAR_4 = FUNC_3(VAR_3);

 FUNC_0(&VAR_4->get_status_work);
 FUNC_5(VAR_2,
  VAR_0);
 FUNC_5(VAR_2,
   VAR_1);
 FUNC_2(VAR_4->irq1, VAR_4);
 FUNC_2(VAR_4->irq2, VAR_4);
 FUNC_4(VAR_4->usb3v3);
 FUNC_1(&VAR_4->set_vbus_work);

 return 0;
}
