
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5e_xdp_mpwqe {int inline_on; } ;
struct mlx5e_xdpsq {scalar_t__ xdpi_fifo_pc; scalar_t__ xdpi_fifo_cc; struct mlx5e_xdp_mpwqe mpwqe; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct mlx5e_xdpsq *VAR_2)
{
 u16 VAR_3 = VAR_2->xdpi_fifo_pc - VAR_2->xdpi_fifo_cc;
 struct mlx5e_xdp_mpwqe *VAR_4 = &VAR_2->mpwqe;




 if (VAR_4->inline_on) {
  if (VAR_3 <= 10)
   VAR_4->inline_on = 0;
  return;
 }


 if (VAR_3 >= 128)
  VAR_4->inline_on = 1;
}
