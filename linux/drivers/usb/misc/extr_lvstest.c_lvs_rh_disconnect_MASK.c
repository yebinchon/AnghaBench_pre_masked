
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct lvs_rh {int urb; int rh_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct lvs_rh* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct lvs_rh *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->urb);
 FUNC_0(&VAR_1->rh_work);
 FUNC_1(VAR_1->urb);
}
