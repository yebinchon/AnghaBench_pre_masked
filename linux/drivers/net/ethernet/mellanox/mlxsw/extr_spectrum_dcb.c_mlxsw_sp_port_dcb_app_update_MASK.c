
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_port {int dev; } ;
struct dcb_ieee_app_prio_map {int dummy; } ;
struct dcb_ieee_app_dscp_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*) ;
 int FUNC_1 (struct mlxsw_sp_port*,int ,struct dcb_ieee_app_dscp_map*) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct dcb_ieee_app_prio_map*) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct dcb_ieee_app_dscp_map*) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct dcb_ieee_app_prio_map*) ;
 int FUNC_5 (struct mlxsw_sp_port*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp_port *VAR_2)
{
 struct dcb_ieee_app_prio_map VAR_3;
 struct dcb_ieee_app_dscp_map VAR_4;
 u8 VAR_5;
 bool VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_2,
       &VAR_3);

 FUNC_1(VAR_2, VAR_5,
         &VAR_4);
 VAR_7 = FUNC_3(VAR_2,
       &VAR_4);
 if (VAR_7) {
  FUNC_6(VAR_2->dev, "Couldn't configure priority map\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_2,
       &VAR_3);
 if (VAR_7) {
  FUNC_6(VAR_2->dev, "Couldn't configure DSCP rewrite map\n");
  return VAR_7;
 }

 if (!VAR_6) {
  VAR_7 = FUNC_5(VAR_2,
     VAR_1);
  if (VAR_7)
   FUNC_6(VAR_2->dev, "Couldn't switch to trust L2\n");
  return VAR_7;
 }

 VAR_7 = FUNC_5(VAR_2,
          VAR_0);
 if (VAR_7) {





  FUNC_6(VAR_2->dev, "Couldn't switch to trust L3\n");
  return VAR_7;
 }

 return 0;
}
