
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_span_inspected_port {int list; } ;
struct mlxsw_sp_span_entry {int dummy; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_span_inspected_port*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 struct mlxsw_sp_span_inspected_port* FUNC_5 (struct mlxsw_sp_span_entry*,int,struct mlxsw_sp_port*,int) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_span_entry*) ;
 int FUNC_7 (struct mlxsw_sp_port*,struct mlxsw_sp_span_entry*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_8(struct mlxsw_sp_port *VAR_3,
     struct mlxsw_sp_span_entry *VAR_4,
     enum mlxsw_sp_span_type VAR_5,
     bool VAR_6)
{
 struct mlxsw_sp_span_inspected_port *VAR_7;
 struct mlxsw_sp *VAR_8 = VAR_3->mlxsw_sp;
 char VAR_9[VAR_0];

 VAR_7 = FUNC_5(VAR_4, VAR_5,
            VAR_3, VAR_6);
 if (!VAR_7)
  return;

 if (VAR_6)
  FUNC_7(VAR_3, VAR_4, VAR_5,
        0);

 if (VAR_5 == VAR_1) {
  FUNC_3(VAR_9, VAR_3->local_port, 0);
  FUNC_4(VAR_8->core, FUNC_0(VAR_2), VAR_9);
 }

 FUNC_6(VAR_8, VAR_4);

 FUNC_2(&VAR_7->list);
 FUNC_1(VAR_7);
}
