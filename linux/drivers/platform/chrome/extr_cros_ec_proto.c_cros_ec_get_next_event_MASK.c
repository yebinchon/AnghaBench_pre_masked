
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ event_type; } ;
struct cros_ec_device {int host_event_wake_mask; TYPE_1__ event_data; int mkbp_event_supported; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cros_ec_device*) ;
 int FUNC_1 (struct cros_ec_device*) ;
 int FUNC_2 (struct cros_ec_device*) ;

int FUNC_3(struct cros_ec_device *VAR_1, bool *VAR_2)
{
 u8 VAR_3;
 u32 VAR_4;
 int VAR_5;

 if (!VAR_1->mkbp_event_supported) {
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 <= 0)
   return VAR_5;

  if (VAR_2)
   *VAR_2 = 1;

  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 <= 0)
  return VAR_5;

 if (VAR_2) {
  VAR_3 = VAR_1->event_data.event_type;
  VAR_4 = FUNC_0(VAR_1);





  if (VAR_3 == VAR_0)
   *VAR_2 = 0;

  else if (VAR_4 &&
    !(VAR_4 & VAR_1->host_event_wake_mask))
   *VAR_2 = 0;

  else
   *VAR_2 = 1;
 }

 return VAR_5;
}
