
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_fid_family {scalar_t__ start_index; scalar_t__ end_index; } ;
struct mlxsw_sp_fid {struct mlxsw_sp_fid_family* fid_family; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlxsw_sp_fid *VAR_1,
       const void *VAR_2, u16 *VAR_3)
{
 struct mlxsw_sp_fid_family *VAR_4 = VAR_1->fid_family;
 u16 VAR_5 = *(u16 *) VAR_2;


 if (VAR_5 < VAR_4->start_index || VAR_5 > VAR_4->end_index)
  return -VAR_0;
 *VAR_3 = VAR_5;

 return 0;
}
