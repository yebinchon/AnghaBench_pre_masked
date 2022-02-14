
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sx_port {int dev; } ;
typedef enum mlxsw_reg_pude_oper_status { ____Placeholder_mlxsw_reg_pude_oper_status } mlxsw_reg_pude_oper_status ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sx_port *VAR_1,
      enum mlxsw_reg_pude_oper_status VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_0(VAR_1->dev, "link up\n");
  FUNC_2(VAR_1->dev);
 } else {
  FUNC_0(VAR_1->dev, "link down\n");
  FUNC_1(VAR_1->dev);
 }
}
