
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_event {int node; int evt_type; } ;
struct scsi_device {int list_lock; int event_work; int event_list; int supported_events; } ;


 int FUNC_0 (struct scsi_event*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct scsi_device *VAR_0, struct scsi_event *VAR_1)
{
 unsigned long VAR_2;
 FUNC_3(&VAR_0->list_lock, VAR_2);
 FUNC_1(&VAR_1->node, &VAR_0->event_list);
 FUNC_2(&VAR_0->event_work);
 FUNC_4(&VAR_0->list_lock, VAR_2);
}
