
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_spec {scalar_t__ udp_dport; scalar_t__ udp_sport; scalar_t__ tcp_dport; scalar_t__ tcp_sport; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_spec *VAR_0)
{
 return (VAR_0->tcp_sport || VAR_0->tcp_dport ||
  VAR_0->udp_sport || VAR_0->udp_dport);
}
