
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct mlx5e_rq_stats {int bytes; int packets; } ;
struct mlx5e_rq {struct mlx5e_rq_stats* stats; } ;
struct mlx5_cqe64 {int dummy; } ;


 int FUNC_0 (struct mlx5_cqe64*,scalar_t__,struct mlx5e_rq*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct mlx5e_rq *VAR_0,
      struct mlx5_cqe64 *VAR_1,
      u32 VAR_2,
      struct sk_buff *VAR_3)
{
 struct mlx5e_rq_stats *VAR_4 = VAR_0->stats;

 VAR_4->packets++;
 VAR_4->bytes += VAR_2;
 FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);
}
