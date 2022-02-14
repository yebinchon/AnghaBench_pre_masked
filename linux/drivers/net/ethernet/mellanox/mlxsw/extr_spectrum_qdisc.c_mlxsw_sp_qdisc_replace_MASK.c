
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp_qdisc_ops {scalar_t__ type; int (* check_params ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,void*) ;int (* replace ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,void*) ;int (* unoffload ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,void*) ;int (* clean_stats ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;} ;
struct mlxsw_sp_qdisc {scalar_t__ handle; struct mlxsw_sp_qdisc_ops* ops; } ;
struct mlxsw_sp_port {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,void*) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,void*) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,void*) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_port *VAR_0, u32 VAR_1,
         struct mlxsw_sp_qdisc *VAR_2,
         struct mlxsw_sp_qdisc_ops *VAR_3, void *VAR_4)
{
 int VAR_5;

 if (VAR_2->ops && VAR_2->ops->type != VAR_3->type)





  FUNC_0(VAR_0, VAR_2);
 VAR_5 = VAR_3->check_params(VAR_0, VAR_2, VAR_4);
 if (VAR_5)
  goto err_bad_param;

 VAR_5 = VAR_3->replace(VAR_0, VAR_2, VAR_4);
 if (VAR_5)
  goto err_config;

 if (VAR_2->handle != VAR_1) {
  VAR_2->ops = VAR_3;
  if (VAR_3->clean_stats)
   VAR_3->clean_stats(VAR_0, VAR_2);
 }

 VAR_2->handle = VAR_1;
 return 0;

err_bad_param:
err_config:
 if (VAR_2->handle == VAR_1 && VAR_3->unoffload)
  VAR_3->unoffload(VAR_0, VAR_2, VAR_4);

 FUNC_0(VAR_0, VAR_2);
 return VAR_5;
}
