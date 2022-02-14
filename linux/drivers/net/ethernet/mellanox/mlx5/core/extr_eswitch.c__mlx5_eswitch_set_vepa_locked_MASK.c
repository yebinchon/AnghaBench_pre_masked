
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int num; } ;
struct mlx5_flow_spec {TYPE_1__ vport; int type; int ft; int match_criteria_enable; int match_criteria; int match_value; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {TYPE_1__ vport; int type; int ft; int match_criteria_enable; int match_criteria; int match_value; } ;
struct mlx5_flow_act {void* action; } ;
struct TYPE_5__ {struct mlx5_flow_handle* vepa_star_rule; int vepa_fdb; struct mlx5_flow_handle* vepa_uplink_rule; int fdb; } ;
struct TYPE_6__ {TYPE_2__ legacy; } ;
struct mlx5_eswitch {TYPE_3__ fdb_table; } ;
typedef int dest ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_handle*) ;
 void* FUNC_1 (int ,int ,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct mlx5_flow_handle*) ;
 int FUNC_5 (struct mlx5_eswitch*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mlx5_flow_spec*,int ,int) ;
 int VAR_9 ;
 struct mlx5_flow_handle* FUNC_9 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_spec*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_10(struct mlx5_eswitch *VAR_11,
      u8 VAR_12)
{
 struct mlx5_flow_destination VAR_13 = {};
 struct mlx5_flow_act VAR_14 = {};
 struct mlx5_flow_handle *VAR_15;
 struct mlx5_flow_spec *VAR_16;
 int VAR_17 = 0;
 void *VAR_18;

 if (!VAR_12) {
  FUNC_5(VAR_11);
  return 0;
 }

 if (VAR_11->fdb_table.legacy.vepa_uplink_rule)
  return 0;

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_1);
 if (!VAR_16)
  return -VAR_0;


 VAR_18 = FUNC_1(VAR_7, VAR_16->match_value, VAR_9);
 FUNC_2(VAR_8, VAR_18, VAR_10, VAR_6);

 VAR_18 = FUNC_1(VAR_7, VAR_16->match_criteria, VAR_9);
 FUNC_3(VAR_8, VAR_18, VAR_10);

 VAR_16->match_criteria_enable = VAR_5;
 VAR_13.type = VAR_3;
 VAR_13.ft = VAR_11->fdb_table.legacy.fdb;
 VAR_14.action = VAR_2;
 VAR_15 = FUNC_9(VAR_11->fdb_table.legacy.vepa_fdb, VAR_16,
     &VAR_14, &VAR_13, 1);
 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_4(VAR_15);
  goto out;
 } else {
  VAR_11->fdb_table.legacy.vepa_uplink_rule = VAR_15;
 }


 FUNC_8(VAR_16, 0, sizeof(*VAR_16));
 FUNC_8(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.type = VAR_4;
 VAR_13.vport.num = VAR_6;
 VAR_14.action = VAR_2;
 VAR_15 = FUNC_9(VAR_11->fdb_table.legacy.vepa_fdb, VAR_16,
     &VAR_14, &VAR_13, 1);
 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_4(VAR_15);
  goto out;
 } else {
  VAR_11->fdb_table.legacy.vepa_star_rule = VAR_15;
 }

out:
 FUNC_6(VAR_16);
 if (VAR_17)
  FUNC_5(VAR_11);
 return VAR_17;
}
