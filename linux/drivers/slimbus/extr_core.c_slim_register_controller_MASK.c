
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pause_comp; int m_reconf; } ;
struct slim_controller {int id; int dev; int name; int txn_lock; TYPE_1__ sched; int lock; int tid_idr; int laddr_ida; scalar_t__ max_cg; scalar_t__ min_cg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct slim_controller*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct slim_controller *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_3, 0, 0, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->id = VAR_5;

 if (!VAR_4->min_cg)
  VAR_4->min_cg = VAR_2;
 if (!VAR_4->max_cg)
  VAR_4->max_cg = VAR_1;

 FUNC_1(&VAR_4->laddr_ida);
 FUNC_3(&VAR_4->tid_idr);
 FUNC_5(&VAR_4->lock);
 FUNC_5(&VAR_4->sched.m_reconf);
 FUNC_4(&VAR_4->sched.pause_comp);
 FUNC_7(&VAR_4->txn_lock);

 FUNC_0(VAR_4->dev, "Bus [%s] registered:dev:%p\n",
  VAR_4->name, VAR_4->dev);

 FUNC_6(VAR_4);

 return 0;
}
