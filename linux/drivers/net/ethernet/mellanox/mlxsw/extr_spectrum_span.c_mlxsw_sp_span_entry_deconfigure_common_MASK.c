
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct mlxsw_sp_port* dest_port; } ;
struct mlxsw_sp_span_entry {int id; TYPE_1__ parms; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_mpat_span_type { ____Placeholder_mlxsw_reg_mpat_span_type } mlxsw_reg_mpat_span_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_span_entry *VAR_2,
           enum mlxsw_reg_mpat_span_type VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = VAR_2->parms.dest_port;
 struct mlxsw_sp *VAR_5 = VAR_4->mlxsw_sp;
 u8 VAR_6 = VAR_4->local_port;
 char VAR_7[VAR_0];
 int VAR_8 = VAR_2->id;

 FUNC_1(VAR_7, VAR_8, VAR_6, 0, VAR_3);
 FUNC_2(VAR_5->core, FUNC_0(VAR_1), VAR_7);
}
