
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct nfp_ccm_mbox_cmsg_cb {int max_len; unsigned int exp_reply; int posted; scalar_t__ err; int state; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct sk_buff *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct nfp_ccm_mbox_cmsg_cb *VAR_4 = (void *)VAR_1->cb;

 VAR_4->state = VAR_0;
 VAR_4->err = 0;
 VAR_4->max_len = VAR_3;
 VAR_4->exp_reply = VAR_2;
 VAR_4->posted = 0;
}
