
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_acl_tcam_region {int tcam_region_info; int id; int key_type; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_3,
     struct mlxsw_sp_acl_tcam_region *VAR_4,
     u16 VAR_5)
{
 char VAR_6[VAR_0];

 FUNC_1(VAR_6, VAR_1,
       VAR_4->key_type, VAR_5, VAR_4->id,
       VAR_4->tcam_region_info);
 return FUNC_2(VAR_3->core, FUNC_0(VAR_2), VAR_6);
}
