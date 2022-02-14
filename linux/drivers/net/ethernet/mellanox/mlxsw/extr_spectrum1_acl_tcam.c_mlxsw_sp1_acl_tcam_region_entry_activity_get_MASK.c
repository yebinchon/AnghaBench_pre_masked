
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int tcam_region_info; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int ,int ,unsigned int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_3,
          struct mlxsw_sp_acl_tcam_region *VAR_4,
          unsigned int VAR_5,
          bool *VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8;

 FUNC_2(VAR_7, 1, VAR_1,
        VAR_4->tcam_region_info, VAR_5, 0);
 VAR_8 = FUNC_3(VAR_3->core, FUNC_0(VAR_2), VAR_7);
 if (VAR_8)
  return VAR_8;
 *VAR_6 = FUNC_1(VAR_7);
 return 0;
}
