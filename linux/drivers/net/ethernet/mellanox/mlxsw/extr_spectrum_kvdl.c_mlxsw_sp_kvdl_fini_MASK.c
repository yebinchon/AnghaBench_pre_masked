
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_kvdl {int priv; TYPE_1__* kvdl_ops; } ;
struct mlxsw_sp {struct mlxsw_sp_kvdl* kvdl; } ;
struct TYPE_2__ {int (* fini ) (struct mlxsw_sp*,int ) ;} ;


 int FUNC_0 (struct mlxsw_sp_kvdl*) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;

void FUNC_2(struct mlxsw_sp *VAR_0)
{
 struct mlxsw_sp_kvdl *VAR_1 = VAR_0->kvdl;

 VAR_1->kvdl_ops->fini(VAR_0, VAR_1->priv);
 FUNC_0(VAR_1);
}
