
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_port** ports; } ;
struct devlink_port {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct mlxsw_sp* FUNC_1 (void*) ;
 int FUNC_2 (struct devlink*,struct sk_buff*,void*,struct devlink_port*) ;
 struct devlink_port* FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (struct mlxsw_sp*,struct sk_buff*,size_t,struct mlxsw_sp_port*) ;
 struct devlink* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_1, u8 VAR_2,
          void *VAR_3)
{
 struct devlink_port *VAR_4;
 struct mlxsw_sp_port *VAR_5;
 struct mlxsw_sp *VAR_6;
 struct devlink *VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 VAR_5 = VAR_6->ports[VAR_2];

 if (FUNC_4(VAR_6, VAR_1, VAR_2, VAR_5))
  return;

 VAR_7 = FUNC_5(VAR_6->core);
 VAR_4 = FUNC_3(VAR_6->core,
          VAR_2);
 FUNC_6(VAR_1, VAR_0);
 FUNC_2(VAR_7, VAR_1, VAR_3, VAR_4);
 FUNC_0(VAR_1);
}
