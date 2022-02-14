
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct bas_cardstate* bas; } ;
struct cardstate {int dev; int inbuf; TYPE_1__ hw; } ;
struct TYPE_4__ {int wLength; scalar_t__ wIndex; scalar_t__ wValue; int bRequest; int bRequestType; } ;
struct bas_cardstate {int rcvbuf_size; int timer_cmd_in; int urb_cmd_in; int rcvbuf; TYPE_2__ dr_cmd_in; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_10 ;
 int FUNC_6 (struct bas_cardstate*,int,int) ;
 int FUNC_7 (int ,int ,int ,unsigned char*,int ,int,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct cardstate *VAR_11, int VAR_12)
{
 struct bas_cardstate *VAR_13 = VAR_11->hw.bas;
 int VAR_14;
 int VAR_15;

 FUNC_4(VAR_2, "-------> HD_READ_ATMESSAGE (%d)",
  VAR_13->rcvbuf_size);

 VAR_14 = FUNC_6(VAR_13, VAR_0, 0);
 if (VAR_14 & VAR_0) {
  FUNC_1(VAR_11->dev,
   "could not submit HD_READ_ATMESSAGE: URB busy\n");
  return -VAR_3;
 }

 if (VAR_14 & VAR_1) {
  FUNC_2(VAR_11->dev,
      "HD_READ_ATMESSAGE not submitted, "
      "suspend in progress\n");
  FUNC_6(VAR_13, 0, VAR_0);

  return -VAR_4;
 }

 VAR_13->dr_cmd_in.bRequestType = VAR_8;
 VAR_13->dr_cmd_in.bRequest = VAR_6;
 VAR_13->dr_cmd_in.wValue = 0;
 VAR_13->dr_cmd_in.wIndex = 0;
 VAR_13->dr_cmd_in.wLength = FUNC_0(VAR_13->rcvbuf_size);
 FUNC_7(VAR_13->urb_cmd_in, VAR_13->udev,
        FUNC_8(VAR_13->udev, 0),
        (unsigned char *) &VAR_13->dr_cmd_in,
        VAR_13->rcvbuf, VAR_13->rcvbuf_size,
        VAR_10, VAR_11->inbuf);

 VAR_15 = FUNC_9(VAR_13->urb_cmd_in, VAR_5);
 if (VAR_15 != 0) {
  FUNC_6(VAR_13, 0, VAR_0);
  FUNC_1(VAR_11->dev, "could not submit HD_READ_ATMESSAGE: %s\n",
   FUNC_3(VAR_15));
  return VAR_15;
 }

 if (VAR_12 > 0) {
  FUNC_4(VAR_2, "setting timeout of %d/10 secs", VAR_12);
  FUNC_5(&VAR_13->timer_cmd_in, VAR_9 + VAR_12 * VAR_7 / 10);
 }
 return 0;
}
