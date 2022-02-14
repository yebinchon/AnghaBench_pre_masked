
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_flow_table {size_t num_groups; int ** g; int t; } ;
struct TYPE_2__ {int svlan_tag; int cvlan_tag; int first_vid; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mlx5e_flow_table*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_8(struct mlx5e_flow_table *VAR_12, u32 *VAR_13,
         int VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 u8 *VAR_17 = FUNC_1(VAR_5, VAR_13, VAR_8);

 FUNC_5(VAR_13, 0, VAR_14);
 FUNC_2(VAR_13, VAR_9, VAR_4);
 FUNC_3(VAR_7, VAR_17, VAR_10.cvlan_tag);
 FUNC_3(VAR_7, VAR_17, VAR_10.first_vid);
 FUNC_2(VAR_13, VAR_11, VAR_16);
 VAR_16 += VAR_0;
 FUNC_2(VAR_13, VAR_6, VAR_16 - 1);
 VAR_12->g[VAR_12->num_groups] = FUNC_6(VAR_12->t, VAR_13);
 if (FUNC_0(VAR_12->g[VAR_12->num_groups]))
  goto err_destroy_groups;
 VAR_12->num_groups++;

 FUNC_5(VAR_13, 0, VAR_14);
 FUNC_2(VAR_13, VAR_9, VAR_4);
 FUNC_3(VAR_7, VAR_17, VAR_10.svlan_tag);
 FUNC_3(VAR_7, VAR_17, VAR_10.first_vid);
 FUNC_2(VAR_13, VAR_11, VAR_16);
 VAR_16 += VAR_1;
 FUNC_2(VAR_13, VAR_6, VAR_16 - 1);
 VAR_12->g[VAR_12->num_groups] = FUNC_6(VAR_12->t, VAR_13);
 if (FUNC_0(VAR_12->g[VAR_12->num_groups]))
  goto err_destroy_groups;
 VAR_12->num_groups++;

 FUNC_5(VAR_13, 0, VAR_14);
 FUNC_2(VAR_13, VAR_9, VAR_4);
 FUNC_3(VAR_7, VAR_17, VAR_10.cvlan_tag);
 FUNC_2(VAR_13, VAR_11, VAR_16);
 VAR_16 += VAR_2;
 FUNC_2(VAR_13, VAR_6, VAR_16 - 1);
 VAR_12->g[VAR_12->num_groups] = FUNC_6(VAR_12->t, VAR_13);
 if (FUNC_0(VAR_12->g[VAR_12->num_groups]))
  goto err_destroy_groups;
 VAR_12->num_groups++;

 FUNC_5(VAR_13, 0, VAR_14);
 FUNC_2(VAR_13, VAR_9, VAR_4);
 FUNC_3(VAR_7, VAR_17, VAR_10.svlan_tag);
 FUNC_2(VAR_13, VAR_11, VAR_16);
 VAR_16 += VAR_3;
 FUNC_2(VAR_13, VAR_6, VAR_16 - 1);
 VAR_12->g[VAR_12->num_groups] = FUNC_6(VAR_12->t, VAR_13);
 if (FUNC_0(VAR_12->g[VAR_12->num_groups]))
  goto err_destroy_groups;
 VAR_12->num_groups++;

 return 0;

err_destroy_groups:
 VAR_15 = FUNC_4(VAR_12->g[VAR_12->num_groups]);
 VAR_12->g[VAR_12->num_groups] = ((void*)0);
 FUNC_7(VAR_12);

 return VAR_15;
}
