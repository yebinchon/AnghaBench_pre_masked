
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct data_queue {int status_lock; TYPE_3__* rt2x00dev; int flags; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* stop_queue ) (struct data_queue*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct data_queue*) ;
 int FUNC_3 (struct data_queue*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct data_queue *VAR_1)
{
 FUNC_0(&VAR_1->status_lock);

 if (!FUNC_4(VAR_0, &VAR_1->flags)) {
  FUNC_1(&VAR_1->status_lock);
  return;
 }

 FUNC_2(VAR_1);

 VAR_1->rt2x00dev->ops->lib->stop_queue(VAR_1);

 FUNC_1(&VAR_1->status_lock);
}
