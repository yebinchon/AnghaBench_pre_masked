
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_spms_state { ____Placeholder_mlxsw_reg_spms_state } mlxsw_reg_spms_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,scalar_t__,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_7,
     bool VAR_8)
{
 struct mlxsw_sp *VAR_9 = VAR_7->mlxsw_sp;
 enum mlxsw_reg_spms_state VAR_10;
 char *VAR_11;
 u16 VAR_12;
 int VAR_13;

 VAR_10 = VAR_8 ? VAR_4 :
         VAR_3;

 VAR_11 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_3(VAR_11, VAR_7->local_port);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  FUNC_4(VAR_11, VAR_12, VAR_10);

 VAR_13 = FUNC_5(VAR_9->core, FUNC_0(VAR_6), VAR_11);
 FUNC_1(VAR_11);
 return VAR_13;
}
