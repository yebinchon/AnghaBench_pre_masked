
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_cmd_caps {int flex_protocols; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct mlx5dr_cmd_caps *VAR_1)
{
 return VAR_1->flex_protocols & VAR_0;
}
