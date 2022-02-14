
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* nve; } ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ inc_parsing_depth_refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_2,
        __be16 VAR_3)
{
 int VAR_4 = VAR_2->nve->inc_parsing_depth_refs ?
    VAR_1 :
    VAR_0;

 return FUNC_0(VAR_2, VAR_4, VAR_3);
}
