
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlx5e_xdpsq_stats {int mpwqe; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_xdp_mpwqe {scalar_t__ pkt_count; int ds_count; TYPE_1__* wqe; } ;
struct mlx5e_xdpsq {int pc; struct mlx5_wq_cyc wq; struct mlx5e_xdpsq_stats* stats; struct mlx5e_xdp_mpwqe mpwqe; } ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_wq_cyc*,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_wq_cyc*,scalar_t__) ;
 int FUNC_2 (struct mlx5e_xdpsq*,struct mlx5_wq_cyc*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct mlx5e_xdpsq*) ;
 TYPE_1__* FUNC_4 (struct mlx5e_xdpsq*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mlx5e_xdpsq *VAR_2)
{
 struct mlx5e_xdp_mpwqe *VAR_3 = &VAR_2->mpwqe;
 struct mlx5e_xdpsq_stats *VAR_4 = VAR_2->stats;
 struct mlx5_wq_cyc *VAR_5 = &VAR_2->wq;
 u16 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_2->pc);
 VAR_7 = FUNC_1(VAR_5, VAR_6);

 if (FUNC_6(VAR_7 < VAR_1))
  FUNC_2(VAR_2, VAR_5, VAR_6, VAR_7);

 VAR_3->wqe = FUNC_4(VAR_2, &VAR_6);

 FUNC_5(VAR_3->wqe->data);
 VAR_3->ds_count = VAR_0;
 VAR_3->pkt_count = 0;

 FUNC_3(VAR_2);

 VAR_4->mpwqe++;
}
