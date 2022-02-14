
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xfrm_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ hi; scalar_t__ low; } ;
struct xfrm_offload {TYPE_1__ seq; } ;
struct sk_buff {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
typedef int __be64 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int,int *,int) ;
 int FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct sk_buff *VAR_0, struct xfrm_state *VAR_1,
   struct xfrm_offload *VAR_2)
{
 int VAR_3;
 __be64 VAR_4;


 VAR_4 = FUNC_0(VAR_2->seq.low + ((u64)VAR_2->seq.hi << 32));
 VAR_3 = FUNC_2(VAR_0) + sizeof(struct ip_esp_hdr);
 FUNC_1(VAR_0, VAR_3, &VAR_4, 8);
}
