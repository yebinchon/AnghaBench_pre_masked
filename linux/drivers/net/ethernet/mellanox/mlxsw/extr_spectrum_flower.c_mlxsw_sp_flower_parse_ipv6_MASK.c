
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct flow_match_ipv6_addrs {TYPE_6__* mask; TYPE_4__* key; } ;
struct flow_cls_offload {int rule; } ;
struct TYPE_11__ {int * s6_addr; } ;
struct TYPE_8__ {int * s6_addr; } ;
struct TYPE_12__ {TYPE_5__ dst; TYPE_2__ src; } ;
struct TYPE_9__ {int * s6_addr; } ;
struct TYPE_7__ {int * s6_addr; } ;
struct TYPE_10__ {TYPE_3__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct flow_match_ipv6_addrs*) ;
 int FUNC_1 (struct mlxsw_sp_acl_rule_info*,int ,int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_acl_rule_info *VAR_8,
           struct flow_cls_offload *VAR_9)
{
 struct flow_match_ipv6_addrs VAR_10;

 FUNC_0(VAR_9->rule, &VAR_10);

 FUNC_1(VAR_8, VAR_7,
           &VAR_10.key->src.s6_addr[0x0],
           &VAR_10.mask->src.s6_addr[0x0], 4);
 FUNC_1(VAR_8, VAR_6,
           &VAR_10.key->src.s6_addr[0x4],
           &VAR_10.mask->src.s6_addr[0x4], 4);
 FUNC_1(VAR_8, VAR_5,
           &VAR_10.key->src.s6_addr[0x8],
           &VAR_10.mask->src.s6_addr[0x8], 4);
 FUNC_1(VAR_8, VAR_4,
           &VAR_10.key->src.s6_addr[0xC],
           &VAR_10.mask->src.s6_addr[0xC], 4);
 FUNC_1(VAR_8, VAR_3,
           &VAR_10.key->dst.s6_addr[0x0],
           &VAR_10.mask->dst.s6_addr[0x0], 4);
 FUNC_1(VAR_8, VAR_2,
           &VAR_10.key->dst.s6_addr[0x4],
           &VAR_10.mask->dst.s6_addr[0x4], 4);
 FUNC_1(VAR_8, VAR_1,
           &VAR_10.key->dst.s6_addr[0x8],
           &VAR_10.mask->dst.s6_addr[0x8], 4);
 FUNC_1(VAR_8, VAR_0,
           &VAR_10.key->dst.s6_addr[0xC],
           &VAR_10.mask->dst.s6_addr[0xC], 4);
}
