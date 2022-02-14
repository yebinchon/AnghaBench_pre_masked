
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlx5_flow_spec {int match_criteria_enable; int match_criteria; int match_value; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {int dummy; } ;
struct mlx5_flow_act {int action; int member_0; } ;
struct TYPE_2__ {int ft_offloads; } ;
struct mlx5_eswitch {int dev; TYPE_1__ offloads; } ;


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
 int VAR_7 ;
 int FUNC_7 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_8 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct mlx5_flow_handle* FUNC_9 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;
 int FUNC_10 (struct mlx5_eswitch*,int ) ;
 scalar_t__ FUNC_11 (struct mlx5_eswitch*) ;
 int VAR_11 ;

struct mlx5_flow_handle *
FUNC_12(struct mlx5_eswitch *VAR_12, u16 VAR_13,
      struct mlx5_flow_destination *VAR_14)
{
 struct mlx5_flow_act VAR_15 = {0};
 struct mlx5_flow_handle *VAR_16;
 struct mlx5_flow_spec *VAR_17;
 void *VAR_18;

 VAR_17 = FUNC_8(sizeof(*VAR_17), VAR_1);
 if (!VAR_17) {
  VAR_16 = FUNC_0(-VAR_0);
  goto out;
 }

 if (FUNC_11(VAR_12)) {
  VAR_18 = FUNC_2(VAR_5, VAR_17->match_value, VAR_10);
  FUNC_3(VAR_7, VAR_18, VAR_8,
    FUNC_10(VAR_12, VAR_13));

  VAR_18 = FUNC_2(VAR_5, VAR_17->match_criteria, VAR_10);
  FUNC_4(VAR_7, VAR_18, VAR_8);

  VAR_17->match_criteria_enable = VAR_4;
 } else {
  VAR_18 = FUNC_2(VAR_5, VAR_17->match_value, VAR_9);
  FUNC_3(VAR_6, VAR_18, VAR_11, VAR_13);

  VAR_18 = FUNC_2(VAR_5, VAR_17->match_criteria, VAR_9);
  FUNC_4(VAR_6, VAR_18, VAR_11);

  VAR_17->match_criteria_enable = VAR_3;
 }

 VAR_15.action = VAR_2;
 VAR_16 = FUNC_9(VAR_12->offloads.ft_offloads, VAR_17,
     &VAR_15, VAR_14, 1);
 if (FUNC_1(VAR_16)) {
  FUNC_6(VAR_12->dev, "fs offloads: Failed to add vport rx rule err %ld\n", FUNC_5(VAR_16));
  goto out;
 }

out:
 FUNC_7(VAR_17);
 return VAR_16;
}
