
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int alloc_size; } ;
struct mlxsw_sp1_kvdl_part {TYPE_1__ info; } ;
struct mlxsw_sp1_kvdl {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_kvdl_entry_type { ____Placeholder_mlxsw_sp_kvdl_entry_type } mlxsw_sp_kvdl_entry_type ;


 scalar_t__ FUNC_0 (struct mlxsw_sp1_kvdl_part*) ;
 int FUNC_1 (struct mlxsw_sp1_kvdl_part*) ;
 struct mlxsw_sp1_kvdl_part* FUNC_2 (struct mlxsw_sp1_kvdl*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_0,
        void *VAR_1,
        enum mlxsw_sp_kvdl_entry_type VAR_2,
        unsigned int VAR_3,
        unsigned int *VAR_4)
{
 struct mlxsw_sp1_kvdl *VAR_5 = VAR_1;
 struct mlxsw_sp1_kvdl_part *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 *VAR_4 = VAR_6->info.alloc_size;

 return 0;
}
