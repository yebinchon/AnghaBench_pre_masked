
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct mlx5e_rx_wqe_cyc {int dummy; } ;
struct TYPE_4__ {int log_num_frags; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct TYPE_3__ {TYPE_2__ info; struct mlx5_wq_cyc wq; } ;
struct mlx5e_rq {TYPE_1__ wqe; scalar_t__ umem; } ;


 int VAR_0 ;
 struct mlx5e_rx_wqe_cyc* FUNC_0 (struct mlx5_wq_cyc*,scalar_t__) ;
 int FUNC_1 (struct mlx5e_rq*,struct mlx5e_rx_wqe_cyc*,scalar_t__) ;
 int FUNC_2 (struct mlx5e_rq*,scalar_t__) ;
 int FUNC_3 (struct mlx5e_rq*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx5e_rq *VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct mlx5_wq_cyc *VAR_4 = &VAR_1->wqe.wq;
 int VAR_5;
 int VAR_6;

 if (VAR_1->umem) {
  int VAR_7 = VAR_3 << VAR_1->wqe.info.log_num_frags;

  if (FUNC_4(!FUNC_3(VAR_1, VAR_7)))
   return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct mlx5e_rx_wqe_cyc *VAR_8 = FUNC_0(VAR_4, VAR_2 + VAR_6);

  VAR_5 = FUNC_1(VAR_1, VAR_8, VAR_2 + VAR_6);
  if (FUNC_4(VAR_5))
   goto free_wqes;
 }

 return 0;

free_wqes:
 while (--VAR_6 >= 0)
  FUNC_2(VAR_1, VAR_2 + VAR_6);

 return VAR_5;
}
