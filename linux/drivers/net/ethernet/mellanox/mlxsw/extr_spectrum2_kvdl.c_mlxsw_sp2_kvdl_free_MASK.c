
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_kvdl_part {int dummy; } ;
struct mlxsw_sp2_kvdl {struct mlxsw_sp2_kvdl_part** parts; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_kvdl_entry_type { ____Placeholder_mlxsw_sp_kvdl_entry_type } mlxsw_sp_kvdl_entry_type ;


 void FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp2_kvdl_part*,unsigned int,int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0, void *VAR_1,
    enum mlxsw_sp_kvdl_entry_type VAR_2,
    unsigned int VAR_3,
    int VAR_4)
{
 unsigned int VAR_5 = VAR_3 * FUNC_1(VAR_2);
 struct mlxsw_sp2_kvdl *VAR_6 = VAR_1;
 struct mlxsw_sp2_kvdl_part *VAR_7 = VAR_6->parts[VAR_2];

 return FUNC_0(VAR_0, VAR_7, VAR_5, VAR_4);
}
