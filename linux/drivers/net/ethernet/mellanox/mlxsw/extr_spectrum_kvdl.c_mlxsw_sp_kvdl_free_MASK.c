
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_kvdl {int priv; TYPE_1__* kvdl_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_kvdl* kvdl; } ;
typedef enum mlxsw_sp_kvdl_entry_type { ____Placeholder_mlxsw_sp_kvdl_entry_type } mlxsw_sp_kvdl_entry_type ;
struct TYPE_2__ {int (* free ) (struct mlxsw_sp*,int ,int,unsigned int,int) ;} ;


 int FUNC_0 (struct mlxsw_sp*,int ,int,unsigned int,int) ;

void FUNC_1(struct mlxsw_sp *VAR_0,
   enum mlxsw_sp_kvdl_entry_type VAR_1,
   unsigned int VAR_2, int VAR_3)
{
 struct mlxsw_sp_kvdl *VAR_4 = VAR_0->kvdl;

 VAR_4->kvdl_ops->free(VAR_0, VAR_4->priv, VAR_1,
        VAR_2, VAR_3);
}
