
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct slim_msg_txn {scalar_t__ mt; int mc; scalar_t__ dt; int rl; int ec; TYPE_1__* msg; int tid; int * comp; int la; } ;
struct slim_controller {int dev; } ;
struct qcom_slim_ngd_ctrl {int dev; } ;
struct TYPE_2__ {int num_bytes; int * wbuf; int * rbuf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int,int,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,char*,...) ;
 struct qcom_slim_ngd_ctrl* FUNC_3 (int ) ;
 int VAR_16 ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__* FUNC_5 (struct qcom_slim_ngd_ctrl*,int,int *) ;
 int FUNC_6 (struct qcom_slim_ngd_ctrl*,scalar_t__*,int) ;
 int FUNC_7 (struct slim_controller*,struct slim_msg_txn*) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 int VAR_17 ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct slim_controller *VAR_18,
      struct slim_msg_txn *VAR_19)
{
 struct qcom_slim_ngd_ctrl *VAR_20 = FUNC_3(VAR_18->dev);
 FUNC_0(VAR_17);
 FUNC_0(VAR_16);
 int VAR_21, VAR_22, VAR_23;
 u8 VAR_24[VAR_6];
 u8 VAR_25[VAR_6];
 u32 *VAR_26;
 u8 *VAR_27;
 u8 VAR_28 = VAR_19->la;
 bool VAR_29 = 0;

 if (VAR_19->mt == VAR_11 &&
  (VAR_19->mc >= VAR_9 &&
   VAR_19->mc <= VAR_10))
  return 0;

 if (VAR_19->dt == VAR_7)
  return -VAR_2;

 if (VAR_19->msg->num_bytes > VAR_6 ||
   VAR_19->rl > VAR_6) {
  FUNC_2(VAR_20->dev, "msg exceeds HW limit\n");
  return -VAR_0;
 }

 VAR_26 = FUNC_5(VAR_20, VAR_19->rl, &VAR_17);
 if (!VAR_26) {
  FUNC_2(VAR_20->dev, "Message buffer unavailable\n");
  return -VAR_1;
 }

 if (VAR_19->mt == VAR_11 &&
  (VAR_19->mc == 129 ||
  VAR_19->mc == 130 ||
  VAR_19->mc == 128)) {
  VAR_19->mt = VAR_12;
  switch (VAR_19->mc) {
  case 129:
   VAR_19->mc = VAR_14;
   break;
  case 130:
   VAR_19->mc = VAR_13;
   break;
  case 128:
   VAR_19->mc = VAR_15;
   break;
  default:
   return -VAR_0;
  }

  VAR_29 = 1;
  VAR_23 = 0;
  VAR_24[VAR_23++] = VAR_19->la;
  VAR_28 = VAR_5;
  VAR_24[VAR_23++] = VAR_19->msg->wbuf[0];
  if (VAR_19->mc != VAR_15)
   VAR_24[VAR_23++] = VAR_19->msg->wbuf[1];

  VAR_19->comp = &VAR_16;
  VAR_21 = FUNC_7(VAR_18, VAR_19);
  if (VAR_21) {
   FUNC_2(VAR_20->dev, "Unable to allocate TID\n");
   return VAR_21;
  }

  VAR_24[VAR_23++] = VAR_19->tid;

  VAR_19->msg->num_bytes = VAR_23;
  VAR_19->msg->wbuf = VAR_24;
  VAR_19->msg->rbuf = VAR_25;
  VAR_19->rl = VAR_19->msg->num_bytes + 4;
 }


 VAR_19->rl--;
 VAR_27 = (u8 *)VAR_26;
 *VAR_26 = 0;
 if (VAR_19->dt == VAR_8) {
  *VAR_26 = FUNC_1(VAR_19->rl, VAR_19->mt, VAR_19->mc, 0,
    VAR_28);
  VAR_27 += 3;
 } else {
  *VAR_26 = FUNC_1(VAR_19->rl, VAR_19->mt, VAR_19->mc, 1,
    VAR_28);
  VAR_27 += 2;
 }

 if (FUNC_9(VAR_19->mt, VAR_19->mc))
  *(VAR_27++) = VAR_19->tid;

 if (FUNC_8(VAR_19->mt, VAR_19->mc)) {
  *(VAR_27++) = (VAR_19->ec & 0xFF);
  *(VAR_27++) = (VAR_19->ec >> 8) & 0xFF;
 }

 if (VAR_19->msg && VAR_19->msg->wbuf)
  FUNC_4(VAR_27, VAR_19->msg->wbuf, VAR_19->msg->num_bytes);

 VAR_21 = FUNC_6(VAR_20, VAR_26, VAR_19->rl);
 if (VAR_21)
  return VAR_21;

 VAR_22 = FUNC_10(&VAR_17, VAR_4);
 if (!VAR_22) {
  FUNC_2(VAR_18->dev, "TX timed out:MC:0x%x,mt:0x%x", VAR_19->mc,
     VAR_19->mt);
  return -VAR_3;
 }

 if (VAR_29) {
  VAR_22 = FUNC_10(&VAR_16, VAR_4);
  if (!VAR_22) {
   FUNC_2(VAR_18->dev, "TX timed out:MC:0x%x,mt:0x%x",
    VAR_19->mc, VAR_19->mt);
   return -VAR_3;
  }
 }

 return 0;
}
