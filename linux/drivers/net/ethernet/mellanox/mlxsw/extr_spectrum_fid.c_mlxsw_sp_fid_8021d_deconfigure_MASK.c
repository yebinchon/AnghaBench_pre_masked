
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid {int fid_index; TYPE_1__* fid_family; scalar_t__ vni_valid; } ;
struct TYPE_2__ {int mlxsw_sp; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,struct mlxsw_sp_fid*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_fid *VAR_0)
{
 if (VAR_0->vni_valid)
  FUNC_1(VAR_0->fid_family->mlxsw_sp, VAR_0);
 FUNC_0(VAR_0->fid_family->mlxsw_sp, VAR_0->fid_index, 0, 0);
}
