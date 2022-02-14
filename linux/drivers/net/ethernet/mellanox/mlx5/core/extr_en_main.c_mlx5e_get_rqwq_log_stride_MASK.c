
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_rx_wqe_ll {int dummy; } ;
struct mlx5e_rx_wqe_cyc {int dummy; } ;
struct mlx5_wqe_data_seg {int dummy; } ;



 int FUNC_0 (int) ;

__attribute__((used)) static inline u8 FUNC_1(u8 VAR_0, int VAR_1)
{
 int VAR_2 = sizeof(struct mlx5_wqe_data_seg) * VAR_1;

 switch (VAR_0) {
 case 128:
  VAR_2 += sizeof(struct mlx5e_rx_wqe_ll);
  break;
 default:
  VAR_2 += sizeof(struct mlx5e_rx_wqe_cyc);
 }

 return FUNC_0(VAR_2);
}
