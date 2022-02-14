
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dest_port; } ;
struct mlxsw_sp_span_entry {TYPE_2__* ops; TYPE_1__ parms; } ;
struct TYPE_4__ {int (* deconfigure ) (struct mlxsw_sp_span_entry*) ;} ;


 int FUNC_0 (struct mlxsw_sp_span_entry*) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_span_entry *VAR_0)
{
 if (VAR_0->parms.dest_port)
  VAR_0->ops->deconfigure(VAR_0);
}
