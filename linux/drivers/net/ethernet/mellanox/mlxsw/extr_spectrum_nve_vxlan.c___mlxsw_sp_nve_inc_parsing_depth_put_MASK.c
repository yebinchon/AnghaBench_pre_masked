
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* nve; } ;
typedef int __be16 ;
struct TYPE_2__ {int inc_parsing_depth_refs; } ;


 int FUNC_0 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_0,
         __be16 VAR_1)
{
 VAR_0->nve->inc_parsing_depth_refs--;
 FUNC_0(VAR_0, VAR_1);
}
