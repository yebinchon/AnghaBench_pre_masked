
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int rwait; int wwait; } ;
struct usb_interface {int dummy; } ;
typedef int pm_message_t ;


 struct usblp* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usblp*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct usblp *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2);






 return 0;
}
