
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_queue_notify_config {scalar_t__ fn; int fn_arg; } ;
struct knav_queue {int notifier_fn_arg; scalar_t__ notifier_fn; TYPE_2__* inst; } ;
typedef scalar_t__ knav_queue_notify_fn ;
struct TYPE_4__ {TYPE_1__* range; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct knav_queue*) ;
 int FUNC_1 (struct knav_queue*) ;

__attribute__((used)) static int FUNC_2(struct knav_queue *VAR_4,
    struct knav_queue_notify_config *VAR_5)
{
 knav_queue_notify_fn VAR_6 = VAR_4->notifier_fn;

 if (!VAR_5)
  return -VAR_0;

 if (!(VAR_4->inst->range->flags & (VAR_2 | VAR_3)))
  return -VAR_1;

 if (!VAR_5->fn && VAR_6)
  FUNC_0(VAR_4);

 VAR_4->notifier_fn = VAR_5->fn;
 VAR_4->notifier_fn_arg = VAR_5->fn_arg;

 if (VAR_5->fn && !VAR_6)
  FUNC_1(VAR_4);

 return 0;
}
