
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mv88e6xxx_chip {int * ptp_clock; int tai_event_work; TYPE_3__* info; int overflow_work; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* ptp_ops; } ;
struct TYPE_4__ {scalar_t__ event_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mv88e6xxx_chip *VAR_0)
{
 if (VAR_0->ptp_clock) {
  FUNC_0(&VAR_0->overflow_work);
  if (VAR_0->info->ops->ptp_ops->event_work)
   FUNC_0(&VAR_0->tai_event_work);

  FUNC_1(VAR_0->ptp_clock);
  VAR_0->ptp_clock = ((void*)0);
 }
}
