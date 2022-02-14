
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* handler_data; } ;
struct rdac_queue_data {int entry; TYPE_1__* h; void* callback_data; int callback_fn; } ;
struct rdac_controller {int ms_queued; int ms_lock; int ms_work; struct scsi_device* ms_sdev; int ms_head; } ;
typedef int activate_complete ;
struct TYPE_2__ {struct rdac_controller* ctlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rdac_queue_data* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_4,
    activate_complete VAR_5, void *VAR_6)
{
 struct rdac_queue_data *VAR_7;
 struct rdac_controller *VAR_8;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return VAR_2;

 VAR_7->h = VAR_4->handler_data;
 VAR_7->callback_fn = VAR_5;
 VAR_7->callback_data = VAR_6;

 VAR_8 = VAR_7->h->ctlr;
 FUNC_3(&VAR_8->ms_lock);
 FUNC_1(&VAR_7->entry, &VAR_8->ms_head);
 if (!VAR_8->ms_queued) {
  VAR_8->ms_queued = 1;
  VAR_8->ms_sdev = VAR_4;
  FUNC_2(VAR_3, &VAR_8->ms_work);
 }
 FUNC_4(&VAR_8->ms_lock);
 return VAR_1;
}
