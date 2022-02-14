
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ sdev_state; int state_mutex; int request_queue; int * quiesced_by; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*,int ) ;

void FUNC_4(struct scsi_device *VAR_2)
{




 FUNC_1(&VAR_2->state_mutex);
 if (VAR_2->quiesced_by) {
  VAR_2->quiesced_by = ((void*)0);
  FUNC_0(VAR_2->request_queue);
 }
 if (VAR_2->sdev_state == VAR_0)
  FUNC_3(VAR_2, VAR_1);
 FUNC_2(&VAR_2->state_mutex);
}
