
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct TYPE_2__ {int runq_work; int workq; int queue; } ;
struct nfp_net {TYPE_1__ mbox_cmsg; } ;
struct nfp_ccm_mbox_cmsg_cb {scalar_t__ posted; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfp_net *VAR_1)
{
 struct nfp_ccm_mbox_cmsg_cb *VAR_2;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_1(&VAR_1->mbox_cmsg.queue);
 if (!VAR_3)
  return;

 VAR_2 = (void *)VAR_3->cb;
 VAR_2->state = VAR_0;
 if (VAR_2->posted)
  FUNC_0(VAR_1->mbox_cmsg.workq, &VAR_1->mbox_cmsg.runq_work);
}
