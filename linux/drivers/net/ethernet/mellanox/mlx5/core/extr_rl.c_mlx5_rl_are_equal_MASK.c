
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_rate_limit {scalar_t__ rate; scalar_t__ max_burst_sz; scalar_t__ typical_pkt_sz; } ;



bool FUNC_0(struct mlx5_rate_limit *VAR_0,
         struct mlx5_rate_limit *VAR_1)
{
 return ((VAR_0->rate == VAR_1->rate) &&
  (VAR_0->max_burst_sz == VAR_1->max_burst_sz) &&
  (VAR_0->typical_pkt_sz == VAR_1->typical_pkt_sz));
}
