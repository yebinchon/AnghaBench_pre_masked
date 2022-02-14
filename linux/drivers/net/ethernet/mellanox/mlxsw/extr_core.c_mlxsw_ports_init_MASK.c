
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_core_port {int dummy; } ;
struct mlxsw_core {int ports; scalar_t__ max_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlxsw_core*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_core*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_core *VAR_4)
{

 if (FUNC_1(VAR_4, VAR_2))
  VAR_4->max_ports = FUNC_0(VAR_4,
          VAR_2) + 1;
 else
  VAR_4->max_ports = VAR_3 + 1;

 VAR_4->ports = FUNC_2(VAR_4->max_ports,
        sizeof(struct mlxsw_core_port), VAR_1);
 if (!VAR_4->ports)
  return -VAR_0;

 return 0;
}
