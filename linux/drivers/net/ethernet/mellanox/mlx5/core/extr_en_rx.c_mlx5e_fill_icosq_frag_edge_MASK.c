
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct mlx5e_sq_wqe_info {int opcode; } ;
struct TYPE_2__ {struct mlx5e_sq_wqe_info* ico_wqe; } ;
struct mlx5e_icosq {int pc; int sqn; TYPE_1__ db; } ;
struct mlx5_wq_cyc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_wq_cyc*,int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_icosq *VAR_1,
           struct mlx5_wq_cyc *VAR_2,
           u16 VAR_3, u16 VAR_4)
{
 struct mlx5e_sq_wqe_info *VAR_5, *VAR_6 = &VAR_1->db.ico_wqe[VAR_3];

 VAR_5 = VAR_6 + VAR_4;


 for (; VAR_6 < VAR_5; VAR_6++) {
  VAR_6->opcode = VAR_0;
  FUNC_0(VAR_2, VAR_1->sqn, &VAR_1->pc);
 }
}
