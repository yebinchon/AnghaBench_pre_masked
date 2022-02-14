
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct pdp_ctx {TYPE_1__ ms_addr_ip4; } ;
struct iphdr {scalar_t__ daddr; scalar_t__ saddr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_1, struct pdp_ctx *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 struct iphdr *VAR_5;

 if (!FUNC_0(VAR_1, VAR_3 + sizeof(struct iphdr)))
  return 0;

 VAR_5 = (struct iphdr *)(VAR_1->data + VAR_3);

 if (VAR_4 == VAR_0)
  return VAR_5->daddr == VAR_2->ms_addr_ip4.s_addr;
 else
  return VAR_5->saddr == VAR_2->ms_addr_ip4.s_addr;
}
