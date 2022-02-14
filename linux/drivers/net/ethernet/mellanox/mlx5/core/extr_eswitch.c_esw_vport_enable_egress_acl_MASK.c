
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct mlx5_flow_table* allowed_vlans_grp; struct mlx5_flow_table* drop_grp; struct mlx5_flow_table* acl; } ;
struct mlx5_vport {TYPE_1__ egress; int vport; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
typedef struct mlx5_flow_table mlx5_flow_group ;
struct mlx5_eswitch {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int first_vid; int cvlan_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_table*) ;
 int FUNC_1 (struct mlx5_flow_table*) ;
 void* FUNC_2 (int ,int *,void*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ,int) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5_flow_table*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct mlx5_core_dev*,char*,int ,int ) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int ,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *,int ,int) ;
 struct mlx5_flow_table* FUNC_13 (struct mlx5_flow_table*,int *) ;
 struct mlx5_flow_table* FUNC_14 (struct mlx5_flow_namespace*,int ,int,int ,int ) ;
 int FUNC_15 (struct mlx5_flow_table*) ;
 int FUNC_16 (struct mlx5_flow_table*) ;
 int FUNC_17 (struct mlx5_eswitch*,int ) ;
 struct mlx5_flow_namespace* FUNC_18 (struct mlx5_core_dev*,int ,int ) ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;

int FUNC_19(struct mlx5_eswitch *VAR_13,
    struct mlx5_vport *VAR_14)
{
 int VAR_15 = FUNC_6(VAR_5);
 struct mlx5_flow_group *VAR_16 = ((void*)0);
 struct mlx5_flow_group *VAR_17 = ((void*)0);
 struct mlx5_core_dev *VAR_18 = VAR_13->dev;
 struct mlx5_flow_namespace *VAR_19;
 struct mlx5_flow_table *VAR_20;
 void *VAR_21;
 u32 *VAR_22;




 int VAR_23 = 2;
 int VAR_24 = 0;

 if (!FUNC_3(VAR_18, VAR_7))
  return -VAR_1;

 if (!FUNC_1(VAR_14->egress.acl))
  return 0;

 FUNC_8(VAR_18, "Create vport[%d] egress ACL log_max_size(%d)\n",
    VAR_14->vport, FUNC_3(VAR_18, VAR_9));

 VAR_19 = FUNC_18(VAR_18, VAR_3,
   FUNC_17(VAR_13, VAR_14->vport));
 if (!VAR_19) {
  FUNC_9(VAR_18, "Failed to get E-Switch egress flow namespace for vport (%d)\n", VAR_14->vport);
  return -VAR_1;
 }

 VAR_22 = FUNC_11(VAR_15, VAR_2);
 if (!VAR_22)
  return -VAR_0;

 VAR_20 = FUNC_14(VAR_19, 0, VAR_23, 0, VAR_14->vport);
 if (FUNC_0(VAR_20)) {
  VAR_24 = FUNC_7(VAR_20);
  FUNC_9(VAR_18, "Failed to create E-Switch vport[%d] egress flow Table, err(%d)\n",
    VAR_14->vport, VAR_24);
  goto out;
 }

 FUNC_4(VAR_5, VAR_22, VAR_10, VAR_4);
 VAR_21 = FUNC_2(VAR_5, VAR_22, VAR_21);
 FUNC_5(VAR_8, VAR_21, VAR_11.cvlan_tag);
 FUNC_5(VAR_8, VAR_21, VAR_11.first_vid);
 FUNC_4(VAR_5, VAR_22, VAR_12, 0);
 FUNC_4(VAR_5, VAR_22, VAR_6, 0);

 VAR_16 = FUNC_13(VAR_20, VAR_22);
 if (FUNC_0(VAR_16)) {
  VAR_24 = FUNC_7(VAR_16);
  FUNC_9(VAR_18, "Failed to create E-Switch vport[%d] egress allowed vlans flow group, err(%d)\n",
    VAR_14->vport, VAR_24);
  goto out;
 }

 FUNC_12(VAR_22, 0, VAR_15);
 FUNC_4(VAR_5, VAR_22, VAR_12, 1);
 FUNC_4(VAR_5, VAR_22, VAR_6, 1);
 VAR_17 = FUNC_13(VAR_20, VAR_22);
 if (FUNC_0(VAR_17)) {
  VAR_24 = FUNC_7(VAR_17);
  FUNC_9(VAR_18, "Failed to create E-Switch vport[%d] egress drop flow group, err(%d)\n",
    VAR_14->vport, VAR_24);
  goto out;
 }

 VAR_14->egress.acl = VAR_20;
 VAR_14->egress.drop_grp = VAR_17;
 VAR_14->egress.allowed_vlans_grp = VAR_16;
out:
 FUNC_10(VAR_22);
 if (VAR_24 && !FUNC_1(VAR_16))
  FUNC_15(VAR_16);
 if (VAR_24 && !FUNC_1(VAR_20))
  FUNC_16(VAR_20);
 return VAR_24;
}
