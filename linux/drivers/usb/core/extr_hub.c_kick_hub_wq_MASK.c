
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_hub {int kref; int events; int intfdev; scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct usb_interface* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_hub *VAR_2)
{
 struct usb_interface *VAR_3;

 if (VAR_2->disconnected || FUNC_6(&VAR_2->events))
  return;
 VAR_3 = FUNC_3(VAR_2->intfdev);
 FUNC_4(VAR_3);
 FUNC_0(&VAR_2->kref);

 if (FUNC_2(VAR_1, &VAR_2->events))
  return;


 FUNC_5(VAR_3);
 FUNC_1(&VAR_2->kref, VAR_0);
}
