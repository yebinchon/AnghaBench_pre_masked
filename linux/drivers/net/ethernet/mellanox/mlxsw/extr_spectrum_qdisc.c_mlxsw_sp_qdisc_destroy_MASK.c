
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_qdisc {TYPE_1__* ops; int handle; } ;
struct mlxsw_sp_port {int dummy; } ;
struct TYPE_2__ {int (* destroy ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp_port *VAR_1,
         struct mlxsw_sp_qdisc *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return 0;

 if (VAR_2->ops && VAR_2->ops->destroy)
  VAR_3 = VAR_2->ops->destroy(VAR_1,
         VAR_2);

 VAR_2->handle = VAR_0;
 VAR_2->ops = ((void*)0);
 return VAR_3;
}
