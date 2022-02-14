
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_spec {scalar_t__ ip_dscp; scalar_t__ ip_ecn; scalar_t__ tcp_flags; scalar_t__ frag; scalar_t__ ip_protocol; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_spec *VAR_0)
{
 return (VAR_0->ip_protocol || VAR_0->frag || VAR_0->tcp_flags ||
  VAR_0->ip_ecn || VAR_0->ip_dscp);
}
