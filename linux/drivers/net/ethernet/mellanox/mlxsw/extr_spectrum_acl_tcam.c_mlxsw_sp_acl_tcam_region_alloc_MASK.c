
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_acl_tcam_region {int tcam_region_info; int id; int key_type; struct mlxsw_afk_key_info* key_info; } ;
struct mlxsw_sp {int core; } ;
struct mlxsw_afk_key_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlxsw_afk_key_info*,int) ;
 unsigned int FUNC_2 (struct mlxsw_afk_key_info*) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp *VAR_4,
          struct mlxsw_sp_acl_tcam_region *VAR_5)
{
 struct mlxsw_afk_key_info *VAR_6 = VAR_5->key_info;
 char VAR_7[VAR_0];
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_4(VAR_7, VAR_1,
       VAR_5->key_type,
       VAR_2,
       VAR_5->id, VAR_5->tcam_region_info);
 VAR_8 = FUNC_2(VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  u16 VAR_11;

  VAR_11 = FUNC_1(VAR_6, VAR_9);
  FUNC_3(VAR_7, VAR_9, VAR_11);
 }
 VAR_10 = FUNC_6(VAR_4->core, FUNC_0(VAR_3), VAR_7);
 if (VAR_10)
  return VAR_10;
 FUNC_5(VAR_7, VAR_5->tcam_region_info);
 return 0;
}
