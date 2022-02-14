
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {scalar_t__ status; struct if_usb_card* context; } ;
struct sk_buff {scalar_t__ data; } ;
struct if_usb_card {int fwdnldover; scalar_t__ bootcmdresp; int CRC_OK; scalar_t__ fwfinalblk; int fw_timeout; TYPE_2__* udev; int fw_wq; struct sk_buff* rx_skb; } ;
struct fwsyncheader {scalar_t__ seqnum; int cmd; } ;
struct bootcmdresp {scalar_t__ magic; scalar_t__ cmd; scalar_t__ result; } ;
typedef int bcmdresp ;
typedef scalar_t__ __le32 ;
struct TYPE_3__ {int bcdDevice; } ;
struct TYPE_4__ {int dev; TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct if_usb_card*) ;
 int FUNC_2 (struct if_usb_card*) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct fwsyncheader*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct fwsyncheader* FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct bootcmdresp*,scalar_t__,int) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct urb *VAR_11)
{
 struct if_usb_card *VAR_12 = VAR_11->context;
 struct sk_buff *VAR_13 = VAR_12->rx_skb;
 struct fwsyncheader *VAR_14;
 struct bootcmdresp VAR_15;

 FUNC_6(VAR_8);
 if (VAR_11->status) {
  FUNC_10(&VAR_12->udev->dev,
        "URB status is failed during fw load\n");
  FUNC_4(VAR_13);
  FUNC_7(VAR_8);
  return;
 }

 if (VAR_12->fwdnldover) {
  __le32 *VAR_16 = (__le32 *)(VAR_13->data);

  if (VAR_16[0] == FUNC_0(VAR_4) &&
      VAR_16[1] == FUNC_0(VAR_9)) {

   FUNC_15("Firmware ready event received\n");
   FUNC_16(&VAR_12->fw_wq);
  } else {
   FUNC_8("Waiting for confirmation; got %x %x\n",
        FUNC_12(VAR_16[0]), FUNC_12(VAR_16[1]));
   FUNC_2(VAR_12);
  }
  FUNC_4(VAR_13);
  FUNC_7(VAR_8);
  return;
 }
 if (VAR_12->bootcmdresp <= 0) {
  FUNC_13(&VAR_15, VAR_13->data, sizeof(VAR_15));

  if (FUNC_11(VAR_12->udev->descriptor.bcdDevice) < 0x3106) {
   FUNC_4(VAR_13);
   FUNC_2(VAR_12);
   VAR_12->bootcmdresp = 1;

   FUNC_10(&VAR_12->udev->dev,
         "Received valid boot command response\n");
   FUNC_7(VAR_8);
   return;
  }
  if (VAR_15.magic != FUNC_0(VAR_1)) {
   if (VAR_15.magic == FUNC_0(VAR_5) ||
       VAR_15.magic == FUNC_0(VAR_3) ||
       VAR_15.magic == FUNC_0(VAR_4)) {
    if (!VAR_12->bootcmdresp)
     FUNC_15("Firmware already seems alive; resetting\n");
    VAR_12->bootcmdresp = -1;
   } else {
    FUNC_15("boot cmd response wrong magic number (0x%x)\n",
         FUNC_12(VAR_15.magic));
   }
  } else if (VAR_15.cmd != VAR_0) {
   FUNC_15("boot cmd response cmd_tag error (%d)\n",
    VAR_15.cmd);
  } else if (VAR_15.result != VAR_2) {
   FUNC_15("boot cmd response result error (%d)\n",
    VAR_15.result);
  } else {
   VAR_12->bootcmdresp = 1;
   FUNC_10(&VAR_12->udev->dev,
    "Received valid boot command response\n");
  }

  FUNC_4(VAR_13);
  FUNC_2(VAR_12);
  FUNC_7(VAR_8);
  return;
 }

 VAR_14 = FUNC_5(VAR_13->data, sizeof(struct fwsyncheader),
          VAR_6);
 if (!VAR_14) {
  FUNC_10(&VAR_12->udev->dev,
   "Failure to allocate syncfwheader\n");
  FUNC_4(VAR_13);
  FUNC_7(VAR_8);
  return;
 }

 if (!VAR_14->cmd) {
  FUNC_9(&VAR_12->udev->dev,
   "FW received Blk with correct CRC\n");
  FUNC_9(&VAR_12->udev->dev,
   "FW received Blk seqnum = %d\n",
   FUNC_12(VAR_14->seqnum));
  VAR_12->CRC_OK = 1;
 } else {
  FUNC_10(&VAR_12->udev->dev,
   "FW received Blk with CRC error\n");
  VAR_12->CRC_OK = 0;
 }

 FUNC_4(VAR_13);


 FUNC_14(&VAR_12->fw_timeout, VAR_10 + (VAR_7/5));

 if (VAR_12->fwfinalblk) {
  VAR_12->fwdnldover = 1;
  goto exit;
 }

 FUNC_1(VAR_12);

 exit:
 FUNC_2(VAR_12);

 FUNC_3(VAR_14);

 FUNC_7(VAR_8);
}
