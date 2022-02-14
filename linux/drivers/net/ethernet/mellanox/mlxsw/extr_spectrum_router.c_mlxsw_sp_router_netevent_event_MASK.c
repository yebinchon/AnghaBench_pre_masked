
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct neighbour {int dev; TYPE_4__* tbl; } ;
struct neigh_parms {int dev; TYPE_1__* tbl; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_netevent_work {int work; struct neighbour* n; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_3__* router; } ;
struct TYPE_8__ {int family; } ;
struct TYPE_6__ {unsigned long interval; } ;
struct TYPE_7__ {TYPE_2__ neighs_update; } ;
struct TYPE_5__ {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct neigh_parms*,int ) ;





 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_2 (int ) ;
 struct mlxsw_sp_netevent_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlxsw_sp_port*) ;
 struct mlxsw_sp_port* FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (void*,struct notifier_block*,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct neighbour*) ;

__attribute__((used)) static int FUNC_9(struct notifier_block *VAR_9,
       unsigned long VAR_10, void *VAR_11)
{
 struct mlxsw_sp_netevent_work *VAR_12;
 struct mlxsw_sp_port *VAR_13;
 struct mlxsw_sp *VAR_14;
 unsigned long VAR_15;
 struct neigh_parms *VAR_16;
 struct neighbour *VAR_17;

 switch (VAR_10) {
 case 132:
  VAR_16 = VAR_11;


  if (!VAR_16->dev || (VAR_16->tbl->family != VAR_0 &&
    VAR_16->tbl->family != VAR_1))
   return VAR_5;




  VAR_13 = FUNC_6(VAR_16->dev);
  if (!VAR_13)
   return VAR_5;

  VAR_14 = VAR_13->mlxsw_sp;
  VAR_15 = FUNC_2(FUNC_1(VAR_16, VAR_2));
  VAR_14->router->neighs_update.interval = VAR_15;

  FUNC_5(VAR_13);
  break;
 case 128:
  VAR_17 = VAR_11;

  if (VAR_17->tbl->family != VAR_0 && VAR_17->tbl->family != VAR_1)
   return VAR_5;

  VAR_13 = FUNC_6(VAR_17->dev);
  if (!VAR_13)
   return VAR_5;

  VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3);
  if (!VAR_12) {
   FUNC_5(VAR_13);
   return VAR_4;
  }

  FUNC_0(&VAR_12->work, VAR_7);
  VAR_12->mlxsw_sp = VAR_13->mlxsw_sp;
  VAR_12->n = VAR_17;





  FUNC_8(VAR_17);
  FUNC_4(&VAR_12->work);
  FUNC_5(VAR_13);
  break;
 case 130:
 case 129:
  return FUNC_7(VAR_11, VAR_9,
    VAR_6);

 case 131:
  return FUNC_7(VAR_11, VAR_9,
    VAR_8);
 }

 return VAR_5;
}
