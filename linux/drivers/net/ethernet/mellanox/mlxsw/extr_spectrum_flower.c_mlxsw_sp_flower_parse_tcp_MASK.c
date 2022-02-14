
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
struct flow_match_tcp {TYPE_4__* mask; TYPE_3__* key; } ;
struct TYPE_5__ {int extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule const*,int ) ;
 int FUNC_4 (struct flow_rule const*,struct flow_match_tcp*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mlxsw_sp_acl_rule_info*,int ,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_4,
         struct mlxsw_sp_acl_rule_info *VAR_5,
         struct flow_cls_offload *VAR_6,
         u8 VAR_7)
{
 const struct flow_rule *VAR_8 = FUNC_2(VAR_6);
 struct flow_match_tcp VAR_9;

 if (!FUNC_3(VAR_8, VAR_1))
  return 0;

 if (VAR_7 != VAR_2) {
  FUNC_0(VAR_6->common.extack, "TCP keys supported only for TCP");
  FUNC_1(VAR_4->bus_info->dev, "TCP keys supported only for TCP\n");
  return -VAR_0;
 }

 FUNC_4(VAR_8, &VAR_9);

 if (VAR_9.mask->flags & FUNC_5(0x0E00)) {
  FUNC_0(VAR_6->common.extack, "TCP flags match not supported on reserved bits");
  FUNC_1(VAR_4->bus_info->dev, "TCP flags match not supported on reserved bits\n");
  return -VAR_0;
 }

 FUNC_6(VAR_5, VAR_3,
           FUNC_7(VAR_9.key->flags),
           FUNC_7(VAR_9.mask->flags));
 return 0;
}
