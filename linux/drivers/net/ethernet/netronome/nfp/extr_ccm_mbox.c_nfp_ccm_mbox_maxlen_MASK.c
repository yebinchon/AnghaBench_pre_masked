
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct nfp_ccm_mbox_cmsg_cb {int max_len; } ;



__attribute__((used)) static int FUNC_0(const struct sk_buff *VAR_0)
{
 struct nfp_ccm_mbox_cmsg_cb *VAR_1 = (void *)VAR_0->cb;

 return VAR_1->max_len;
}
