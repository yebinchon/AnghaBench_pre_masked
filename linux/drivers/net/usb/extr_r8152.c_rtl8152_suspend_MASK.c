
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct r8152 {int control; } ;
typedef int pm_message_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct r8152*) ;
 int FUNC_4 (struct r8152*) ;
 struct r8152* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct r8152 *VAR_2 = FUNC_5(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->control);

 if (FUNC_0(VAR_1))
  VAR_3 = FUNC_3(VAR_2);
 else
  VAR_3 = FUNC_4(VAR_2);

 FUNC_2(&VAR_2->control);

 return VAR_3;
}
