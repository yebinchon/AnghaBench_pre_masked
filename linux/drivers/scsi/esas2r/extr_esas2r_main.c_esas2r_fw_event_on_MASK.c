
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {int fw_event_lock; scalar_t__ fw_events_off; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct esas2r_adapter *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->fw_event_lock, VAR_1);
 VAR_0->fw_events_off = 0;
 FUNC_1(&VAR_0->fw_event_lock, VAR_1);
}
