
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlxsw_sp_qdisc {scalar_t__ handle; TYPE_1__* ops; } ;
typedef enum mlxsw_sp_qdisc_type { ____Placeholder_mlxsw_sp_qdisc_type } mlxsw_sp_qdisc_type ;
struct TYPE_2__ {int type; } ;



__attribute__((used)) static bool
FUNC_0(struct mlxsw_sp_qdisc *VAR_0, u32 VAR_1,
         enum mlxsw_sp_qdisc_type VAR_2)
{
 return VAR_0 && VAR_0->ops &&
        VAR_0->ops->type == VAR_2 &&
        VAR_0->handle == VAR_1;
}
