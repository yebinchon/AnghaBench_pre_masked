
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_hca_vport_context {int field_select; int sm_virt_aware; int has_smi; int has_raw; int policy; int phys_state; int vport_state; int cap_mask1; int cap_mask1_perm; int cap_mask2; int cap_mask2_perm; int lid; int init_type_reply; int lmc; int subnet_timeout; int sm_lid; int sm_sl; int qkey_violation_counter; int pkey_violation_counter; int node_guid; int port_guid; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,void*,int,int) ;
 int FUNC_3 (int ,void*,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,void*,int,int*,int) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

int FUNC_10(struct mlx5_core_dev *VAR_32,
           u8 VAR_33, u8 VAR_34,
           int VAR_35,
           struct mlx5_hca_vport_context *VAR_36)
{
 int VAR_37 = FUNC_4(VAR_15);
 u8 VAR_38[FUNC_4(VAR_16)];
 int VAR_39;
 void *VAR_40;
 int VAR_41;
 void *VAR_42;

 FUNC_9(VAR_32, "vf %d\n", VAR_35);
 VAR_39 = FUNC_1(VAR_32, VAR_28);
 VAR_40 = FUNC_6(VAR_37, VAR_2);
 if (!VAR_40)
  return -VAR_0;

 FUNC_7(VAR_38, 0, sizeof(VAR_38));
 FUNC_2(VAR_15, VAR_40, VAR_19, VAR_3);
 if (VAR_33) {
  if (VAR_39) {
   FUNC_2(VAR_15, VAR_40, VAR_33, 1);
   FUNC_2(VAR_15, VAR_40, VAR_29, VAR_35);
  } else {
   VAR_41 = -VAR_1;
   goto ex;
  }
 }

 if (FUNC_1(VAR_32, VAR_18) > 1)
  FUNC_2(VAR_15, VAR_40, VAR_34, VAR_34);

 VAR_42 = FUNC_0(VAR_15, VAR_40, VAR_11);
 FUNC_2(VAR_11, VAR_42, VAR_8, VAR_36->field_select);
 FUNC_2(VAR_11, VAR_42, VAR_26, VAR_36->sm_virt_aware);
 FUNC_2(VAR_11, VAR_42, VAR_10, VAR_36->has_smi);
 FUNC_2(VAR_11, VAR_42, VAR_9, VAR_36->has_raw);
 FUNC_2(VAR_11, VAR_42, VAR_31, VAR_36->policy);
 FUNC_2(VAR_11, VAR_42, VAR_22, VAR_36->phys_state);
 FUNC_2(VAR_11, VAR_42, VAR_30, VAR_36->vport_state);
 FUNC_3(VAR_11, VAR_42, VAR_21, VAR_36->port_guid);
 FUNC_3(VAR_11, VAR_42, VAR_17, VAR_36->node_guid);
 FUNC_2(VAR_11, VAR_42, VAR_4, VAR_36->cap_mask1);
 FUNC_2(VAR_11, VAR_42, VAR_5, VAR_36->cap_mask1_perm);
 FUNC_2(VAR_11, VAR_42, VAR_6, VAR_36->cap_mask2);
 FUNC_2(VAR_11, VAR_42, VAR_7, VAR_36->cap_mask2_perm);
 FUNC_2(VAR_11, VAR_42, VAR_13, VAR_36->lid);
 FUNC_2(VAR_11, VAR_42, VAR_12, VAR_36->init_type_reply);
 FUNC_2(VAR_11, VAR_42, VAR_14, VAR_36->lmc);
 FUNC_2(VAR_11, VAR_42, VAR_27, VAR_36->subnet_timeout);
 FUNC_2(VAR_11, VAR_42, VAR_24, VAR_36->sm_lid);
 FUNC_2(VAR_11, VAR_42, VAR_25, VAR_36->sm_sl);
 FUNC_2(VAR_11, VAR_42, VAR_23, VAR_36->qkey_violation_counter);
 FUNC_2(VAR_11, VAR_42, VAR_20, VAR_36->pkey_violation_counter);
 VAR_41 = FUNC_8(VAR_32, VAR_40, VAR_37, VAR_38, sizeof(VAR_38));
ex:
 FUNC_5(VAR_40);
 return VAR_41;
}
