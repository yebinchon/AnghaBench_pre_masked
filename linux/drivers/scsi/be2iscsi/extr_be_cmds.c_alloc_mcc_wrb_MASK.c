
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct be_queue_info {scalar_t__ used; scalar_t__ len; int head; } ;
struct TYPE_4__ {struct be_queue_info q; } ;
struct TYPE_6__ {size_t mcc_tag_available; unsigned int* mcc_tag; size_t mcc_alloc_index; int mcc_lock; TYPE_2__* ptag_state; scalar_t__* mcc_tag_status; TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {TYPE_3__ ctrl; } ;
struct be_mcc_wrb {unsigned int tag0; } ;
struct TYPE_5__ {int * cbfn; scalar_t__ tag_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,char*,scalar_t__,size_t) ;
 int FUNC_1 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_2 (struct be_queue_info*) ;
 struct be_mcc_wrb* FUNC_3 (struct be_queue_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct be_mcc_wrb *FUNC_6(struct beiscsi_hba *VAR_7,
     unsigned int *VAR_8)
{
 struct be_queue_info *VAR_9 = &VAR_7->ctrl.mcc_obj.q;
 struct be_mcc_wrb *VAR_10 = ((void*)0);
 unsigned int VAR_11;

 FUNC_4(&VAR_7->ctrl.mcc_lock);
 if (VAR_9->used == VAR_9->len) {
  FUNC_0(VAR_7, VAR_3, VAR_1 |
       VAR_0 | VAR_2,
       "BC_%d : MCC queue full: WRB used %u tag avail %u\n",
       VAR_9->used, VAR_7->ctrl.mcc_tag_available);
  goto alloc_failed;
 }

 if (!VAR_7->ctrl.mcc_tag_available)
  goto alloc_failed;

 VAR_11 = VAR_7->ctrl.mcc_tag[VAR_7->ctrl.mcc_alloc_index];
 if (!VAR_11) {
  FUNC_0(VAR_7, VAR_3, VAR_1 |
       VAR_0 | VAR_2,
       "BC_%d : MCC tag 0 allocated: tag avail %u alloc index %u\n",
       VAR_7->ctrl.mcc_tag_available,
       VAR_7->ctrl.mcc_alloc_index);
  goto alloc_failed;
 }


 *VAR_8 = VAR_11;
 VAR_7->ctrl.mcc_tag[VAR_7->ctrl.mcc_alloc_index] = 0;
 VAR_7->ctrl.mcc_tag_status[VAR_11] = 0;
 VAR_7->ctrl.ptag_state[VAR_11].tag_state = 0;
 VAR_7->ctrl.ptag_state[VAR_11].cbfn = ((void*)0);
 VAR_7->ctrl.mcc_tag_available--;
 if (VAR_7->ctrl.mcc_alloc_index == (VAR_4 - 1))
  VAR_7->ctrl.mcc_alloc_index = 0;
 else
  VAR_7->ctrl.mcc_alloc_index++;

 VAR_10 = FUNC_3(VAR_9);
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->tag0 = VAR_11;
 VAR_10->tag0 |= (VAR_9->head << VAR_6) & VAR_5;
 FUNC_2(VAR_9);
 VAR_9->used++;

alloc_failed:
 FUNC_5(&VAR_7->ctrl.mcc_lock);
 return VAR_10;
}
