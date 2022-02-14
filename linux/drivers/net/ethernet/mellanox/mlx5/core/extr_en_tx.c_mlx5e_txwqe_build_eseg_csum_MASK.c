
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct mlx5e_txqsq {TYPE_1__* stats; } ;
struct mlx5_wqe_eth_seg {int cs_flags; } ;
struct TYPE_2__ {int csum_none; int csum_partial; int csum_partial_inner; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(struct mlx5e_txqsq *VAR_5, struct sk_buff *VAR_6, struct mlx5_wqe_eth_seg *VAR_7)
{
 if (FUNC_0(VAR_6->ip_summed == VAR_0)) {
  VAR_7->cs_flags = VAR_1;
  if (VAR_6->encapsulation) {
   VAR_7->cs_flags |= VAR_2 |
       VAR_4;
   VAR_5->stats->csum_partial_inner++;
  } else {
   VAR_7->cs_flags |= VAR_3;
   VAR_5->stats->csum_partial++;
  }
 } else
  VAR_5->stats->csum_none++;
}
