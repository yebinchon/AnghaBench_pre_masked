
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct mlx5_flow_table* acl; struct mlx5_flow_table* allow_untagged_spoofchk_grp; struct mlx5_flow_table* allow_untagged_only_grp; struct mlx5_flow_table* allow_spoofchk_only_grp; struct mlx5_flow_table* drop_grp; } ;
struct mlx5_vport {TYPE_1__ ingress; int vport; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_namespace {int dummy; } ;
typedef struct mlx5_flow_table mlx5_flow_group ;
struct mlx5_eswitch {struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int smac_15_0; int smac_47_16; int cvlan_tag; } ;


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
 struct mlx5_core_dev *VAR_16 = VAR_13->dev;
 struct mlx5_flow_namespace *VAR_17;
 struct mlx5_flow_table *VAR_18;
 struct mlx5_flow_group *VAR_19;
 void *VAR_20;
 u32 *VAR_21;
 int VAR_22 = 4;
 int VAR_23 = 0;

 if (!FUNC_3(VAR_16, VAR_7))
  return -VAR_1;

 if (!FUNC_1(VAR_14->ingress.acl))
  return 0;

 FUNC_8(VAR_16, "Create vport[%d] ingress ACL log_max_size(%d)\n",
    VAR_14->vport, FUNC_3(VAR_16, VAR_9));

 VAR_17 = FUNC_18(VAR_16, VAR_3,
   FUNC_17(VAR_13, VAR_14->vport));
 if (!VAR_17) {
  FUNC_9(VAR_16, "Failed to get E-Switch ingress flow namespace for vport (%d)\n", VAR_14->vport);
  return -VAR_1;
 }

 VAR_21 = FUNC_11(VAR_15, VAR_2);
 if (!VAR_21)
  return -VAR_0;

 VAR_18 = FUNC_14(VAR_17, 0, VAR_22, 0, VAR_14->vport);
 if (FUNC_0(VAR_18)) {
  VAR_23 = FUNC_7(VAR_18);
  FUNC_9(VAR_16, "Failed to create E-Switch vport[%d] ingress flow Table, err(%d)\n",
    VAR_14->vport, VAR_23);
  goto out;
 }
 VAR_14->ingress.acl = VAR_18;

 VAR_20 = FUNC_2(VAR_5, VAR_21, VAR_20);

 FUNC_4(VAR_5, VAR_21, VAR_10, VAR_4);
 FUNC_5(VAR_8, VAR_20, VAR_11.cvlan_tag);
 FUNC_5(VAR_8, VAR_20, VAR_11.smac_47_16);
 FUNC_5(VAR_8, VAR_20, VAR_11.smac_15_0);
 FUNC_4(VAR_5, VAR_21, VAR_12, 0);
 FUNC_4(VAR_5, VAR_21, VAR_6, 0);

 VAR_19 = FUNC_13(VAR_18, VAR_21);
 if (FUNC_0(VAR_19)) {
  VAR_23 = FUNC_7(VAR_19);
  FUNC_9(VAR_16, "Failed to create E-Switch vport[%d] ingress untagged spoofchk flow group, err(%d)\n",
    VAR_14->vport, VAR_23);
  goto out;
 }
 VAR_14->ingress.allow_untagged_spoofchk_grp = VAR_19;

 FUNC_12(VAR_21, 0, VAR_15);
 FUNC_4(VAR_5, VAR_21, VAR_10, VAR_4);
 FUNC_5(VAR_8, VAR_20, VAR_11.cvlan_tag);
 FUNC_4(VAR_5, VAR_21, VAR_12, 1);
 FUNC_4(VAR_5, VAR_21, VAR_6, 1);

 VAR_19 = FUNC_13(VAR_18, VAR_21);
 if (FUNC_0(VAR_19)) {
  VAR_23 = FUNC_7(VAR_19);
  FUNC_9(VAR_16, "Failed to create E-Switch vport[%d] ingress untagged flow group, err(%d)\n",
    VAR_14->vport, VAR_23);
  goto out;
 }
 VAR_14->ingress.allow_untagged_only_grp = VAR_19;

 FUNC_12(VAR_21, 0, VAR_15);
 FUNC_4(VAR_5, VAR_21, VAR_10, VAR_4);
 FUNC_5(VAR_8, VAR_20, VAR_11.smac_47_16);
 FUNC_5(VAR_8, VAR_20, VAR_11.smac_15_0);
 FUNC_4(VAR_5, VAR_21, VAR_12, 2);
 FUNC_4(VAR_5, VAR_21, VAR_6, 2);

 VAR_19 = FUNC_13(VAR_18, VAR_21);
 if (FUNC_0(VAR_19)) {
  VAR_23 = FUNC_7(VAR_19);
  FUNC_9(VAR_16, "Failed to create E-Switch vport[%d] ingress spoofchk flow group, err(%d)\n",
    VAR_14->vport, VAR_23);
  goto out;
 }
 VAR_14->ingress.allow_spoofchk_only_grp = VAR_19;

 FUNC_12(VAR_21, 0, VAR_15);
 FUNC_4(VAR_5, VAR_21, VAR_12, 3);
 FUNC_4(VAR_5, VAR_21, VAR_6, 3);

 VAR_19 = FUNC_13(VAR_18, VAR_21);
 if (FUNC_0(VAR_19)) {
  VAR_23 = FUNC_7(VAR_19);
  FUNC_9(VAR_16, "Failed to create E-Switch vport[%d] ingress drop flow group, err(%d)\n",
    VAR_14->vport, VAR_23);
  goto out;
 }
 VAR_14->ingress.drop_grp = VAR_19;

out:
 if (VAR_23) {
  if (!FUNC_1(VAR_14->ingress.allow_spoofchk_only_grp))
   FUNC_15(
     VAR_14->ingress.allow_spoofchk_only_grp);
  if (!FUNC_1(VAR_14->ingress.allow_untagged_only_grp))
   FUNC_15(
     VAR_14->ingress.allow_untagged_only_grp);
  if (!FUNC_1(VAR_14->ingress.allow_untagged_spoofchk_grp))
   FUNC_15(
    VAR_14->ingress.allow_untagged_spoofchk_grp);
  if (!FUNC_1(VAR_14->ingress.acl))
   FUNC_16(VAR_14->ingress.acl);
 }

 FUNC_10(VAR_21);
 return VAR_23;
}
