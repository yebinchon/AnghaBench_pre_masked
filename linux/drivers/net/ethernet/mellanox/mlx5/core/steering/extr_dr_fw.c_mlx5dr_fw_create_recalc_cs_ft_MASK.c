
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef void* u32 ;
struct mlx5dr_fw_recalc_cs_ft {void* group_id; void* table_id; scalar_t__ rx_icm_addr; void* modify_hdr_id; } ;
struct TYPE_3__ {scalar_t__ max_ft_level; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;
struct mlx5dr_domain {int mdev; TYPE_2__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlx5dr_fw_recalc_cs_ft*) ;
 struct mlx5dr_fw_recalc_cs_ft* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,scalar_t__*,void**) ;
 int FUNC_4 (int ,int ,void*,void**) ;
 int FUNC_5 (int ,int ,int ,int ,scalar_t__,int,int,scalar_t__*,void**) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ,int ,void*,void*) ;
 int FUNC_8 (int ,void*,int ) ;
 int FUNC_9 (int ,int ,void*,void*,void*,void*) ;
 int FUNC_10 (struct mlx5dr_domain*,char*,int) ;
 int VAR_6 ;

struct mlx5dr_fw_recalc_cs_ft *
FUNC_11(struct mlx5dr_domain *VAR_7, u32 VAR_8)
{
 struct mlx5dr_fw_recalc_cs_ft *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u64 VAR_13, VAR_14;
 int VAR_15;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_15 = FUNC_5(VAR_7->mdev, VAR_3,
        0, 0, VAR_7->info.caps.max_ft_level - 1,
        0, 1, &VAR_13, &VAR_10);
 if (VAR_15) {
  FUNC_10(VAR_7, "Failed creating TTL W/A FW flow table %d\n", VAR_15);
  goto free_ttl_tbl;
 }

 VAR_15 = FUNC_4(VAR_7->mdev,
       VAR_3,
       VAR_10, &VAR_11);
 if (VAR_15) {
  FUNC_10(VAR_7, "Failed creating TTL W/A FW flow group %d\n", VAR_15);
  goto destroy_flow_table;
 }


 VAR_14 = 0;
 FUNC_0(VAR_6, &VAR_14, VAR_4, VAR_2);
 FUNC_0(VAR_6, &VAR_14, VAR_5, VAR_1);

 VAR_15 = FUNC_3(VAR_7->mdev, VAR_3, 1,
          &VAR_14,
          &VAR_12);
 if (VAR_15) {
  FUNC_10(VAR_7, "Failed modify header TTL %d\n", VAR_15);
  goto destroy_flow_group;
 }

 VAR_15 = FUNC_9(VAR_7->mdev,
        VAR_3,
        VAR_10, VAR_11, VAR_12,
        VAR_8);
 if (VAR_15) {
  FUNC_10(VAR_7, "Failed setting TTL W/A flow table entry %d\n", VAR_15);
  goto dealloc_modify_header;
 }

 VAR_9->modify_hdr_id = VAR_12;
 VAR_9->rx_icm_addr = VAR_13;
 VAR_9->table_id = VAR_10;
 VAR_9->group_id = VAR_11;

 return VAR_9;

dealloc_modify_header:
 FUNC_6(VAR_7->mdev, VAR_12);
destroy_flow_group:
 FUNC_7(VAR_7->mdev,
          VAR_3,
          VAR_10, VAR_11);
destroy_flow_table:
 FUNC_8(VAR_7->mdev, VAR_10, VAR_3);
free_ttl_tbl:
 FUNC_1(VAR_9);
 return ((void*)0);
}
