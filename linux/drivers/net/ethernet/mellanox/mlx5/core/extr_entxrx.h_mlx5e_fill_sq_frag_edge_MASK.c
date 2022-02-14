
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {struct mlx5e_tx_wqe_info* wqe_info; } ;
struct mlx5e_txqsq {TYPE_1__* stats; int pc; int sqn; TYPE_2__ db; } ;
struct mlx5e_tx_wqe_info {int num_wqebbs; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct TYPE_3__ {int nop; } ;


 int FUNC_0 (struct mlx5e_tx_wqe_info*,int ,int) ;
 int FUNC_1 (struct mlx5_wq_cyc*,int ,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct mlx5e_txqsq *VAR_0, struct mlx5_wq_cyc *VAR_1,
   u16 VAR_2, u16 VAR_3)
{
 struct mlx5e_tx_wqe_info *VAR_4, *VAR_5 = &VAR_0->db.wqe_info[VAR_2];

 VAR_4 = VAR_5 + VAR_3;


 for (; VAR_5 < VAR_4; VAR_5++) {
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->num_wqebbs = 1;
  FUNC_1(VAR_1, VAR_0->sqn, &VAR_0->pc);
 }
 VAR_0->stats->nop += VAR_3;
}
