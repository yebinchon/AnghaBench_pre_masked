
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_span_entry {int id; } ;
struct mlxsw_sp_port {int dev; int mlxsw_sp; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 struct mlxsw_sp_span_entry* FUNC_0 (int ,int) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct mlxsw_sp_span_entry*,int,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(struct mlxsw_sp_port *VAR_0, int VAR_1,
         enum mlxsw_sp_span_type VAR_2, bool VAR_3)
{
 struct mlxsw_sp_span_entry *VAR_4;

 VAR_4 = FUNC_0(VAR_0->mlxsw_sp, VAR_1);
 if (!VAR_4) {
  FUNC_3(VAR_0->dev, "no span entry found\n");
  return;
 }

 FUNC_2(VAR_0->dev, "removing inspected port from SPAN entry %d\n",
     VAR_4->id);
 FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
}
