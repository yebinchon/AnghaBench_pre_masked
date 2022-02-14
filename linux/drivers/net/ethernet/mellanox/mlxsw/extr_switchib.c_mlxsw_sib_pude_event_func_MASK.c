
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_sib_port {int dummy; } ;
struct mlxsw_sib {TYPE_1__* bus_info; struct mlxsw_sib_port** ports; } ;
struct mlxsw_reg_info {int dummy; } ;
typedef enum mlxsw_reg_pude_oper_status { ____Placeholder_mlxsw_reg_pude_oper_status } mlxsw_reg_pude_oper_status ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,size_t) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mlxsw_sib_port*,int) ;

__attribute__((used)) static void FUNC_4(const struct mlxsw_reg_info *VAR_0,
          char *VAR_1, void *VAR_2)
{
 struct mlxsw_sib *VAR_3 = VAR_2;
 struct mlxsw_sib_port *VAR_4;
 enum mlxsw_reg_pude_oper_status VAR_5;
 u8 VAR_6;

 VAR_6 = FUNC_1(VAR_1);
 VAR_4 = VAR_3->ports[VAR_6];
 if (!VAR_4) {
  FUNC_0(VAR_3->bus_info->dev, "Port %d: Link event received for non-existent port\n",
    VAR_6);
  return;
 }

 VAR_5 = FUNC_2(VAR_1);
 FUNC_3(VAR_4, VAR_5);
}
