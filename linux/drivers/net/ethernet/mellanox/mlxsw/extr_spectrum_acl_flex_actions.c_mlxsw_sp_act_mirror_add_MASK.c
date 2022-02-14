
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*,struct net_device const*,int,int,int*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, u8 VAR_3,
   const struct net_device *VAR_4,
   bool VAR_5, int *VAR_6)
{
 struct mlxsw_sp_port *VAR_7;
 struct mlxsw_sp *VAR_8 = VAR_2;
 enum mlxsw_sp_span_type VAR_9;

 VAR_9 = VAR_5 ? VAR_1 : VAR_0;
 VAR_7 = VAR_8->ports[VAR_3];

 return FUNC_0(VAR_7, VAR_4, VAR_9,
     0, VAR_6);
}
