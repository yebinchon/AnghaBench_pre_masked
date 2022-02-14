
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_span_entry {int id; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;
typedef enum mlxsw_reg_mpar_i_e { ____Placeholder_mlxsw_reg_mpar_i_e } mlxsw_reg_mpar_i_e ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_2,
      struct mlxsw_sp_span_entry *VAR_3,
      enum mlxsw_sp_span_type VAR_4,
      bool VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_2->mlxsw_sp;
 char VAR_7[VAR_0];
 int VAR_8 = VAR_3->id;


 FUNC_1(VAR_7, VAR_2->local_port,
       (enum mlxsw_reg_mpar_i_e)VAR_4, VAR_5, VAR_8);
 return FUNC_2(VAR_6->core, FUNC_0(VAR_1), VAR_7);
}
