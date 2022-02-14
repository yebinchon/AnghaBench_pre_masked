
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_iwarp_reject_in {int private_data_len; int private_data; int cb_context; struct qed_iwarp_ep* ep_context; } ;
struct TYPE_3__ {int private_data_len; scalar_t__ private_data; } ;
struct qed_iwarp_ep {TYPE_2__* ep_buffer_virt; TYPE_1__ cm_info; int * qp; int cb_context; int tcp_cid; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_4__ {scalar_t__ out_pdata; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_iwarp_ep*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_iwarp_ep*,int*) ;

int FUNC_5(void *VAR_2, struct qed_iwarp_reject_in *VAR_3)
{
 struct qed_hwfn *VAR_4 = VAR_2;
 struct qed_iwarp_ep *VAR_5;
 u8 VAR_6 = 0;

 VAR_5 = VAR_3->ep_context;
 if (!VAR_5) {
  FUNC_0(VAR_4, "Ep Context receive in reject is NULL\n");
  return -VAR_0;
 }

 FUNC_1(VAR_4, VAR_1, "EP(0x%x)\n", VAR_5->tcp_cid);

 VAR_5->cb_context = VAR_3->cb_context;
 VAR_5->qp = ((void*)0);

 FUNC_4(VAR_4, VAR_5, &VAR_6);

 VAR_5->cm_info.private_data = VAR_5->ep_buffer_virt->out_pdata;
 VAR_5->cm_info.private_data_len = VAR_3->private_data_len +
           VAR_6;

 FUNC_2((u8 *)VAR_5->ep_buffer_virt->out_pdata + VAR_6,
        VAR_3->private_data, VAR_3->private_data_len);

 return FUNC_3(VAR_4, VAR_5);
}
