
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct mlx5_wq_ll {int head; } ;
struct TYPE_2__ {struct mlx5_wq_ll wq; } ;
struct mlx5e_rq {TYPE_1__ mpwqe; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mlx5_wq_ll*,int ) ;
 int FUNC_2 (struct mlx5_wq_ll*,int ) ;
 int FUNC_3 (struct mlx5_wq_ll*) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_rq *VAR_0, u8 VAR_1)
{
 struct mlx5_wq_ll *VAR_2 = &VAR_0->mpwqe.wq;

 do {
  u16 VAR_3 = FUNC_1(VAR_2, VAR_2->head);

  FUNC_2(VAR_2, VAR_3);
 } while (--VAR_1);


 FUNC_0();

 FUNC_3(VAR_2);
}
