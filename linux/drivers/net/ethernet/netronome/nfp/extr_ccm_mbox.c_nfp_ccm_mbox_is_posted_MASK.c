
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct nfp_ccm_mbox_cmsg_cb {int posted; } ;



__attribute__((used)) static bool FUNC_0(struct sk_buff *VAR_0)
{
 struct nfp_ccm_mbox_cmsg_cb *VAR_1 = (void *)VAR_0->cb;

 return VAR_1->posted;
}
