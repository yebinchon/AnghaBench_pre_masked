
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct chaoskey {int present; int lock; int open; int urb; int hwrng; scalar_t__ hwrng_registered; } ;


 int VAR_0 ;
 int FUNC_0 (struct chaoskey*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,char*) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 struct chaoskey* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_1)
{
 struct chaoskey *VAR_2;

 FUNC_4(VAR_1, "disconnect");
 VAR_2 = FUNC_6(VAR_1);
 if (!VAR_2) {
  FUNC_4(VAR_1, "disconnect failed - no dev");
  return;
 }

 if (VAR_2->hwrng_registered)
  FUNC_1(&VAR_2->hwrng);

 FUNC_5(VAR_1, &VAR_0);

 FUNC_8(VAR_1, ((void*)0));
 FUNC_2(&VAR_2->lock);

 VAR_2->present = 0;
 FUNC_7(VAR_2->urb);

 if (!VAR_2->open) {
  FUNC_3(&VAR_2->lock);
  FUNC_0(VAR_2);
 } else
  FUNC_3(&VAR_2->lock);

 FUNC_4(VAR_1, "disconnect done");
}
