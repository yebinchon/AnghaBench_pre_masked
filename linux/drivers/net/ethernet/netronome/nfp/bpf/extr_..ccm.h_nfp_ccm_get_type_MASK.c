
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfp_ccm_hdr {int type; } ;



__attribute__((used)) static inline u8 FUNC_0(struct sk_buff *VAR_0)
{
 struct nfp_ccm_hdr *VAR_1;

 VAR_1 = (struct nfp_ccm_hdr *)VAR_0->data;

 return VAR_1->type;
}
