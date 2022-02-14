
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct mlx4_dev {scalar_t__* regid_promisc_array; scalar_t__* regid_allmulti_array; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;




 int FUNC_0 (struct mlx4_dev*,scalar_t__) ;

int FUNC_1(struct mlx4_dev *VAR_0, u8 VAR_1,
       enum mlx4_net_trans_promisc_mode VAR_2)
{
 int VAR_3;
 u64 *VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = &VAR_0->regid_promisc_array[VAR_1];
  break;
 case 128:
  VAR_4 = &VAR_0->regid_allmulti_array[VAR_1];
  break;
 default:
  return -1;
 }

 if (*VAR_4 == 0)
  return -1;

 VAR_3 = FUNC_0(VAR_0, *VAR_4);
 if (VAR_3 == 0)
  *VAR_4 = 0;

 return VAR_3;
}
