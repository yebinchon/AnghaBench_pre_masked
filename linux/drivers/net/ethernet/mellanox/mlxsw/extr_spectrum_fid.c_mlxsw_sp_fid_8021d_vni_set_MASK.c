
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fid_family {int mlxsw_sp; } ;
struct mlxsw_sp_fid {int nve_flood_index_valid; int nve_flood_index; int fid_index; struct mlxsw_sp_fid_family* fid_family; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_fid *VAR_0, __be32 VAR_1)
{
 struct mlxsw_sp_fid_family *VAR_2 = VAR_0->fid_family;

 return FUNC_0(VAR_2->mlxsw_sp, VAR_0->fid_index, VAR_1,
       1, VAR_0->nve_flood_index,
       VAR_0->nve_flood_index_valid);
}
