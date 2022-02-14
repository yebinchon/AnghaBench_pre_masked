
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_flower_tun_ip_ext {int ttl; int tos; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ip {TYPE_1__* mask; TYPE_2__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int ttl; int tos; } ;
struct TYPE_3__ {int ttl; int tos; } ;


 int VAR_0 ;
 struct flow_rule* FUNC_0 (struct flow_cls_offload*) ;
 int FUNC_1 (struct flow_rule*,struct flow_match_ip*) ;
 scalar_t__ FUNC_2 (struct flow_rule*,int ) ;

__attribute__((used)) static void
FUNC_3(struct nfp_flower_tun_ip_ext *VAR_1,
         struct nfp_flower_tun_ip_ext *VAR_2,
         struct flow_cls_offload *VAR_3)
{
 struct flow_rule *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_2(VAR_4, VAR_0)) {
  struct flow_match_ip VAR_5;

  FUNC_1(VAR_4, &VAR_5);
  VAR_1->tos = VAR_5.key->tos;
  VAR_1->ttl = VAR_5.key->ttl;
  VAR_2->tos = VAR_5.mask->tos;
  VAR_2->ttl = VAR_5.mask->ttl;
 }
}
