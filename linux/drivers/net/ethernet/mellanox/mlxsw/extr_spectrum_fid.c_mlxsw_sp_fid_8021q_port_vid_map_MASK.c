
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mlxsw_sp_port {size_t local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_fid {int fid_index; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
struct TYPE_2__ {scalar_t__* port_fid_mappings; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,size_t,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_fid *VAR_0,
        struct mlxsw_sp_port *VAR_1,
        u16 VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_1->mlxsw_sp;
 u8 VAR_4 = VAR_1->local_port;





 if (VAR_3->fid_core->port_fid_mappings[VAR_4] == 0)
  return 0;
 return FUNC_0(VAR_3, VAR_0->fid_index, VAR_4,
        VAR_2, 1);
}
