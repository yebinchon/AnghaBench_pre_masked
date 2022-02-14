
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sib_port {int local_port; struct mlxsw_sib* mlxsw_sib; } ;
struct mlxsw_sib {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sib_port *VAR_4,
    bool VAR_5)
{
 struct mlxsw_sib *VAR_6 = VAR_4->mlxsw_sib;
 char VAR_7[VAR_2];

 FUNC_1(VAR_7, VAR_4->local_port,
       VAR_5 ? VAR_1 :
       VAR_0);
 return FUNC_2(VAR_6->core, FUNC_0(VAR_3), VAR_7);
}
