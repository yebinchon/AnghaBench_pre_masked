
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct slim_msg_txn {scalar_t__ dt; int ec; int mt; int mc; int rl; TYPE_1__* msg; int tid; int la; } ;
struct slim_controller {int dev; } ;
struct qcom_slim_ctrl {int dev; } ;
struct TYPE_2__ {int num_bytes; int wbuf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 struct qcom_slim_ctrl* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct qcom_slim_ctrl*,int *,int ,int ) ;
 void* FUNC_7 (struct qcom_slim_ctrl*,struct slim_msg_txn*,int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct slim_controller *VAR_7,
    struct slim_msg_txn *VAR_8)
{
 struct qcom_slim_ctrl *VAR_9 = FUNC_3(VAR_7->dev);
 FUNC_0(VAR_6);
 void *VAR_10 = FUNC_7(VAR_9, VAR_8, &VAR_6);
 unsigned long VAR_11 = VAR_8->rl + VAR_2;
 u8 *VAR_12;
 int VAR_13 = 0, VAR_14, VAR_15 = VAR_4;
 u8 VAR_16 = VAR_8->la;
 u32 *VAR_17;

 VAR_8->rl--;


 if (!VAR_10) {
  while (VAR_15--) {
   FUNC_10(10000, 15000);
   VAR_10 = FUNC_7(VAR_9, VAR_8, &VAR_6);
   if (VAR_10)
    break;
  }
 }

 if (VAR_15 < 0 && !VAR_10)
  return -VAR_0;

 VAR_12 = (u8 *)VAR_10;
 VAR_17 = (u32 *)VAR_10;

 if (VAR_8->dt == VAR_5) {
  *VAR_17 = FUNC_1(VAR_8->rl, VAR_8->mt,
      VAR_8->mc, 0, VAR_16);
  VAR_12 += 3;
 } else {
  *VAR_17 = FUNC_1(VAR_8->rl, VAR_8->mt,
      VAR_8->mc, 1, VAR_16);
  VAR_12 += 2;
 }

 if (FUNC_9(VAR_8->mt, VAR_8->mc))
  *(VAR_12++) = VAR_8->tid;

 if (FUNC_8(VAR_8->mt, VAR_8->mc)) {
  *(VAR_12++) = (VAR_8->ec & 0xFF);
  *(VAR_12++) = (VAR_8->ec >> 8) & 0xFF;
 }

 if (VAR_8->msg && VAR_8->msg->wbuf)
  FUNC_4(VAR_12, VAR_8->msg->wbuf, VAR_8->msg->num_bytes);

 FUNC_6(VAR_9, VAR_17, VAR_8->rl, VAR_3);
 VAR_14 = FUNC_11(&VAR_6, FUNC_5(VAR_11));

 if (!VAR_14) {
  FUNC_2(VAR_9->dev, "TX timed out:MC:0x%x,mt:0x%x", VAR_8->mc,
     VAR_8->mt);
  VAR_13 = -VAR_1;
 }

 return VAR_13;

}
