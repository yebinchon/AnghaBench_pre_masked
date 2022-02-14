
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum bp_state { ____Placeholder_bp_state } bp_state ;
struct TYPE_2__ {int schedule_delay; int retry_count; int max_retry_count; int max_schedule_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static enum bp_state FUNC_0(enum bp_state VAR_6)
{
 if (VAR_6 == VAR_3)
  return VAR_3;

 if (VAR_6 == VAR_2)
  return VAR_2;

 if (VAR_6 == VAR_0) {
  VAR_5.schedule_delay = 1;
  VAR_5.retry_count = 1;
  return VAR_0;
 }

 ++VAR_5.retry_count;

 if (VAR_5.max_retry_count != VAR_4 &&
   VAR_5.retry_count > VAR_5.max_retry_count) {
  VAR_5.schedule_delay = 1;
  VAR_5.retry_count = 1;
  return VAR_2;
 }

 VAR_5.schedule_delay <<= 1;

 if (VAR_5.schedule_delay > VAR_5.max_schedule_delay)
  VAR_5.schedule_delay = VAR_5.max_schedule_delay;

 return VAR_1;
}
