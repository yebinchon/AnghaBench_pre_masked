
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp {TYPE_2__* bus_info; } ;
struct flow_rule {int dummy; } ;
struct flow_match_ip {TYPE_4__* mask; TYPE_3__* key; } ;
struct TYPE_5__ {int extack; } ;
struct flow_cls_offload {TYPE_1__ common; } ;
struct TYPE_8__ {int ttl; int tos; } ;
struct TYPE_7__ {int ttl; int tos; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule const*,struct flow_match_ip*) ;
 int FUNC_4 (struct flow_rule const*,int ) ;
 int FUNC_5 (struct mlxsw_sp_acl_rule_info*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_7,
        struct mlxsw_sp_acl_rule_info *VAR_8,
        struct flow_cls_offload *VAR_9,
        u16 VAR_10)
{
 const struct flow_rule *VAR_11 = FUNC_2(VAR_9);
 struct flow_match_ip VAR_12;

 if (!FUNC_4(VAR_11, VAR_3))
  return 0;

 if (VAR_10 != VAR_1 && VAR_10 != VAR_2) {
  FUNC_0(VAR_9->common.extack, "IP keys supported only for IPv4/6");
  FUNC_1(VAR_7->bus_info->dev, "IP keys supported only for IPv4/6\n");
  return -VAR_0;
 }

 FUNC_3(VAR_11, &VAR_12);

 FUNC_5(VAR_8, VAR_6,
           VAR_12.key->ttl, VAR_12.mask->ttl);

 FUNC_5(VAR_8, VAR_5,
           VAR_12.key->tos & 0x3,
           VAR_12.mask->tos & 0x3);

 FUNC_5(VAR_8, VAR_4,
           VAR_12.key->tos >> 2,
           VAR_12.mask->tos >> 2);

 return 0;
}
