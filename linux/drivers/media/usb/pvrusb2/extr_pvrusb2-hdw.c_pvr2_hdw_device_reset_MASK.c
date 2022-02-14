
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct pvr2_hdw *VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_2,"Performing a device reset...");
 VAR_5 = FUNC_2(VAR_4->usb_dev,((void*)0));
 if (VAR_5 == 0) {
  VAR_5 = FUNC_3(VAR_4->usb_dev);
  FUNC_4(VAR_4->usb_dev);
 } else {
  FUNC_1(VAR_0,
      "Failed to lock USB device ret=%d",VAR_5);
 }
 if (VAR_3) {
  FUNC_1(VAR_1,
      "Waiting %u msec for hardware to settle",
      VAR_3);
  FUNC_0(VAR_3);
 }

}
