
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ar9170 {int fw_load_wait; struct usb_interface* intf; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_9(struct ar9170 *VAR_0)
{
 struct usb_interface *VAR_1 = VAR_0->intf;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto err_freefw;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  goto err_freefw;

 VAR_2 = FUNC_1(VAR_0);

 FUNC_6(VAR_0);
 if (VAR_2)
  goto err_unrx;

 FUNC_7(&VAR_0->fw_load_wait);
 FUNC_8(VAR_1);
 return;

err_unrx:
 FUNC_3(VAR_0);

err_freefw:
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
}
