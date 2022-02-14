
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link {int watchdog_interval; int watchdog_work; int watchdog_disabled; } ;
struct rt2x00_dev {int hw; TYPE_2__* ops; int flags; struct link link; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {scalar_t__ watchdog; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct rt2x00_dev *VAR_1)
{
 struct link *VAR_2 = &VAR_1->link;

 if (FUNC_1(VAR_0, &VAR_1->flags) &&
     VAR_1->ops->lib->watchdog && !VAR_2->watchdog_disabled)
  FUNC_0(VAR_1->hw,
          &VAR_2->watchdog_work,
          VAR_2->watchdog_interval);
}
