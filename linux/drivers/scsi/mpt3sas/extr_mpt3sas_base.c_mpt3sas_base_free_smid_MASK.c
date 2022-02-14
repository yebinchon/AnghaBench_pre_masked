
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct scsiio_tracker {int dummy; } ;
struct MPT3SAS_ADAPTER {scalar_t__ hi_priority_smid; scalar_t__ internal_smid; scalar_t__ hba_queue_depth; int scsi_lookup_lock; int internal_free_list; TYPE_2__* internal_lookup; int hpr_free_list; TYPE_1__* hpr_lookup; int request_sz; } ;
struct TYPE_4__ {int cb_idx; int tracker_list; } ;
struct TYPE_3__ {int cb_idx; int tracker_list; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 struct scsiio_tracker* FUNC_1 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,struct scsiio_tracker*) ;
 void* FUNC_5 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (VAR_1 < VAR_0->hi_priority_smid) {
  struct scsiio_tracker *VAR_4;
  void *VAR_5;

  VAR_4 = FUNC_1(VAR_0, VAR_1);
  if (!VAR_4) {
   FUNC_0(VAR_0);
   return;
  }


  VAR_5 = FUNC_5(VAR_0, VAR_1);
  FUNC_3(VAR_5, 0, VAR_0->request_sz);

  FUNC_4(VAR_0, VAR_4);
  FUNC_0(VAR_0);
  return;
 }

 FUNC_6(&VAR_0->scsi_lookup_lock, VAR_2);
 if (VAR_1 < VAR_0->internal_smid) {

  VAR_3 = VAR_1 - VAR_0->hi_priority_smid;
  VAR_0->hpr_lookup[VAR_3].cb_idx = 0xFF;
  FUNC_2(&VAR_0->hpr_lookup[VAR_3].tracker_list, &VAR_0->hpr_free_list);
 } else if (VAR_1 <= VAR_0->hba_queue_depth) {

  VAR_3 = VAR_1 - VAR_0->internal_smid;
  VAR_0->internal_lookup[VAR_3].cb_idx = 0xFF;
  FUNC_2(&VAR_0->internal_lookup[VAR_3].tracker_list,
      &VAR_0->internal_free_list);
 }
 FUNC_7(&VAR_0->scsi_lookup_lock, VAR_2);
}
