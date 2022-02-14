
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_flow_table {size_t num_groups; int ** g; int t; } ;
struct mlx5e_l2_table {struct mlx5e_flow_table ft; } ;
struct TYPE_2__ {int dmac_47_16; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (int ,int*,int ) ;
 int VAR_6 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int VAR_9 ;
 int ** FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int*) ;
 int* FUNC_10 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_11 (int ,int*) ;
 int FUNC_12 (struct mlx5e_flow_table*) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_13(struct mlx5e_l2_table *VAR_14)
{
 int VAR_15 = FUNC_3(VAR_7);
 struct mlx5e_flow_table *VAR_16 = &VAR_14->ft;
 int VAR_17 = 0;
 u8 *VAR_18;
 u32 *VAR_19;
 int VAR_20;
 u8 *VAR_21;

 VAR_16->g = FUNC_7(VAR_5, sizeof(*VAR_16->g), VAR_1);
 if (!VAR_16->g)
  return -VAR_0;
 VAR_19 = FUNC_10(VAR_15, VAR_1);
 if (!VAR_19) {
  FUNC_8(VAR_16->g);
  return -VAR_0;
 }

 VAR_21 = FUNC_1(VAR_7, VAR_19, VAR_10);
 VAR_18 = FUNC_1(VAR_9, VAR_21,
          VAR_12.dmac_47_16);

 FUNC_2(VAR_19, VAR_13, VAR_17);
 VAR_17 += VAR_2;
 FUNC_2(VAR_19, VAR_8, VAR_17 - 1);
 VAR_16->g[VAR_16->num_groups] = FUNC_11(VAR_16->t, VAR_19);
 if (FUNC_0(VAR_16->g[VAR_16->num_groups]))
  goto err_destroy_groups;
 VAR_16->num_groups++;


 FUNC_5(VAR_18);
 FUNC_2(VAR_19, VAR_11, VAR_6);
 FUNC_2(VAR_19, VAR_13, VAR_17);
 VAR_17 += VAR_3;
 FUNC_2(VAR_19, VAR_8, VAR_17 - 1);
 VAR_16->g[VAR_16->num_groups] = FUNC_11(VAR_16->t, VAR_19);
 if (FUNC_0(VAR_16->g[VAR_16->num_groups]))
  goto err_destroy_groups;
 VAR_16->num_groups++;


 FUNC_6(VAR_18);
 VAR_18[0] = 0x01;
 FUNC_2(VAR_19, VAR_13, VAR_17);
 VAR_17 += VAR_4;
 FUNC_2(VAR_19, VAR_8, VAR_17 - 1);
 VAR_16->g[VAR_16->num_groups] = FUNC_11(VAR_16->t, VAR_19);
 if (FUNC_0(VAR_16->g[VAR_16->num_groups]))
  goto err_destroy_groups;
 VAR_16->num_groups++;

 FUNC_9(VAR_19);
 return 0;

err_destroy_groups:
 VAR_20 = FUNC_4(VAR_16->g[VAR_16->num_groups]);
 VAR_16->g[VAR_16->num_groups] = ((void*)0);
 FUNC_12(VAR_16);
 FUNC_9(VAR_19);

 return VAR_20;
}
