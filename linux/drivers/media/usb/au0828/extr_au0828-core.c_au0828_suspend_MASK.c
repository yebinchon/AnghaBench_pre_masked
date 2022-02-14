
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct au0828_dev {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (struct au0828_dev*) ;
 int FUNC_3 (char*) ;
 struct au0828_dev* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0,
    pm_message_t VAR_1)
{
 struct au0828_dev *VAR_2 = FUNC_4(VAR_0);

 if (!VAR_2)
  return 0;

 FUNC_3("Suspend\n");

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);



 return 0;
}
