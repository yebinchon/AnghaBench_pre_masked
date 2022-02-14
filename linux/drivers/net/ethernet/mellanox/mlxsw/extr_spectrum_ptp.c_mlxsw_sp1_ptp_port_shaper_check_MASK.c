
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlxsw_sp_port_type_speed_ops {scalar_t__ (* from_ptys_speed ) (struct mlxsw_sp*,scalar_t__) ;int (* reg_ptys_eth_unpack ) (struct mlxsw_sp*,char*,int *,int *,scalar_t__*) ;int (* reg_ptys_eth_pack ) (struct mlxsw_sp*,char*,int ,int ,int) ;} ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_port_type_speed_ops* port_type_speed_ops; } ;
struct TYPE_2__ {scalar_t__ ethtool_speed; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct mlxsw_sp_port*) ;
 int FUNC_3 (struct mlxsw_sp_port*,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct mlxsw_sp*,char*,int ,int ,int) ;
 int FUNC_5 (struct mlxsw_sp*,char*,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct mlxsw_sp*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp_port *VAR_4)
{
 const struct mlxsw_sp_port_type_speed_ops *VAR_5;
 struct mlxsw_sp *VAR_6 = VAR_4->mlxsw_sp;
 char VAR_7[VAR_0];
 u32 VAR_8, VAR_9;
 bool VAR_10 = 0;
 int VAR_11, VAR_12;

 if (!FUNC_2(VAR_4))
  return FUNC_3(VAR_4, 0);

 VAR_5 = VAR_6->port_type_speed_ops;
 VAR_5->reg_ptys_eth_pack(VAR_6, VAR_7,
            VAR_4->local_port, 0,
            0);
 VAR_11 = FUNC_1(VAR_6->core, FUNC_0(VAR_3), VAR_7);
 if (VAR_11)
  return VAR_11;
 VAR_5->reg_ptys_eth_unpack(VAR_6, VAR_7, ((void*)0), ((void*)0),
       &VAR_8);

 VAR_9 = VAR_5->from_ptys_speed(VAR_6, VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (VAR_2[VAR_12].ethtool_speed == VAR_9) {
   VAR_10 = 1;
   break;
  }
 }

 return FUNC_3(VAR_4, VAR_10);
}
