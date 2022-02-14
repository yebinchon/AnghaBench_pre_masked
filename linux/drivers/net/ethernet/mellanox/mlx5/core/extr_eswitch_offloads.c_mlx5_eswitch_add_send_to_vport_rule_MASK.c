
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlx5_flow_spec {int match_criteria_enable; int match_criteria; int match_value; } ;
struct mlx5_flow_handle {int dummy; } ;
struct TYPE_4__ {int num; } ;
struct mlx5_flow_destination {TYPE_1__ vport; int type; } ;
struct mlx5_flow_act {int action; int member_0; } ;
struct TYPE_5__ {int slow_fdb; } ;
struct TYPE_6__ {TYPE_2__ offloads; } ;
struct mlx5_eswitch {int dev; TYPE_3__ fdb_table; int manager_vport; } ;


 int VAR_0 ;
 struct mlx5_flow_handle* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mlx5_flow_handle*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,void*,int ,int ) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (struct mlx5_flow_handle*) ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_8 (int,int ) ;
 int VAR_7 ;
 struct mlx5_flow_handle* FUNC_9 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;
 int VAR_8 ;
 int VAR_9 ;

struct mlx5_flow_handle *
FUNC_10(struct mlx5_eswitch *VAR_10, u16 VAR_11,
        u32 VAR_12)
{
 struct mlx5_flow_act VAR_13 = {0};
 struct mlx5_flow_destination VAR_14 = {};
 struct mlx5_flow_handle *VAR_15;
 struct mlx5_flow_spec *VAR_16;
 void *VAR_17;

 VAR_16 = FUNC_8(sizeof(*VAR_16), VAR_1);
 if (!VAR_16) {
  VAR_15 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_17 = FUNC_2(VAR_5, VAR_16->match_value, VAR_7);
 FUNC_3(VAR_6, VAR_17, VAR_9, VAR_12);

 FUNC_3(VAR_6, VAR_17, VAR_8, VAR_10->manager_vport);

 VAR_17 = FUNC_2(VAR_5, VAR_16->match_criteria, VAR_7);
 FUNC_4(VAR_6, VAR_17, VAR_9);
 FUNC_4(VAR_6, VAR_17, VAR_8);

 VAR_16->match_criteria_enable = VAR_4;
 VAR_14.type = VAR_3;
 VAR_14.vport.num = VAR_11;
 VAR_13.action = VAR_2;

 VAR_15 = FUNC_9(VAR_10->fdb_table.offloads.slow_fdb, VAR_16,
     &VAR_13, &VAR_14, 1);
 if (FUNC_1(VAR_15))
  FUNC_6(VAR_10->dev, "FDB: Failed to add send to vport rule err %ld\n", FUNC_5(VAR_15));
out:
 FUNC_7(VAR_16);
 return VAR_15;
}
