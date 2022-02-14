
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int max; int cur; } ;
struct mlxsw_sp_sb_pm {TYPE_1__ occ; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_core_port {int dummy; } ;


 struct mlxsw_sp_port* FUNC_0 (struct mlxsw_core_port*) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_sb_pm* FUNC_2 (struct mlxsw_sp*,int ,int ) ;

int FUNC_3(struct mlxsw_core_port *VAR_0,
      unsigned int VAR_1, u16 VAR_2,
      u32 *VAR_3, u32 *VAR_4)
{
 struct mlxsw_sp_port *VAR_5 =
   FUNC_0(VAR_0);
 struct mlxsw_sp *VAR_6 = VAR_5->mlxsw_sp;
 u8 VAR_7 = VAR_5->local_port;
 struct mlxsw_sp_sb_pm *VAR_8 = FUNC_2(VAR_6, VAR_7,
             VAR_2);

 *VAR_3 = FUNC_1(VAR_6, VAR_8->occ.cur);
 *VAR_4 = FUNC_1(VAR_6, VAR_8->occ.max);
 return 0;
}
