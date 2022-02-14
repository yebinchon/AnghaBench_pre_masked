
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct nfp_ccm_mbox_cmsg_cb {int state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sk_buff *VAR_1)
{
 struct nfp_ccm_mbox_cmsg_cb *VAR_2 = (void *)VAR_1->cb;

 VAR_2->state = VAR_0;
}
