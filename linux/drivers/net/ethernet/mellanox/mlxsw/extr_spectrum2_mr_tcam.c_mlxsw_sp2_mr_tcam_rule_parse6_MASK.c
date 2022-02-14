
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int * s6_addr; } ;
struct TYPE_16__ {TYPE_7__ addr6; } ;
struct TYPE_13__ {int * s6_addr; } ;
struct TYPE_14__ {TYPE_5__ addr6; } ;
struct TYPE_11__ {int * s6_addr; } ;
struct TYPE_12__ {TYPE_3__ addr6; } ;
struct TYPE_9__ {int * s6_addr; } ;
struct TYPE_10__ {TYPE_1__ addr6; } ;
struct mlxsw_sp_mr_route_key {TYPE_8__ group_mask; TYPE_6__ group; TYPE_4__ source_mask; TYPE_2__ source; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlxsw_sp_acl_rule_info*,int ,int *,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_acl_rule_info *VAR_8,
         struct mlxsw_sp_mr_route_key *VAR_9)
{
 FUNC_0(VAR_8, VAR_7,
           &VAR_9->source.addr6.s6_addr[0x0],
           &VAR_9->source_mask.addr6.s6_addr[0x0], 4);
 FUNC_0(VAR_8, VAR_6,
           &VAR_9->source.addr6.s6_addr[0x4],
           &VAR_9->source_mask.addr6.s6_addr[0x4], 4);
 FUNC_0(VAR_8, VAR_5,
           &VAR_9->source.addr6.s6_addr[0x8],
           &VAR_9->source_mask.addr6.s6_addr[0x8], 4);
 FUNC_0(VAR_8, VAR_4,
           &VAR_9->source.addr6.s6_addr[0xc],
           &VAR_9->source_mask.addr6.s6_addr[0xc], 4);
 FUNC_0(VAR_8, VAR_3,
           &VAR_9->group.addr6.s6_addr[0x0],
           &VAR_9->group_mask.addr6.s6_addr[0x0], 4);
 FUNC_0(VAR_8, VAR_2,
           &VAR_9->group.addr6.s6_addr[0x4],
           &VAR_9->group_mask.addr6.s6_addr[0x4], 4);
 FUNC_0(VAR_8, VAR_1,
           &VAR_9->group.addr6.s6_addr[0x8],
           &VAR_9->group_mask.addr6.s6_addr[0x8], 4);
 FUNC_0(VAR_8, VAR_0,
           &VAR_9->group.addr6.s6_addr[0xc],
           &VAR_9->group_mask.addr6.s6_addr[0xc], 4);
}
