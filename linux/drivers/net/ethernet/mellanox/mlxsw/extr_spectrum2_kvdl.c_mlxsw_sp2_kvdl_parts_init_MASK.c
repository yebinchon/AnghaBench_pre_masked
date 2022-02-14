
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_kvdl_part_info {int dummy; } ;
struct mlxsw_sp2_kvdl {int * parts; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp2_kvdl_part_info const*) ;
 struct mlxsw_sp2_kvdl_part_info* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2,
         struct mlxsw_sp2_kvdl *VAR_3)
{
 const struct mlxsw_sp2_kvdl_part_info *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_1[VAR_5];
  VAR_3->parts[VAR_5] = FUNC_3(VAR_2, VAR_4);
  if (FUNC_0(VAR_3->parts[VAR_5])) {
   VAR_6 = FUNC_1(VAR_3->parts[VAR_5]);
   goto err_kvdl_part_init;
  }
 }
 return 0;

err_kvdl_part_init:
 for (VAR_5--; VAR_5 >= 0; VAR_5--)
  FUNC_2(VAR_3->parts[VAR_5]);
 return VAR_6;
}
