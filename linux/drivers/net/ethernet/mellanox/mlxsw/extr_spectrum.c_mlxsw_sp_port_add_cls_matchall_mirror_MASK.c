
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port_mall_mirror_tc_entry {int ingress; int span_id; } ;
struct mlxsw_sp_port {int dev; } ;
struct flow_action_entry {int dev; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_sp_port*,int ,int,int,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_port *VAR_3,
          struct mlxsw_sp_port_mall_mirror_tc_entry *VAR_4,
          const struct flow_action_entry *VAR_5,
          bool VAR_6)
{
 enum mlxsw_sp_span_type VAR_7;

 if (!VAR_5->dev) {
  FUNC_1(VAR_3->dev, "Could not find requested device\n");
  return -VAR_0;
 }

 VAR_4->ingress = VAR_6;
 VAR_7 = VAR_6 ? VAR_2 : VAR_1;
 return FUNC_0(VAR_3, VAR_5->dev, VAR_7,
     1, &VAR_4->span_id);
}
