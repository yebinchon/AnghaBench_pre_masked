
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_composite_dev {int gadget; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int ** VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_5(struct usb_composite_dev *VAR_10)
{
 if (FUNC_1()) {
  FUNC_3(VAR_3);
  FUNC_4(VAR_7);
 }
 if (VAR_9) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_5);
 } else if (FUNC_0(VAR_10->gadget)) {
  FUNC_3(VAR_0);
  FUNC_4(VAR_4);
 } else {
  FUNC_3(VAR_2);
  FUNC_4(VAR_6);
 }
 FUNC_2(VAR_8[0]);
 VAR_8[0] = ((void*)0);

 return 0;
}
