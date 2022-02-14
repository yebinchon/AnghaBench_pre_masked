
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_rq {TYPE_1__* umem; } ;
struct TYPE_2__ {int chunk_mask; } ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_rq *VAR_0, u64 VAR_1)
{
 FUNC_0(VAR_0->umem, VAR_1 & VAR_0->umem->chunk_mask);
}
