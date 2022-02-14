
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_flower_ipv6 {int ip_ext; int ipv6_dst; int ipv6_src; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ipv6_addrs {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {int dst; int src; } ;


 int VAR_0 ;
 struct flow_rule* FUNC_0 (struct flow_cls_offload*) ;
 int FUNC_1 (struct flow_rule*,struct flow_match_ipv6_addrs*) ;
 scalar_t__ FUNC_2 (struct flow_rule*,int ) ;
 int FUNC_3 (struct nfp_flower_ipv6*,int ,int) ;
 int FUNC_4 (int *,int *,struct flow_cls_offload*) ;

__attribute__((used)) static void
FUNC_5(struct nfp_flower_ipv6 *VAR_1,
   struct nfp_flower_ipv6 *VAR_2,
   struct flow_cls_offload *VAR_3)
{
 struct flow_rule *VAR_4 = FUNC_0(VAR_3);

 FUNC_3(VAR_1, 0, sizeof(struct nfp_flower_ipv6));
 FUNC_3(VAR_2, 0, sizeof(struct nfp_flower_ipv6));

 if (FUNC_2(VAR_4, VAR_0)) {
  struct flow_match_ipv6_addrs VAR_5;

  FUNC_1(VAR_4, &VAR_5);
  VAR_1->ipv6_src = VAR_5.key->src;
  VAR_1->ipv6_dst = VAR_5.key->dst;
  VAR_2->ipv6_src = VAR_5.mask->src;
  VAR_2->ipv6_dst = VAR_5.mask->dst;
 }

 FUNC_4(&VAR_1->ip_ext, &VAR_2->ip_ext, VAR_3);
}
