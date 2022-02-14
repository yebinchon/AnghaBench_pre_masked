
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_spec {scalar_t__ src_ip_31_0; scalar_t__ dst_ip_31_0; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_spec *VAR_0)
{
 return (VAR_0->dst_ip_31_0 || VAR_0->src_ip_31_0);
}
