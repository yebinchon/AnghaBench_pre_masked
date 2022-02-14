
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct mlx5e_tx_wqe {int ctrl; } ;
struct TYPE_4__ {TYPE_1__* ico_wqe; } ;
struct mlx5_wq_cyc {int dummy; } ;
struct mlx5e_icosq {int uar_map; int pc; int sqn; TYPE_2__ db; struct mlx5_wq_cyc wq; } ;
struct TYPE_3__ {int opcode; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct mlx5_wq_cyc*,int ) ;
 int FUNC_1 (struct mlx5_wq_cyc*,int ,int ,int *) ;
 struct mlx5e_tx_wqe* FUNC_2 (struct mlx5_wq_cyc*,int ,int *) ;

void FUNC_3(struct mlx5e_icosq *VAR_1)
{
 struct mlx5_wq_cyc *VAR_2 = &VAR_1->wq;
 struct mlx5e_tx_wqe *VAR_3;
 u16 VAR_4 = FUNC_0(VAR_2, VAR_1->pc);

 VAR_1->db.ico_wqe[VAR_4].opcode = VAR_0;
 VAR_3 = FUNC_2(VAR_2, VAR_1->sqn, &VAR_1->pc);
 FUNC_1(VAR_2, VAR_1->pc, VAR_1->uar_map, &VAR_3->ctrl);
}
