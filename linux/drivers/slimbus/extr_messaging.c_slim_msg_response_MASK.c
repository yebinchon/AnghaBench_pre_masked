
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slim_val_inf {int * rbuf; } ;
struct slim_msg_txn {scalar_t__ comp; struct slim_val_inf* msg; } ;
struct slim_controller {int dev; int txn_lock; int tid_idr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct slim_msg_txn* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct slim_controller*,struct slim_msg_txn*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct slim_controller *VAR_0, u8 *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct slim_msg_txn *VAR_4;
 struct slim_val_inf *VAR_5;
 unsigned long VAR_6;

 FUNC_7(&VAR_0->txn_lock, VAR_6);
 VAR_4 = FUNC_2(&VAR_0->tid_idr, VAR_2);
 FUNC_8(&VAR_0->txn_lock, VAR_6);

 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = VAR_4->msg;
 if (VAR_5 == ((void*)0) || VAR_5->rbuf == ((void*)0)) {
  FUNC_1(VAR_0->dev, "Got response to invalid TID:%d, len:%d\n",
    VAR_2, VAR_3);
  return;
 }

 FUNC_6(VAR_0, VAR_4);
 FUNC_3(VAR_5->rbuf, VAR_1, VAR_3);
 if (VAR_4->comp)
  FUNC_0(VAR_4->comp);


 FUNC_4(VAR_0->dev);
 FUNC_5(VAR_0->dev);
}
