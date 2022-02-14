
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* nve; } ;
typedef int __be16 ;
struct TYPE_2__ {int inc_parsing_depth_refs; } ;


 int FUNC_0 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
         __be16 VAR_1)
{
 int VAR_2;

 VAR_0->nve->inc_parsing_depth_refs++;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  goto err_nve_parsing_set;
 return 0;

err_nve_parsing_set:
 VAR_0->nve->inc_parsing_depth_refs--;
 return VAR_2;
}
