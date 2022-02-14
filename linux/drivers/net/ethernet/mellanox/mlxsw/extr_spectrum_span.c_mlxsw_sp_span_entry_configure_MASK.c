
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlxsw_sp_span_parms {TYPE_2__* dest_port; } ;
struct mlxsw_sp_span_entry {struct mlxsw_sp_span_parms parms; int to_dev; TYPE_1__* ops; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_3__* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct TYPE_4__ {scalar_t__ (* configure ) (struct mlxsw_sp_span_entry*,struct mlxsw_sp_span_parms) ;} ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_span_entry*,struct mlxsw_sp_span_parms) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_span_entry *VAR_1,
         struct mlxsw_sp_span_parms VAR_2)
{
 if (VAR_2.dest_port) {
  if (VAR_2.dest_port->mlxsw_sp != VAR_0) {
   FUNC_0(VAR_1->to_dev, "Cannot mirror to %s, which belongs to a different mlxsw instance",
       VAR_2.dest_port->dev->name);
   VAR_2.dest_port = ((void*)0);
  } else if (VAR_1->ops->configure(VAR_1, VAR_2)) {
   FUNC_0(VAR_1->to_dev, "Failed to offload mirror to %s",
       VAR_2.dest_port->dev->name);
   VAR_2.dest_port = ((void*)0);
  }
 }

 VAR_1->parms = VAR_2;
}
