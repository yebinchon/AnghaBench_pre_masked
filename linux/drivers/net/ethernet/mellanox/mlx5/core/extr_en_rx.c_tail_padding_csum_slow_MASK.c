
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; } ;
struct mlx5e_rq_stats {int csum_complete_tail_slow; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,int,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_0, int VAR_1, int VAR_2,
         struct mlx5e_rq_stats *VAR_3)
{
 VAR_3->csum_complete_tail_slow++;
 VAR_0->csum = FUNC_0(VAR_0->csum,
       FUNC_1(VAR_0, VAR_1, VAR_2, 0),
       VAR_1);
}
