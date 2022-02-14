
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct can_device_stats {int error_passive; int error_warning; int bus_off; int restarts; } ;
struct TYPE_2__ {void* state; struct can_device_stats can_stats; } ;
struct gs_can {TYPE_1__ can; } ;
struct can_frame {int can_id; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static void FUNC_0(struct gs_can *VAR_11, struct can_frame *VAR_12)
{
 struct can_device_stats *VAR_13 = &VAR_11->can.can_stats;

 if (VAR_12->can_id & VAR_6) {
  VAR_11->can.state = VAR_8;
  VAR_13->restarts++;
 } else if (VAR_12->can_id & VAR_0) {
  VAR_11->can.state = VAR_7;
  VAR_13->bus_off++;
 } else if (VAR_12->can_id & VAR_1) {
  if ((VAR_12->data[1] & VAR_5) ||
      (VAR_12->data[1] & VAR_3)) {
   VAR_11->can.state = VAR_10;
   VAR_13->error_warning++;
  } else if ((VAR_12->data[1] & VAR_4) ||
      (VAR_12->data[1] & VAR_2)) {
   VAR_11->can.state = VAR_9;
   VAR_13->error_passive++;
  } else {
   VAR_11->can.state = VAR_8;
  }
 }
}
