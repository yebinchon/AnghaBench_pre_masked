
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rss_hash_result; scalar_t__ rss_hash_type; } ;
struct mlx5e_cq_decomp {TYPE_1__ title; } ;
struct mlx5e_rq {struct mlx5e_cq_decomp cqd; } ;
struct mlx5_cqwq {int dummy; } ;


 int FUNC_0 (struct mlx5e_rq*,struct mlx5_cqwq*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_rq *VAR_0,
      struct mlx5_cqwq *VAR_1,
      u32 VAR_2)
{
 struct mlx5e_cq_decomp *VAR_3 = &VAR_0->cqd;

 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3->title.rss_hash_type = 0;
 VAR_3->title.rss_hash_result = 0;
}
