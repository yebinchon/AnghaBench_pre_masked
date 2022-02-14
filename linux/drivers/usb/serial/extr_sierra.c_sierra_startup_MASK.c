
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
struct sierra_intf_private {int susp_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sierra_intf_private* FUNC_0 (int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_serial*,struct sierra_intf_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_3)
{
 struct sierra_intf_private *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_4->susp_lock);

 FUNC_4(VAR_3, VAR_4);


 FUNC_1(VAR_3->dev, 0x0000);


 if (VAR_2)
  FUNC_2(VAR_3->dev, 1);

 return 0;
}
