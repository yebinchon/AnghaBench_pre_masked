
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct bas_cardstate* bas; } ;
struct cardstate {int dev; TYPE_1__ hw; } ;
struct TYPE_4__ {int wLength; scalar_t__ wIndex; scalar_t__ wValue; int bRequest; int bRequestType; } ;
struct bas_cardstate {int timer_atrdy; int urb_cmd_out; TYPE_2__ dr_cmd_out; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct bas_cardstate*,int,int) ;
 int FUNC_7 (int ,int ,int ,unsigned char*,unsigned char*,int,int ,struct cardstate*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_10(struct cardstate *VAR_13, unsigned char *VAR_14, int VAR_15)
{
 struct bas_cardstate *VAR_16 = VAR_13->hw.bas;
 int VAR_17;

 FUNC_3(VAR_5, "-------> HD_WRITE_ATMESSAGE (%d)", VAR_15);

 if (FUNC_6(VAR_16, VAR_3, 0) & VAR_3) {
  FUNC_1(VAR_13->dev,
   "could not submit HD_WRITE_ATMESSAGE: URB busy\n");
  return -VAR_6;
 }

 VAR_16->dr_cmd_out.bRequestType = VAR_10;
 VAR_16->dr_cmd_out.bRequest = VAR_8;
 VAR_16->dr_cmd_out.wValue = 0;
 VAR_16->dr_cmd_out.wIndex = 0;
 VAR_16->dr_cmd_out.wLength = FUNC_0(VAR_15);
 FUNC_7(VAR_16->urb_cmd_out, VAR_16->udev,
        FUNC_8(VAR_16->udev, 0),
        (unsigned char *) &VAR_16->dr_cmd_out, VAR_14, VAR_15,
        VAR_12, VAR_13);
 VAR_17 = FUNC_9(VAR_16->urb_cmd_out, VAR_7);
 if (FUNC_5(VAR_17)) {
  FUNC_6(VAR_16, 0, VAR_3);
  FUNC_1(VAR_13->dev, "could not submit HD_WRITE_ATMESSAGE: %s\n",
   FUNC_2(VAR_17));
  return VAR_17;
 }


 if (!(FUNC_6(VAR_16, VAR_2, VAR_1) & VAR_2)) {
  FUNC_3(VAR_4, "setting ATREADY timeout of %d/10 secs",
   VAR_0);
  FUNC_4(&VAR_16->timer_atrdy, VAR_11 + VAR_0 * VAR_9 / 10);
 }
 return 0;
}
