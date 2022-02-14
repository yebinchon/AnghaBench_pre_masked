
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int mmc; int csw_urb; int data_urb; int cbw_urb; int int_urb; int lock; int flags; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ushc_data* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ushc_data*) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct ushc_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_2->lock);
 FUNC_1(VAR_0, &VAR_2->flags);
 FUNC_3(&VAR_2->lock);

 FUNC_5(VAR_2->int_urb);
 FUNC_5(VAR_2->cbw_urb);
 FUNC_5(VAR_2->data_urb);
 FUNC_5(VAR_2->csw_urb);

 FUNC_0(VAR_2->mmc);

 FUNC_6(VAR_2);
}
