
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lbs_private {int ehs_remove_supported; int wol_criteria; struct if_usb_card* card; } ;
struct if_usb_card {scalar_t__ bootcmdresp; int CRC_OK; int fwseqnum; struct firmware const* fw; TYPE_2__* priv; scalar_t__ fwdnldover; int rx_urb; int fw_timeout; scalar_t__ surprise_removed; int fw_wq; scalar_t__ fwfinalblk; scalar_t__ totalbytes; scalar_t__ fwlastblksent; int tx_urb; TYPE_1__* udev; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {int fw_ready; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct if_usb_card*,int ) ;
 int FUNC_3 (struct if_usb_card*) ;
 int FUNC_4 (struct if_usb_card*) ;
 int FUNC_5 (struct lbs_private*) ;
 scalar_t__ FUNC_6 (struct if_usb_card*) ;
 scalar_t__ FUNC_7 (struct if_usb_card*) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (struct lbs_private*,int ,int *) ;
 scalar_t__ FUNC_10 (struct lbs_private*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static void FUNC_16(struct lbs_private *VAR_6, int VAR_7,
     const struct firmware *VAR_8,
     const struct firmware *VAR_9)
{
 struct if_usb_card *VAR_10 = VAR_6->card;
 int VAR_11 = 0;
 static int VAR_12 = 10;

 if (VAR_7) {
  FUNC_12("failed to find firmware (%d)\n", VAR_7);
  goto done;
 }

 VAR_10->fw = VAR_8;
 if (FUNC_0(VAR_10->fw->data, VAR_10->fw->size)) {
  VAR_7 = -VAR_3;
  goto done;
 }


 FUNC_14(VAR_10->rx_urb);
 FUNC_14(VAR_10->tx_urb);

 VAR_10->fwlastblksent = 0;
 VAR_10->fwdnldover = 0;
 VAR_10->totalbytes = 0;
 VAR_10->fwfinalblk = 0;
 VAR_10->bootcmdresp = 0;

restart:
 if (FUNC_7(VAR_10) < 0) {
  FUNC_8(&VAR_10->udev->dev, "URB submission is failed\n");
  VAR_7 = -VAR_4;
  goto done;
 }

 VAR_10->bootcmdresp = 0;
 do {
  int VAR_13 = 0;
  VAR_11++;
  FUNC_2(VAR_10, VAR_0);

  do {
   VAR_13++;
   FUNC_11(100);
  } while (VAR_10->bootcmdresp == 0 && VAR_13 < 10);
 } while (VAR_10->bootcmdresp == 0 && VAR_11 < 5);

 if (VAR_10->bootcmdresp == VAR_1) {

  VAR_7 = -VAR_5;
  FUNC_14(VAR_10->rx_urb);
  FUNC_14(VAR_10->tx_urb);
  if (FUNC_6(VAR_10) < 0)
   VAR_7 = -VAR_4;
  goto done;
 } else if (VAR_10->bootcmdresp <= 0) {
  if (--VAR_12 >= 0) {
   FUNC_3(VAR_10);
   goto restart;
  }
  VAR_7 = -VAR_4;
  goto done;
 }

 VAR_11 = 0;

 VAR_10->totalbytes = 0;
 VAR_10->fwlastblksent = 0;
 VAR_10->CRC_OK = 1;
 VAR_10->fwdnldover = 0;
 VAR_10->fwseqnum = -1;
 VAR_10->totalbytes = 0;
 VAR_10->fwfinalblk = 0;


 FUNC_4(VAR_10);


 FUNC_15(VAR_10->fw_wq, VAR_10->surprise_removed || VAR_10->fwdnldover);

 FUNC_1(&VAR_10->fw_timeout);
 FUNC_14(VAR_10->rx_urb);

 if (!VAR_10->fwdnldover) {
  FUNC_13("failed to load fw, resetting device!\n");
  if (--VAR_12 >= 0) {
   FUNC_3(VAR_10);
   goto restart;
  }

  FUNC_13("FW download failure, time = %d ms\n", VAR_11 * 100);
  VAR_7 = -VAR_4;
  goto done;
 }

 VAR_10->priv->fw_ready = 1;
 FUNC_6(VAR_10);

 if (FUNC_10(VAR_6))
  goto done;

 FUNC_5(VAR_6);




 VAR_6->wol_criteria = VAR_2;
 if (FUNC_9(VAR_6, VAR_6->wol_criteria, ((void*)0)))
  VAR_6->ehs_remove_supported = 0;

 done:
 VAR_10->fw = ((void*)0);
}
