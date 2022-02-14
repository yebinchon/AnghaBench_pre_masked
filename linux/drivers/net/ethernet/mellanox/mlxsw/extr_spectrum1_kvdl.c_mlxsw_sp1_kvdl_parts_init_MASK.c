
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_kvdl_part_info {int dummy; } ;
struct mlxsw_sp1_kvdl_part {int dummy; } ;
struct mlxsw_sp1_kvdl {struct mlxsw_sp1_kvdl_part** parts; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp1_kvdl_part*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp1_kvdl_part*) ;
 int FUNC_2 (struct mlxsw_sp1_kvdl_part*) ;
 struct mlxsw_sp1_kvdl_part* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp1_kvdl_part_info const*,struct mlxsw_sp1_kvdl_part*) ;
 struct mlxsw_sp1_kvdl_part_info* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2,
         struct mlxsw_sp1_kvdl *VAR_3)
{
 const struct mlxsw_sp1_kvdl_part_info *VAR_4;
 struct mlxsw_sp1_kvdl_part *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_4 = &VAR_1[VAR_7];
  VAR_3->parts[VAR_7] = FUNC_3(VAR_2, VAR_4,
         VAR_5);
  if (FUNC_0(VAR_3->parts[VAR_7])) {
   VAR_6 = FUNC_1(VAR_3->parts[VAR_7]);
   goto err_kvdl_part_init;
  }
  VAR_5 = VAR_3->parts[VAR_7];
 }
 return 0;

err_kvdl_part_init:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_2(VAR_3->parts[VAR_7]);
 return VAR_6;
}
