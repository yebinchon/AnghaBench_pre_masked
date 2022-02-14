
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_xdpsq_stats {int xmit; int err; } ;
struct TYPE_2__ {int xdpi_fifo; } ;
struct mlx5e_xdp_mpwqe {scalar_t__ ds_count; } ;
struct mlx5e_xdpsq {scalar_t__ hw_mtu; TYPE_1__ db; struct mlx5e_xdpsq_stats* stats; struct mlx5e_xdp_mpwqe mpwqe; } ;
struct mlx5e_xdp_xmit_data {scalar_t__ len; } ;
struct mlx5e_xdp_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx5e_xdpsq*,struct mlx5e_xdp_xmit_data*,struct mlx5e_xdpsq_stats*) ;
 int FUNC_1 (struct mlx5e_xdpsq*) ;
 int FUNC_2 (struct mlx5e_xdpsq*) ;
 scalar_t__ FUNC_3 (struct mlx5e_xdp_mpwqe*) ;
 int FUNC_4 (int *,struct mlx5e_xdp_info*) ;
 int FUNC_5 (struct mlx5e_xdpsq*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct mlx5e_xdpsq *VAR_2,
           struct mlx5e_xdp_xmit_data *VAR_3,
           struct mlx5e_xdp_info *VAR_4,
           int VAR_5)
{
 struct mlx5e_xdp_mpwqe *VAR_6 = &VAR_2->mpwqe;
 struct mlx5e_xdpsq_stats *VAR_7 = VAR_2->stats;

 if (FUNC_6(VAR_3->len > VAR_2->hw_mtu)) {
  VAR_7->err++;
  return 0;
 }

 if (!VAR_5)
  VAR_5 = FUNC_5(VAR_2);
 if (FUNC_6(VAR_5 < 0))
  return 0;

 if (VAR_5 == VAR_0) {




  FUNC_2(VAR_2);
 }

 FUNC_0(VAR_2, VAR_3, VAR_7);

 if (FUNC_6(FUNC_3(VAR_6) ||
       VAR_6->ds_count == VAR_1))
  FUNC_1(VAR_2);

 FUNC_4(&VAR_2->db.xdpi_fifo, VAR_4);
 VAR_7->xmit++;
 return 1;
}
