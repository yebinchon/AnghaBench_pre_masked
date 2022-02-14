
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, u8 VAR_3, int VAR_4, bool VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_2;
 struct mlxsw_sp_port *VAR_7;
 enum mlxsw_sp_span_type VAR_8;

 VAR_8 = VAR_5 ? VAR_1 : VAR_0;
 VAR_7 = VAR_6->ports[VAR_3];

 FUNC_0(VAR_7, VAR_4, VAR_8, 0);
}
