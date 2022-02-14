
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sib_port {int local_port; struct mlxsw_sib* mlxsw_sib; } ;
struct mlxsw_sib {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sib_port *VAR_2,
       u8 VAR_3)
{
 struct mlxsw_sib *VAR_4 = VAR_2->mlxsw_sib;
 char VAR_5[VAR_0];

 FUNC_1(VAR_5, VAR_3, VAR_2->local_port);
 return FUNC_2(VAR_4->core, FUNC_0(VAR_1), VAR_5);
}
