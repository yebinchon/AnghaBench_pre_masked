
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port_mall_mirror_tc_entry {int span_id; scalar_t__ ingress; } ;
struct mlxsw_sp_port {int dummy; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_port *VAR_2,
          struct mlxsw_sp_port_mall_mirror_tc_entry *VAR_3)
{
 enum mlxsw_sp_span_type VAR_4;

 VAR_4 = VAR_3->ingress ?
   VAR_1 : VAR_0;
 FUNC_0(VAR_2, VAR_3->span_id,
     VAR_4, 1);
}
