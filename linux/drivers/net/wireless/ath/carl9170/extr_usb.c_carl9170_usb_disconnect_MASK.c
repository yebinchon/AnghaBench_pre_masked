
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ar9170 {int fw_load_wait; } ;


 scalar_t__ FUNC_0 (struct ar9170*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*) ;
 int FUNC_7 (struct ar9170*) ;
 struct ar9170* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_0)
{
 struct ar9170 *VAR_1 = FUNC_8(VAR_0);

 if (FUNC_1(!VAR_1))
  return;

 FUNC_10(&VAR_1->fw_load_wait);

 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_1);
  FUNC_7(VAR_1);
 }

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 FUNC_9(VAR_0, ((void*)0));

 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
}
