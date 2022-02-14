
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct be_queue_info {scalar_t__ created; } ;
struct TYPE_6__ {struct be_queue_info cq; struct be_queue_info q; } ;
struct be_ctrl_info {TYPE_3__ mcc_obj; TYPE_2__* ptag_state; int * mcc_wait; int * mcc_tag_status; TYPE_1__* pdev; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_dma_mem {scalar_t__ size; int dma; int va; } ;
struct TYPE_5__ {int tag_state; struct be_dma_mem tag_mem_state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_queue_info*) ;
 int FUNC_1 (struct be_ctrl_info*,struct be_queue_info*,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct beiscsi_hba *VAR_8)
{
 struct be_ctrl_info *VAR_9 = &VAR_8->ctrl;
 struct be_dma_mem *VAR_10;
 struct be_queue_info *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = &VAR_8->ctrl.mcc_obj.q;
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_13 = VAR_12 + 1;
  if (!FUNC_4(VAR_4,
         &VAR_9->ptag_state[VAR_13].tag_state))
   continue;

  if (FUNC_4(VAR_5,
        &VAR_9->ptag_state[VAR_13].tag_state)) {
   VAR_10 = &VAR_9->ptag_state[VAR_13].tag_mem_state;
   if (VAR_10->size) {
    FUNC_2(&VAR_9->pdev->dev,
          VAR_10->size,
          VAR_10->va,
          VAR_10->dma);
    VAR_10->size = 0;
   }
   continue;
  }






  if (FUNC_5(&VAR_9->mcc_wait[VAR_13])) {
   VAR_9->mcc_tag_status[VAR_13] = VAR_3;
   VAR_9->mcc_tag_status[VAR_13] |= VAR_0;
   FUNC_6(&VAR_9->mcc_wait[VAR_13]);




   while (FUNC_4(VAR_4,
     &VAR_9->ptag_state[VAR_13].tag_state))
    FUNC_3(VAR_1);
  }




 }
 if (VAR_11->created) {
  FUNC_1(VAR_9, VAR_11, VAR_7);
  FUNC_0(VAR_8, VAR_11);
 }

 VAR_11 = &VAR_8->ctrl.mcc_obj.cq;
 if (VAR_11->created) {
  FUNC_1(VAR_9, VAR_11, VAR_6);
  FUNC_0(VAR_8, VAR_11);
 }
}
