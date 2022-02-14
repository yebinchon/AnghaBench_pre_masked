
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp {TYPE_2__* bus_info; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ports {TYPE_4__* mask; TYPE_3__* key; } ;
struct TYPE_5__ {int extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_8__ {int src; int dst; } ;
struct TYPE_7__ {int src; int dst; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule const*,int ) ;
 int FUNC_4 (struct flow_rule const*,struct flow_match_ports*) ;
 int FUNC_5 (struct mlxsw_sp_acl_rule_info*,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_6,
           struct mlxsw_sp_acl_rule_info *VAR_7,
           struct flow_cls_offload *VAR_8,
           u8 VAR_9)
{
 const struct flow_rule *VAR_10 = FUNC_2(VAR_8);
 struct flow_match_ports VAR_11;

 if (!FUNC_3(VAR_10, VAR_1))
  return 0;

 if (VAR_9 != VAR_2 && VAR_9 != VAR_3) {
  FUNC_0(VAR_8->common.extack, "Only UDP and TCP keys are supported");
  FUNC_1(VAR_6->bus_info->dev, "Only UDP and TCP keys are supported\n");
  return -VAR_0;
 }

 FUNC_4(VAR_10, &VAR_11);
 FUNC_5(VAR_7, VAR_4,
           FUNC_6(VAR_11.key->dst),
           FUNC_6(VAR_11.mask->dst));
 FUNC_5(VAR_7, VAR_5,
           FUNC_6(VAR_11.key->src),
           FUNC_6(VAR_11.mask->src));
 return 0;
}
