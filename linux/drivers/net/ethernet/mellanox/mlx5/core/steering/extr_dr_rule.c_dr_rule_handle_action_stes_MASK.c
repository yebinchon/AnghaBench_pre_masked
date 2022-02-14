
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5dr_ste_send_info {int dummy; } ;
struct mlx5dr_ste {int htbl; int miss_list_node; } ;
struct mlx5dr_rule_rx_tx {struct mlx5dr_matcher_rx_tx* nic_matcher; } ;
struct mlx5dr_rule {struct mlx5dr_matcher* matcher; } ;
struct mlx5dr_matcher_rx_tx {int num_of_builders; } ;
struct mlx5dr_matcher {TYPE_1__* tbl; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int dmn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5dr_rule_rx_tx*,struct mlx5dr_ste*) ;
 struct mlx5dr_ste* FUNC_1 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,int*) ;
 int FUNC_2 (struct mlx5dr_ste_send_info*) ;
 struct mlx5dr_ste_send_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct mlx5dr_ste*,int,int ,int*,struct mlx5dr_ste_send_info*,struct list_head*,int) ;
 int FUNC_7 (struct mlx5dr_ste*) ;
 int FUNC_8 (struct mlx5dr_ste*) ;
 int FUNC_9 (struct mlx5dr_ste*,struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*) ;
 int FUNC_10 (int*,int ) ;

__attribute__((used)) static int FUNC_11(struct mlx5dr_rule *VAR_4,
          struct mlx5dr_rule_rx_tx *VAR_5,
          struct list_head *VAR_6,
          struct mlx5dr_ste *VAR_7,
          u8 *VAR_8,
          u32 VAR_9)
{
 struct mlx5dr_matcher_rx_tx *VAR_10 = VAR_5->nic_matcher;
 struct mlx5dr_ste_send_info *VAR_11[VAR_0];
 u8 VAR_12 = VAR_10->num_of_builders;
 struct mlx5dr_matcher *VAR_13 = VAR_4->matcher;
 u8 *VAR_14, *VAR_15;
 struct mlx5dr_ste *VAR_16;
 int VAR_17, VAR_18, VAR_19;






 if (VAR_12 == VAR_9)
  return 0;

 for (VAR_17 = VAR_12, VAR_18 = 0; VAR_17 < VAR_9; VAR_17++, VAR_18++) {
  VAR_14 = VAR_8 + VAR_17 * VAR_1;
  VAR_15 = (VAR_17 == 0) ? VAR_14 : VAR_8 + ((VAR_17 - 1) * VAR_1);
  VAR_16 = FUNC_1(VAR_13,
          VAR_10,
          VAR_14);
  if (!VAR_16)
   return -VAR_2;

  FUNC_7(VAR_16);


  FUNC_4(&VAR_16->miss_list_node,
         FUNC_8(VAR_16));

  VAR_11[VAR_18] = FUNC_3(sizeof(*VAR_11[VAR_18]),
       VAR_3);
  if (!VAR_11[VAR_18])
   goto err_exit;


  FUNC_10(VAR_15, VAR_16->htbl);
  VAR_19 = FUNC_0(VAR_5, VAR_16);
  if (VAR_19) {
   FUNC_5(VAR_13->tbl->dmn, "Failed adding rule member\n");
   goto free_ste_info;
  }
  FUNC_6(VAR_16, VAR_1, 0,
         VAR_14,
         VAR_11[VAR_18],
         VAR_6, 0);
 }

 return 0;

free_ste_info:
 FUNC_2(VAR_11[VAR_18]);
err_exit:
 FUNC_9(VAR_16, VAR_13, VAR_10);
 return -VAR_2;
}
