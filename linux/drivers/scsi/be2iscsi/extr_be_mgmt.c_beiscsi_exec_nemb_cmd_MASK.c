
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct be_ctrl_info {TYPE_2__* pdev; int mbox_lock; TYPE_1__* ptag_state; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {int dma; int va; int size; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void (* cbfn ) (struct beiscsi_hba*,unsigned int) ;struct be_dma_mem tag_mem_state; int tag_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct be_mcc_wrb* FUNC_0 (struct beiscsi_hba*,unsigned int*) ;
 int FUNC_1 (struct beiscsi_hba*,unsigned int) ;
 int FUNC_2 (struct be_mcc_wrb*,int ,int,int) ;
 int FUNC_3 (struct beiscsi_hba*,unsigned int,int *,struct be_dma_mem*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct be_sge* FUNC_10 (struct be_mcc_wrb*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct beiscsi_hba *VAR_4,
     struct be_dma_mem *VAR_5,
     void (*VAR_6)(struct beiscsi_hba *,
           unsigned int),
     void *VAR_7, u32 VAR_8)
{
 struct be_ctrl_info *VAR_9 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_10;
 struct be_sge *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;

 FUNC_8(&VAR_9->mbox_lock);
 VAR_10 = FUNC_0(VAR_4, &VAR_12);
 if (!VAR_10) {
  FUNC_9(&VAR_9->mbox_lock);
  VAR_13 = -VAR_2;
  goto free_cmd;
 }

 VAR_11 = FUNC_10(VAR_10);
 FUNC_2(VAR_10, VAR_5->size, 0, 1);
 VAR_11->pa_hi = FUNC_4(FUNC_12(VAR_5->dma));
 VAR_11->pa_lo = FUNC_4(FUNC_6(VAR_5->dma));
 VAR_11->len = FUNC_4(VAR_5->size);

 if (VAR_6) {
  struct be_dma_mem *VAR_14;

  FUNC_11(VAR_3, &VAR_9->ptag_state[VAR_12].tag_state);
  VAR_9->ptag_state[VAR_12].cbfn = VAR_6;
  VAR_14 = &VAR_4->ctrl.ptag_state[VAR_12].tag_mem_state;


  VAR_14->size = VAR_5->size;
  VAR_14->va = VAR_5->va;
  VAR_14->dma = VAR_5->dma;
 }
 FUNC_1(VAR_4, VAR_12);
 FUNC_9(&VAR_9->mbox_lock);


 if (VAR_6)
  return 0;

 VAR_13 = FUNC_3(VAR_4, VAR_12, ((void*)0), VAR_5);


 if (VAR_7)
  FUNC_7(VAR_7, VAR_5->va, VAR_8);





 if (VAR_13 == -VAR_0)
  return VAR_13;





 if (VAR_13 == -VAR_1)
  return VAR_13;

free_cmd:
 FUNC_5(&VAR_9->pdev->dev, VAR_5->size,
       VAR_5->va, VAR_5->dma);
 return VAR_13;
}
