
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int shaper_dw; } ;
struct mlxsw_sp_port {int dev; TYPE_1__ ptp; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; } ;
struct mlxsw_reg_info {int dummy; } ;
typedef enum mlxsw_reg_pude_oper_status { ____Placeholder_mlxsw_reg_pude_oper_status } mlxsw_reg_pude_oper_status ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct mlxsw_reg_info *VAR_1,
         char *VAR_2, void *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_3;
 struct mlxsw_sp_port *VAR_5;
 enum mlxsw_reg_pude_oper_status VAR_6;
 u8 VAR_7;

 VAR_7 = FUNC_1(VAR_2);
 VAR_5 = VAR_4->ports[VAR_7];
 if (!VAR_5)
  return;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == VAR_0) {
  FUNC_3(VAR_5->dev, "link up\n");
  FUNC_5(VAR_5->dev);
  FUNC_0(&VAR_5->ptp.shaper_dw, 0);
 } else {
  FUNC_3(VAR_5->dev, "link down\n");
  FUNC_4(VAR_5->dev);
 }
}
