
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ptag_state; int * mcc_tag_status; int * mcc_wait; } ;
struct beiscsi_hba {TYPE_2__ ctrl; int state; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {scalar_t__ size; int dma; int va; } ;
struct TYPE_3__ {int tag_state; struct be_dma_mem tag_mem_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*,unsigned int) ;
 int FUNC_1 (struct beiscsi_hba*,unsigned int,struct be_mcc_wrb**,struct be_dma_mem*) ;
 scalar_t__ FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 () ;

int FUNC_11(struct beiscsi_hba *VAR_12,
       unsigned int VAR_13,
       struct be_mcc_wrb **VAR_14,
       struct be_dma_mem *VAR_15)
{
 int VAR_16 = 0;

 if (!VAR_13 || VAR_13 > VAR_9) {
  FUNC_0(VAR_12, VAR_8,
         "BC_%d : invalid tag %u\n", VAR_13);
  return -VAR_6;
 }

 if (FUNC_2(VAR_12)) {
  FUNC_4(VAR_10,
     &VAR_12->ctrl.ptag_state[VAR_13].tag_state);
  return -VAR_7;
 }


 VAR_16 = FUNC_9(VAR_12->ctrl.mcc_wait[VAR_13],
           VAR_12->ctrl.mcc_tag_status[VAR_13],
           FUNC_6(
      VAR_1));





 if (!FUNC_8(VAR_0, &VAR_12->state)) {
  FUNC_4(VAR_10,
     &VAR_12->ctrl.ptag_state[VAR_13].tag_state);
  return -VAR_7;
 }





 if (VAR_16 <= 0) {
  struct be_dma_mem *VAR_17;







  VAR_17 = &VAR_12->ctrl.ptag_state[VAR_13].tag_mem_state;
  if (VAR_15) {
   VAR_17->size = VAR_15->size;
   VAR_17->va = VAR_15->va;
   VAR_17->dma = VAR_15->dma;
  } else
   VAR_17->size = 0;


  FUNC_10();
  FUNC_7(VAR_11,
    &VAR_12->ctrl.ptag_state[VAR_13].tag_state);

  FUNC_3(VAR_12, VAR_8,
       VAR_4 | VAR_3 |
       VAR_2,
       "BC_%d : MBX Cmd Completion timed out\n");
  return -VAR_5;
 }

 VAR_16 = FUNC_1(VAR_12, VAR_13, VAR_14, VAR_15);

 FUNC_5(&VAR_12->ctrl, VAR_13);
 return VAR_16;
}
