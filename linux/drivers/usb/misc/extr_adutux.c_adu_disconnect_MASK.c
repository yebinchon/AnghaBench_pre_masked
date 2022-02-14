
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct adu_device {int disconnected; int open_count; int mtx; int interrupt_out_urb; int interrupt_in_urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct adu_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_interface*,int *) ;
 struct adu_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct adu_device *VAR_3;

 VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_2, &VAR_0);

 FUNC_5(VAR_3->interrupt_in_urb);
 FUNC_5(VAR_3->interrupt_out_urb);

 FUNC_1(&VAR_1);
 FUNC_6(VAR_2, ((void*)0));

 FUNC_1(&VAR_3->mtx);
 VAR_3->disconnected = 1;
 FUNC_2(&VAR_3->mtx);


 if (!VAR_3->open_count)
  FUNC_0(VAR_3);

 FUNC_2(&VAR_1);
}
