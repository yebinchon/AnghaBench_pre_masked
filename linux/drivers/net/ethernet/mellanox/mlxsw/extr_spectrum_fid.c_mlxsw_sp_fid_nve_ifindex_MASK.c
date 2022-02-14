
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fid {int nve_ifindex; int vni_valid; } ;


 int VAR_0 ;

int FUNC_0(const struct mlxsw_sp_fid *VAR_1, int *VAR_2)
{
 if (!VAR_1->vni_valid)
  return -VAR_0;

 *VAR_2 = VAR_1->nve_ifindex;

 return 0;
}
