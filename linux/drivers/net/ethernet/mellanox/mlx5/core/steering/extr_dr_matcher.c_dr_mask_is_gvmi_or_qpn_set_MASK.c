
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_misc {scalar_t__ source_port; scalar_t__ source_sqn; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_misc *VAR_0)
{
 return (VAR_0->source_sqn || VAR_0->source_port);
}
