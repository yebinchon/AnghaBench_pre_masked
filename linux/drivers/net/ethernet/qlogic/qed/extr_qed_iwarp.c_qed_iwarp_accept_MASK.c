
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ ird; scalar_t__ ord; int private_data_len; scalar_t__ private_data; } ;
struct qed_iwarp_ep {scalar_t__ mpa_rev; int rtr_type; TYPE_2__* ep_buffer_virt; TYPE_1__ cm_info; TYPE_3__* qp; int cb_context; int tcp_cid; } ;
struct qed_iwarp_accept_in {scalar_t__ ord; int ird; int private_data_len; TYPE_3__* qp; int private_data; int cb_context; struct qed_iwarp_ep* ep_context; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_6__ {struct qed_iwarp_ep* ep; int icid; } ;
struct TYPE_5__ {scalar_t__ out_pdata; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,TYPE_3__*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_iwarp_ep*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_iwarp_ep*,int*) ;
 int FUNC_6 (struct qed_hwfn*,int) ;

int FUNC_7(void *VAR_7, struct qed_iwarp_accept_in *VAR_8)
{
 struct qed_hwfn *VAR_9 = VAR_7;
 struct qed_iwarp_ep *VAR_10;
 u8 VAR_11 = 0;
 int VAR_12;

 VAR_10 = VAR_8->ep_context;
 if (!VAR_10) {
  FUNC_0(VAR_9, "Ep Context receive in accept is NULL\n");
  return -VAR_0;
 }

 FUNC_1(VAR_9, VAR_6, "QP(0x%x) EP(0x%x)\n",
     VAR_8->qp->icid, VAR_10->tcp_cid);

 if ((VAR_8->ord > VAR_4) ||
     (VAR_8->ird > VAR_3)) {
  FUNC_1(VAR_9,
      VAR_6,
      "QP(0x%x) EP(0x%x) ERROR: Invalid ord(0x%x)/ird(0x%x)\n",
      VAR_8->qp->icid,
      VAR_10->tcp_cid, VAR_8->ord, VAR_8->ord);
  return -VAR_0;
 }

 FUNC_6(VAR_9, 0);

 VAR_10->cb_context = VAR_8->cb_context;
 VAR_10->qp = VAR_8->qp;
 VAR_10->qp->ep = VAR_10;

 if (VAR_10->mpa_rev == VAR_1) {



  if (VAR_8->ord > VAR_10->cm_info.ird)
   VAR_8->ord = VAR_10->cm_info.ird;

  if ((VAR_10->rtr_type & VAR_2) &&
      (VAR_8->ird == 0))
   VAR_8->ird = 1;
 }


 VAR_10->cm_info.ord = VAR_8->ord;
 VAR_10->cm_info.ird = VAR_8->ird;

 FUNC_5(VAR_9, VAR_10, &VAR_11);

 VAR_10->cm_info.private_data = VAR_10->ep_buffer_virt->out_pdata;
 VAR_10->cm_info.private_data_len = VAR_8->private_data_len +
           VAR_11;

 FUNC_2((u8 *)VAR_10->ep_buffer_virt->out_pdata + VAR_11,
        VAR_8->private_data, VAR_8->private_data_len);

 VAR_12 = FUNC_4(VAR_9, VAR_10);
 if (VAR_12)
  FUNC_3(VAR_9,
        VAR_8->qp, VAR_5, 1);

 return VAR_12;
}
