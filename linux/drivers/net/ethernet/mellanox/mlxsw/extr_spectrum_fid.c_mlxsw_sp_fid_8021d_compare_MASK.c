
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid {int dummy; } ;
struct TYPE_2__ {int br_ifindex; } ;


 TYPE_1__* FUNC_0 (struct mlxsw_sp_fid const*) ;

__attribute__((used)) static bool
FUNC_1(const struct mlxsw_sp_fid *VAR_0, const void *VAR_1)
{
 int VAR_2 = *(int *) VAR_1;

 return FUNC_0(VAR_0)->br_ifindex == VAR_2;
}
