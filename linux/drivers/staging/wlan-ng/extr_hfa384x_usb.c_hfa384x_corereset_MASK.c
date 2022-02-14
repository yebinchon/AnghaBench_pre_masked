
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfa384x {TYPE_1__* wlandev; int usb; } ;
struct TYPE_2__ {int netdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct hfa384x *VAR_0, int VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->usb);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->wlandev->netdev, "usb_reset_device() failed, result=%d.\n",
      VAR_4);
 }

 return VAR_4;
}
