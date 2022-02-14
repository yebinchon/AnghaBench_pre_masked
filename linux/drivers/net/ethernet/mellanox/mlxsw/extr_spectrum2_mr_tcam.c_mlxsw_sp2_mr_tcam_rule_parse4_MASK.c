
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int addr4; } ;
struct TYPE_7__ {int addr4; } ;
struct TYPE_6__ {int addr4; } ;
struct TYPE_5__ {int addr4; } ;
struct mlxsw_sp_mr_route_key {TYPE_4__ group_mask; TYPE_3__ group; TYPE_2__ source_mask; TYPE_1__ source; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_acl_rule_info*,int ,char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_acl_rule_info *VAR_2,
         struct mlxsw_sp_mr_route_key *VAR_3)
{
 FUNC_0(VAR_2, VAR_1,
           (char *) &VAR_3->source.addr4,
           (char *) &VAR_3->source_mask.addr4, 4);
 FUNC_0(VAR_2, VAR_0,
           (char *) &VAR_3->group.addr4,
           (char *) &VAR_3->group_mask.addr4, 4);
}
