
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xid2 {int xid2_adj_id; int xid2_sender_id; } ;
struct th_header {int dummy; } ;
struct mpc_group {struct xid2* xid; int * saved_xid2; TYPE_1__* rcvd_xid_skb; struct th_header* rcvd_xid_th; scalar_t__ rcvd_xid_data; TYPE_1__* xid_skb; int * fsm; scalar_t__ xid_id; struct th_header* xid_th; scalar_t__ xid_skb_data; int timer; } ;
struct ctcm_priv {struct mpc_group* mpcg; struct xid2* xid; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int FUNC_0 (int ,int ,char*,int ,struct ctcm_priv*) ;
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
 int VAR_11 ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (char*,int ,int ,int ,int ,int ,int ,int ) ;
 char VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct mpc_group*) ;
 int FUNC_7 (int *) ;
 struct mpc_group* FUNC_8 (int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 char VAR_18 ;

struct mpc_group *FUNC_11(struct ctcm_priv *VAR_19)
{
 struct mpc_group *VAR_20;

 FUNC_0(VAR_9, VAR_1,
   "Enter %s(%p)", VAR_0, VAR_19);

 VAR_20 = FUNC_8(sizeof(struct mpc_group), VAR_4);
 if (VAR_20 == ((void*)0))
  return ((void*)0);

 VAR_20->fsm = FUNC_5("mpcg", VAR_17, VAR_14,
   VAR_6, VAR_5, VAR_15,
   VAR_16, VAR_4);
 if (VAR_20->fsm == ((void*)0)) {
  FUNC_6(VAR_20);
  return ((void*)0);
 }

 FUNC_3(VAR_20->fsm, VAR_7);
 FUNC_4(VAR_20->fsm, &VAR_20->timer);

 VAR_20->xid_skb =
   FUNC_1(VAR_8, VAR_2 | VAR_3);
 if (VAR_20->xid_skb == ((void*)0)) {
  FUNC_7(VAR_20->fsm);
  FUNC_6(VAR_20);
  return ((void*)0);
 }

 VAR_20->xid_skb_data = VAR_20->xid_skb->data;
 VAR_20->xid_th = (struct th_header *)VAR_20->xid_skb->data;
 FUNC_9(VAR_20->xid_skb, &VAR_18, VAR_10);

 VAR_20->xid = (struct xid2 *)FUNC_10(VAR_20->xid_skb);
 FUNC_9(VAR_20->xid_skb, &VAR_12, VAR_11);
 VAR_20->xid->xid2_adj_id = VAR_13 | 0xfff00000;
 VAR_20->xid->xid2_sender_id = VAR_13;

 VAR_20->xid_id = FUNC_10(VAR_20->xid_skb);
 FUNC_9(VAR_20->xid_skb, "VTAM", 4);

 VAR_20->rcvd_xid_skb =
  FUNC_1(VAR_8, VAR_2|VAR_3);
 if (VAR_20->rcvd_xid_skb == ((void*)0)) {
  FUNC_7(VAR_20->fsm);
  FUNC_2(VAR_20->xid_skb);
  FUNC_6(VAR_20);
  return ((void*)0);
 }
 VAR_20->rcvd_xid_data = VAR_20->rcvd_xid_skb->data;
 VAR_20->rcvd_xid_th = (struct th_header *)VAR_20->rcvd_xid_skb->data;
 FUNC_9(VAR_20->rcvd_xid_skb, &VAR_18, VAR_10);
 VAR_20->saved_xid2 = ((void*)0);
 VAR_19->xid = VAR_20->xid;
 VAR_19->mpcg = VAR_20;
 return VAR_20;
}
