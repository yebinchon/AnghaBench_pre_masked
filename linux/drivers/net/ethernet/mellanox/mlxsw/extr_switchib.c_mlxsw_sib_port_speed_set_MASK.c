
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sib_port {int local_port; struct mlxsw_sib* mlxsw_sib; } ;
struct mlxsw_sib {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sib_port *VAR_2,
        u16 VAR_3, u16 VAR_4)
{
 struct mlxsw_sib *VAR_5 = VAR_2->mlxsw_sib;
 char VAR_6[VAR_0];

 FUNC_1(VAR_6, VAR_2->local_port, VAR_3,
          VAR_4);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_1), VAR_6);
}
