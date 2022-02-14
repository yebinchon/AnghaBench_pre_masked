
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct slim_val_inf {int num_bytes; scalar_t__* rbuf; scalar_t__* wbuf; int member_0; } ;
struct slim_msg_txn {int rl; scalar_t__ tid; struct slim_val_inf* msg; int mc; scalar_t__ ec; int la; int dt; int mt; } ;
struct slim_eaddr {int dummy; } ;
struct slim_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,struct slim_eaddr*,int) ;
 int FUNC_2 (struct slim_controller*,struct slim_msg_txn*) ;
 int FUNC_3 (struct slim_controller*,struct slim_msg_txn*) ;
 int FUNC_4 (struct slim_controller*,struct slim_msg_txn*) ;

__attribute__((used)) static int FUNC_5(struct slim_controller *VAR_5,
       struct slim_eaddr *VAR_6, u8 *VAR_7)
{
 struct slim_val_inf VAR_8 = {0};
 u8 VAR_9[6] = {0, 0, 0, 0, 0, 0};
 struct slim_msg_txn VAR_10;
 u8 VAR_11[10] = {0};
 u8 VAR_12[10] = {0};
 int VAR_13;

 VAR_10.mt = VAR_3;
 VAR_10.dt = VAR_2;
 VAR_10.la = VAR_1;
 VAR_10.ec = 0;

 VAR_10.mc = VAR_4;
 VAR_10.rl = 11;
 VAR_10.msg = &VAR_8;
 VAR_10.msg->num_bytes = 7;
 VAR_10.msg->wbuf = VAR_11;
 VAR_10.msg->rbuf = VAR_12;

 VAR_13 = FUNC_3(VAR_5, &VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_11[0] = (u8)VAR_10.tid;
 FUNC_1(&VAR_11[1], VAR_6, sizeof(*VAR_6));

 VAR_13 = FUNC_2(VAR_5, &VAR_10);
 if (VAR_13) {
  FUNC_4(VAR_5, &VAR_10);
  return VAR_13;
 }

 if (!FUNC_0(VAR_12, VAR_9, 6))
  return -VAR_0;

 *VAR_7 = VAR_12[6];

 return VAR_13;
}
