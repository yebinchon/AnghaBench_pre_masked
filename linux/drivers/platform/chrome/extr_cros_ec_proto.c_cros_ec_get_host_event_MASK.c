
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int host_event; } ;
struct TYPE_4__ {scalar_t__ event_type; TYPE_1__ data; } ;
struct cros_ec_device {int event_size; TYPE_2__ event_data; int dev; int mkbp_event_supported; } ;
typedef int host_event ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

u32 FUNC_3(struct cros_ec_device *VAR_1)
{
 u32 VAR_2;

 FUNC_0(!VAR_1->mkbp_event_supported);

 if (VAR_1->event_data.event_type != VAR_0)
  return 0;

 if (VAR_1->event_size != sizeof(VAR_2)) {
  FUNC_1(VAR_1->dev, "Invalid host event size\n");
  return 0;
 }

 VAR_2 = FUNC_2(&VAR_1->event_data.data.host_event);

 return VAR_2;
}
