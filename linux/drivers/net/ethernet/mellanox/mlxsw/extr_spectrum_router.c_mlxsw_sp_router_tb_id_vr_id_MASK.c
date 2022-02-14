
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_vr {int id; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_vr* FUNC_0 (struct mlxsw_sp*,int ) ;

int FUNC_1(struct mlxsw_sp *VAR_1, u32 VAR_2,
    u16 *VAR_3)
{
 struct mlxsw_sp_vr *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;
 *VAR_3 = VAR_4->id;

 return 0;
}
