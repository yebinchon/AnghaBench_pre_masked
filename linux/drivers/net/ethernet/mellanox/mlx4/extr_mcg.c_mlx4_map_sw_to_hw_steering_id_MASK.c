
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
typedef enum mlx4_net_trans_rule_id { ____Placeholder_mlx4_net_trans_rule_id } mlx4_net_trans_rule_id ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,char*,int) ;

int FUNC_1(struct mlx4_dev *VAR_3,
      enum mlx4_net_trans_rule_id VAR_4)
{
 if (VAR_4 >= VAR_1) {
  FUNC_0(VAR_3, "Invalid network rule id. id = %d\n", VAR_4);
  return -VAR_0;
 }
 return VAR_2[VAR_4];
}
