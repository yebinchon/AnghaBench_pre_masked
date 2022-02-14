
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timespec64 {int dummy; } ;
struct TYPE_3__ {scalar_t__ timer_slack_ns; } ;


 scalar_t__ FUNC_0 (struct timespec64*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct timespec64*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct timespec64 FUNC_3 (struct timespec64,struct timespec64) ;

u64 FUNC_4(struct timespec64 *VAR_1)
{
 u64 VAR_2;
 struct timespec64 VAR_3;





 if (FUNC_2(VAR_0))
  return 0;

 FUNC_1(&VAR_3);
 VAR_3 = FUNC_3(*VAR_1, VAR_3);
 VAR_2 = FUNC_0(&VAR_3);
 if (VAR_2 < VAR_0->timer_slack_ns)
  return VAR_0->timer_slack_ns;
 return VAR_2;
}
