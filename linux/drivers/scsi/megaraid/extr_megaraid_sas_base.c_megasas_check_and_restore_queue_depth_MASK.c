
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int flag; scalar_t__ throttlequeuedepth; TYPE_1__* host; int cur_can_queue; int fw_outstanding; scalar_t__ last_time; } ;
struct TYPE_2__ {int host_lock; int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(struct megasas_instance *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->flag & VAR_1
     && FUNC_3(VAR_2, VAR_3->last_time + 5 * VAR_0)
     && FUNC_0(&VAR_3->fw_outstanding) <
     VAR_3->throttlequeuedepth + 1) {

  FUNC_1(VAR_3->host->host_lock, VAR_4);
  VAR_3->flag &= ~VAR_1;

  VAR_3->host->can_queue = VAR_3->cur_can_queue;
  FUNC_2(VAR_3->host->host_lock, VAR_4);
 }
}
