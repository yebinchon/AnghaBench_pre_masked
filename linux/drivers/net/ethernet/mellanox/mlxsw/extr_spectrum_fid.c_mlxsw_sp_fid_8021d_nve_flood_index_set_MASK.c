
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_fid_family {int mlxsw_sp; } ;
struct mlxsw_sp_fid {int vni_valid; int vni; int fid_index; struct mlxsw_sp_fid_family* fid_family; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_fid *VAR_0,
        u32 VAR_1)
{
 struct mlxsw_sp_fid_family *VAR_2 = VAR_0->fid_family;

 return FUNC_0(VAR_2->mlxsw_sp, VAR_0->fid_index,
       VAR_0->vni, VAR_0->vni_valid, VAR_1,
       1);
}
