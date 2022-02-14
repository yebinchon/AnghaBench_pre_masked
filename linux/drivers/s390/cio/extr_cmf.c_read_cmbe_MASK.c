
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cmbe {int sample_count; int initial_command_response_time; int device_busy_time; int device_active_only_time; int control_unit_queuing_time; int device_disconnect_time; int function_pending_time; int device_connect_time; int ssch_rsch_count; } ;
struct cmb_data {struct cmbe* hw_block; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {int cmb_start_time; struct cmb_data* cmb; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static u64 FUNC_4(struct ccw_device *VAR_0, int VAR_1)
{
 struct cmb_data *VAR_2;
 unsigned long VAR_3;
 struct cmbe *VAR_4;
 u64 VAR_5 = 0;
 u32 VAR_6;

 FUNC_1(VAR_0->ccwlock, VAR_3);
 VAR_2 = VAR_0->private->cmb;
 if (!VAR_2)
  goto out;

 VAR_4 = VAR_2->hw_block;
 switch (VAR_1) {
 case 137:
  VAR_5 = FUNC_0(VAR_4->device_connect_time,
     VAR_4->function_pending_time,
     VAR_4->device_disconnect_time,
     VAR_0->private->cmb_start_time);
  goto out;
 case 128:
  VAR_5 = VAR_4->ssch_rsch_count;
  goto out;
 case 129:
  VAR_5 = VAR_4->sample_count;
  goto out;
 case 133:
  VAR_6 = VAR_4->device_connect_time;
  break;
 case 131:
  VAR_6 = VAR_4->function_pending_time;
  break;
 case 132:
  VAR_6 = VAR_4->device_disconnect_time;
  break;
 case 136:
  VAR_6 = VAR_4->control_unit_queuing_time;
  break;
 case 135:
  VAR_6 = VAR_4->device_active_only_time;
  break;
 case 134:
  VAR_6 = VAR_4->device_busy_time;
  break;
 case 130:
  VAR_6 = VAR_4->initial_command_response_time;
  break;
 default:
  goto out;
 }
 VAR_5 = FUNC_3(VAR_6, VAR_4->sample_count);
out:
 FUNC_2(VAR_0->ccwlock, VAR_3);
 return VAR_5;
}
