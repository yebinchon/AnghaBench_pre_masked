
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdpsq {scalar_t__ pc; scalar_t__ cc; int umem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct mlx5e_xdpsq *VAR_0)
{
 if (!FUNC_2(VAR_0->umem))
  return;

 if (VAR_0->pc != VAR_0->cc)
  FUNC_0(VAR_0->umem);
 else
  FUNC_1(VAR_0->umem);
}
