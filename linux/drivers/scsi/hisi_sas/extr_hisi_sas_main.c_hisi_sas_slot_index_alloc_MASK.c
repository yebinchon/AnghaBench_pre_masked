
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; } ;
struct hisi_hba {int slot_index_count; int last_slot_index; int lock; void* slot_index_tags; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (struct hisi_hba*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hisi_hba *VAR_2,
         struct scsi_cmnd *VAR_3)
{
 int VAR_4;
 void *VAR_5 = VAR_2->slot_index_tags;
 unsigned long VAR_6;

 if (VAR_3)
  return VAR_3->request->tag;

 FUNC_2(&VAR_2->lock, VAR_6);
 VAR_4 = FUNC_0(VAR_5, VAR_2->slot_index_count,
       VAR_2->last_slot_index + 1);
 if (VAR_4 >= VAR_2->slot_index_count) {
  VAR_4 = FUNC_0(VAR_5,
    VAR_2->slot_index_count,
    VAR_0);
  if (VAR_4 >= VAR_2->slot_index_count) {
   FUNC_3(&VAR_2->lock, VAR_6);
   return -VAR_1;
  }
 }
 FUNC_1(VAR_2, VAR_4);
 VAR_2->last_slot_index = VAR_4;
 FUNC_3(&VAR_2->lock, VAR_6);

 return VAR_4;
}
