
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int local_port; } ;
struct mlxsw_sp_acl_tcam_group {int id; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_5,
        struct mlxsw_sp_acl_tcam_group *VAR_6,
        struct mlxsw_sp_port *VAR_7,
        bool VAR_8)
{
 char VAR_9[VAR_0];

 FUNC_1(VAR_9, VAR_8 ? VAR_2 :
            VAR_1,
       VAR_3, VAR_7->local_port,
       VAR_6->id);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_4), VAR_9);
}
