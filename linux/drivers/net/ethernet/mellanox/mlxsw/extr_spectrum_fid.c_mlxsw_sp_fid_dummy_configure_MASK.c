
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid {int fid_index; TYPE_1__* fid_family; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {struct mlxsw_sp* mlxsw_sp; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_fid *VAR_0)
{
 struct mlxsw_sp *VAR_1 = VAR_0->fid_family->mlxsw_sp;

 return FUNC_0(VAR_1, VAR_0->fid_index, 0, 1);
}
