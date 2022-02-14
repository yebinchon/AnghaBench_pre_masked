
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op_curr; int out_volt; int active; int supported; } ;
struct tcpm_port {scalar_t__ state; int pps_status; int pps_pending; int swap_lock; int lock; int pps_complete; int current_limit; TYPE_1__ pps_data; int supply_voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcpm_port*,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct tcpm_port *VAR_7, bool VAR_8)
{
 int VAR_9 = 0;

 FUNC_1(&VAR_7->swap_lock);
 FUNC_1(&VAR_7->lock);

 if (!VAR_7->pps_data.supported) {
  VAR_9 = -VAR_1;
  goto port_unlock;
 }


 if (!VAR_7->pps_data.active && !VAR_8)
  goto port_unlock;

 if (VAR_7->state != VAR_6) {
  VAR_9 = -VAR_0;
  goto port_unlock;
 }

 FUNC_3(&VAR_7->pps_complete);
 VAR_7->pps_status = 0;
 VAR_7->pps_pending = 1;


 if (VAR_8) {
  VAR_7->pps_data.out_volt = VAR_7->supply_voltage;
  VAR_7->pps_data.op_curr = VAR_7->current_limit;
  FUNC_4(VAR_7, VAR_5, 0);
 } else {
  FUNC_4(VAR_7, VAR_4, 0);
 }
 FUNC_2(&VAR_7->lock);

 if (!FUNC_5(&VAR_7->pps_complete,
    FUNC_0(VAR_3)))
  VAR_9 = -VAR_2;
 else
  VAR_9 = VAR_7->pps_status;

 goto swap_unlock;

port_unlock:
 FUNC_2(&VAR_7->lock);
swap_unlock:
 FUNC_2(&VAR_7->swap_lock);

 return VAR_9;
}
