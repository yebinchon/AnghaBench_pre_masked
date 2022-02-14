
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int tcam_region_info; int id; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_2,
    struct mlxsw_sp_acl_tcam_region *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_3->id, 1,
       VAR_3->tcam_region_info);
 return FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_4);
}
