
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lbtf_private {scalar_t__ surpriseremoved; struct if_usb_card* card; } ;
struct if_usb_card {scalar_t__ bootcmdresp; int CRC_OK; int fwseqnum; struct lbtf_private* priv; TYPE_2__* fw; scalar_t__ fwdnldover; int rx_urb; int fw_timeout; int fw_wq; scalar_t__ fwfinalblk; scalar_t__ totalbytes; scalar_t__ fwlastblksent; TYPE_1__* udev; } ;
struct TYPE_5__ {int size; int data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct if_usb_card*,int ) ;
 int FUNC_3 (struct lbtf_private*) ;
 int FUNC_4 (struct if_usb_card*) ;
 int FUNC_5 (struct lbtf_private*) ;
 scalar_t__ FUNC_6 (struct if_usb_card*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int VAR_3 ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__**,int,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static int FUNC_19(struct lbtf_private *VAR_4)
{
 struct if_usb_card *VAR_5 = VAR_4->card;
 int VAR_6 = 0;
 static int VAR_7 = 10;
 int VAR_8 = 0;

 FUNC_9(VAR_1);

 VAR_5->priv = VAR_4;

 FUNC_7(VAR_2);
 VAR_8 = FUNC_16(&VAR_5->fw, VAR_3, &VAR_5->udev->dev);
 if (VAR_8 < 0) {
  FUNC_13("request_firmware() failed with %#x\n", VAR_8);
  FUNC_13("firmware %s not found\n", VAR_3);
  FUNC_8(VAR_2);
  goto done;
 }
 FUNC_8(VAR_2);

 if (FUNC_0(VAR_5->fw->data, VAR_5->fw->size))
  goto release_fw;

restart:
 if (FUNC_6(VAR_5) < 0) {
  FUNC_11(&VAR_5->udev->dev, "URB submission is failed\n");
  VAR_8 = -1;
  goto release_fw;
 }

 VAR_5->bootcmdresp = 0;
 do {
  int VAR_9 = 0;
  VAR_6++;

  FUNC_2(VAR_5, VAR_0);

  do {
   VAR_9++;
   FUNC_12(100);
  } while (VAR_5->bootcmdresp == 0 && VAR_9 < 10);
 } while (VAR_5->bootcmdresp == 0 && VAR_6 < 5);

 if (VAR_5->bootcmdresp <= 0) {
  if (--VAR_7 >= 0) {
   FUNC_3(VAR_4);
   goto restart;
  }
  return -1;
 }

 VAR_6 = 0;

 VAR_5->totalbytes = 0;
 VAR_5->fwlastblksent = 0;
 VAR_5->CRC_OK = 1;
 VAR_5->fwdnldover = 0;
 VAR_5->fwseqnum = -1;
 VAR_5->totalbytes = 0;
 VAR_5->fwfinalblk = 0;


 FUNC_4(VAR_5);


 FUNC_18(VAR_5->fw_wq, VAR_5->priv->surpriseremoved ||
            VAR_5->fwdnldover);

 FUNC_1(&VAR_5->fw_timeout);
 FUNC_17(VAR_5->rx_urb);

 if (!VAR_5->fwdnldover) {
  FUNC_14("failed to load fw, resetting device!\n");
  if (--VAR_7 >= 0) {
   FUNC_3(VAR_4);
   goto restart;
  }

  FUNC_14("FW download failure, time = %d ms\n", VAR_6 * 100);
  VAR_8 = -1;
  goto release_fw;
 }

 release_fw:
 FUNC_15(VAR_5->fw);
 VAR_5->fw = ((void*)0);

 FUNC_5(VAR_5->priv);

 done:
 FUNC_10(VAR_1, "ret %d", VAR_8);
 return VAR_8;
}
