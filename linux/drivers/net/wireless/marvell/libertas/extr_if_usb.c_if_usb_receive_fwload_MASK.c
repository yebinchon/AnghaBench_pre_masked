
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
typedef int bootcmdresp ;
typedef scalar_t__ __le32 ;
struct TYPE_3__ {int bcdDevice; } ;
struct TYPE_4__ {int dev; TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct if_usb_card*) ;
 int FUNC_2 (struct if_usb_card*) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct fwsyncheader*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct fwsyncheader* FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct bootcmdresp*,scalar_t__,int) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct urb *VAR_13)
{
 struct if_usb_card *VAR_14 = VAR_13->context;
 struct sk_buff *VAR_15 = VAR_14->rx_skb;
 struct fwsyncheader *VAR_16;
 struct bootcmdresp VAR_17;

 if (VAR_13->status) {
  FUNC_8(&VAR_14->udev->dev,
        "URB status is failed during fw load\n");
  FUNC_4(VAR_15);
  return;
 }

 if (VAR_14->fwdnldover) {
  __le32 *VAR_18 = (__le32 *)(VAR_15->data + VAR_10);

  if (VAR_18[0] == FUNC_0(VAR_6) &&
      VAR_18[1] == FUNC_0(VAR_11)) {
   FUNC_13("Firmware ready event received\n");
   FUNC_14(&VAR_14->fw_wq);
  } else {
   FUNC_6("Waiting for confirmation; got %x %x\n",
        FUNC_10(VAR_18[0]), FUNC_10(VAR_18[1]));
   FUNC_2(VAR_14);
  }
  FUNC_4(VAR_15);
  return;
 }
 if (VAR_14->bootcmdresp <= 0) {
  FUNC_11 (&VAR_17, VAR_15->data + VAR_10,
   sizeof(VAR_17));

  if (FUNC_9(VAR_14->udev->descriptor.bcdDevice) < 0x3106) {
   FUNC_4(VAR_15);
   FUNC_2(VAR_14);
   VAR_14->bootcmdresp = VAR_2;
   FUNC_8(&VAR_14->udev->dev,
         "Received valid boot command response\n");
   return;
  }
  if (VAR_17.magic != FUNC_0(VAR_1)) {
   if (VAR_17.magic == FUNC_0(VAR_7) ||
       VAR_17.magic == FUNC_0(VAR_5) ||
       VAR_17.magic == FUNC_0(VAR_6)) {
    if (!VAR_14->bootcmdresp)
     FUNC_13("Firmware already seems alive; resetting\n");
    VAR_14->bootcmdresp = -1;
   } else {
    FUNC_13("boot cmd response wrong magic number (0x%x)\n",
         FUNC_10(VAR_17.magic));
   }
  } else if ((VAR_17.cmd != VAR_0) &&
      (VAR_17.cmd != VAR_4) &&
      (VAR_17.cmd != VAR_3)) {
   FUNC_13("boot cmd response cmd_tag error (%d)\n",
    VAR_17.cmd);
  } else if (VAR_17.result != VAR_2) {
   FUNC_13("boot cmd response result error (%d)\n",
    VAR_17.result);
  } else {
   VAR_14->bootcmdresp = 1;
   FUNC_8(&VAR_14->udev->dev,
         "Received valid boot command response\n");
  }
  FUNC_4(VAR_15);
  FUNC_2(VAR_14);
  return;
 }

 VAR_16 = FUNC_5(VAR_15->data + VAR_10,
          sizeof(struct fwsyncheader), VAR_8);
 if (!VAR_16) {
  FUNC_8(&VAR_14->udev->dev, "Failure to allocate syncfwheader\n");
  FUNC_4(VAR_15);
  return;
 }

 if (!VAR_16->cmd) {
  FUNC_7(&VAR_14->udev->dev, "FW received Blk with correct CRC\n");
  FUNC_7(&VAR_14->udev->dev, "FW received Blk seqnum = %d\n",
        FUNC_10(VAR_16->seqnum));
  VAR_14->CRC_OK = 1;
 } else {
  FUNC_8(&VAR_14->udev->dev, "FW received Blk with CRC error\n");
  VAR_14->CRC_OK = 0;
 }

 FUNC_4(VAR_15);


 FUNC_12(&VAR_14->fw_timeout, VAR_12 + (VAR_9*5));

 if (VAR_14->fwfinalblk) {
  VAR_14->fwdnldover = 1;
  goto exit;
 }

 FUNC_1(VAR_14);

 exit:
 FUNC_2(VAR_14);

 FUNC_3(VAR_16);
}
