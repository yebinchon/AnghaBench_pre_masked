
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hfa384x {int state; TYPE_1__* wlandev; int rx_urb; int endp_out; int usb; int endp_in; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfa384x*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct hfa384x*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct hfa384x *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u16 VAR_7;

 FUNC_1();






 VAR_4 =
     FUNC_8(VAR_3->usb, VAR_2, VAR_3->endp_in,
          &VAR_7);
 if (VAR_4 < 0) {
  FUNC_3(VAR_3->wlandev->netdev, "Cannot get bulk in endpoint status.\n");
  goto done;
 }
 if ((VAR_7 == 1) && FUNC_7(VAR_3->usb, VAR_3->endp_in))
  FUNC_3(VAR_3->wlandev->netdev, "Failed to reset bulk in endpoint.\n");

 VAR_4 =
     FUNC_8(VAR_3->usb, VAR_2, VAR_3->endp_out,
          &VAR_7);
 if (VAR_4 < 0) {
  FUNC_3(VAR_3->wlandev->netdev, "Cannot get bulk out endpoint status.\n");
  goto done;
 }
 if ((VAR_7 == 1) && FUNC_7(VAR_3->usb, VAR_3->endp_out))
  FUNC_3(VAR_3->wlandev->netdev, "Failed to reset bulk out endpoint.\n");


 FUNC_9(&VAR_3->rx_urb);


 VAR_4 = FUNC_6(VAR_3, VAR_0);
 if (VAR_4 != 0) {
  FUNC_3(VAR_3->wlandev->netdev,
      "Fatal, failed to submit RX URB, result=%d\n",
      VAR_4);
  goto done;
 }
 VAR_5 = FUNC_0(VAR_3);
 FUNC_2(1000);
 VAR_4 = FUNC_0(VAR_3);
 VAR_6 = VAR_4;
 if (VAR_5 != 0) {
  if (VAR_6 != 0) {
   FUNC_3(VAR_3->wlandev->netdev,
       "cmd_initialize() failed on two attempts, results %d and %d\n",
       VAR_5, VAR_6);
   FUNC_9(&VAR_3->rx_urb);
   goto done;
  } else {
   FUNC_5("First cmd_initialize() failed (result %d),\n",
     VAR_5);
   FUNC_5("but second attempt succeeded. All should be ok\n");
  }
 } else if (VAR_6 != 0) {
  FUNC_4(VAR_3->wlandev->netdev, "First cmd_initialize() succeeded, but second attempt failed (result=%d)\n",
       VAR_6);
  FUNC_4(VAR_3->wlandev->netdev,
       "Most likely the card will be functional\n");
  goto done;
 }

 VAR_3->state = VAR_1;

done:
 return VAR_4;
}
