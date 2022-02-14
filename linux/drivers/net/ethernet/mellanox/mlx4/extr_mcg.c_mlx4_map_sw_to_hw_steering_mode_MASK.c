
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,char*,int) ;

int FUNC_1(struct mlx4_dev *VAR_3,
        enum mlx4_net_trans_promisc_mode VAR_4)
{
 if (VAR_4 >= VAR_1) {
  FUNC_0(VAR_3, "Invalid flow type. type = %d\n", VAR_4);
  return -VAR_0;
 }
 return VAR_2[VAR_4];
}
