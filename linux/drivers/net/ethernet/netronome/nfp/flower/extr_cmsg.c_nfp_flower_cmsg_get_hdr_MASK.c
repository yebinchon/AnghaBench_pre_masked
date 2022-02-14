
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfp_flower_cmsg_hdr {int dummy; } ;



__attribute__((used)) static struct nfp_flower_cmsg_hdr *
FUNC_0(struct sk_buff *VAR_0)
{
 return (struct nfp_flower_cmsg_hdr *)VAR_0->data;
}
