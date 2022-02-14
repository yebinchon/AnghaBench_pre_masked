
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flex_protocols; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;
struct mlx5dr_domain {TYPE_2__ info; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct mlx5dr_domain *VAR_1)
{
 return VAR_1->info.caps.flex_protocols &
        VAR_0;
}
