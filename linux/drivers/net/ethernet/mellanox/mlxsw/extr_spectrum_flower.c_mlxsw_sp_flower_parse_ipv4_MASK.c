
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct flow_match_ipv4_addrs {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int rule; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct flow_match_ipv4_addrs*) ;
 int FUNC_1 (struct mlxsw_sp_acl_rule_info*,int ,char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_acl_rule_info *VAR_2,
           struct flow_cls_offload *VAR_3)
{
 struct flow_match_ipv4_addrs VAR_4;

 FUNC_0(VAR_3->rule, &VAR_4);

 FUNC_1(VAR_2, VAR_1,
           (char *) &VAR_4.key->src,
           (char *) &VAR_4.mask->src, 4);
 FUNC_1(VAR_2, VAR_0,
           (char *) &VAR_4.key->dst,
           (char *) &VAR_4.mask->dst, 4);
}
