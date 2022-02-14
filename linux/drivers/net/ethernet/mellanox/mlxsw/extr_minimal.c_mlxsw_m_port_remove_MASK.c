
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mlxsw_m_port {int dev; } ;
struct mlxsw_m {int core; struct mlxsw_m_port** ports; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,struct mlxsw_m*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_m *VAR_0, u8 VAR_1)
{
 struct mlxsw_m_port *VAR_2 = VAR_0->ports[VAR_1];

 FUNC_1(VAR_0->core, VAR_1, VAR_0);
 FUNC_3(VAR_2->dev);
 VAR_0->ports[VAR_1] = ((void*)0);
 FUNC_0(VAR_2->dev);
 FUNC_2(VAR_0->core, VAR_1);
}
