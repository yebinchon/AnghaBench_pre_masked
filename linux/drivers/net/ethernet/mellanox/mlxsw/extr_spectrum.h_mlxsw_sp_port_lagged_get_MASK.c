
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct mlxsw_sp_port {scalar_t__ lagged; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; int core; } ;


 size_t FUNC_0 (int ,int ,size_t) ;

__attribute__((used)) static inline struct mlxsw_sp_port *
FUNC_1(struct mlxsw_sp *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct mlxsw_sp_port *VAR_3;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_0->core,
      VAR_1, VAR_2);
 VAR_3 = VAR_0->ports[VAR_4];
 return VAR_3 && VAR_3->lagged ? VAR_3 : ((void*)0);
}
