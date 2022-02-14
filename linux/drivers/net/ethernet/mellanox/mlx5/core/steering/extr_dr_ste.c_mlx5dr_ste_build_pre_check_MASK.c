
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int source_port; } ;
struct mlx5dr_match_param {TYPE_1__ misc; } ;
struct mlx5dr_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5dr_domain*,char*) ;

int FUNC_1(struct mlx5dr_domain *VAR_2,
          u8 VAR_3,
          struct mlx5dr_match_param *VAR_4,
          struct mlx5dr_match_param *VAR_5)
{
 if (!VAR_5 && (VAR_3 & VAR_0)) {
  if (VAR_4->misc.source_port && VAR_4->misc.source_port != 0xffff) {
   FUNC_0(VAR_2, "Partial mask source_port is not supported\n");
   return -VAR_1;
  }
 }

 return 0;
}
