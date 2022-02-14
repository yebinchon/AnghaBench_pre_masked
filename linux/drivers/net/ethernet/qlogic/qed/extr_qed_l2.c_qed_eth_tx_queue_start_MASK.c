
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_txq_start_ret_params {void* p_handle; int p_doorbell; } ;
struct qed_queue_start_common_params {int dummy; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_hwfn {int cdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_queue_cid*,int ,int ,int ,int *) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_queue_cid*) ;
 struct qed_queue_cid* FUNC_3 (struct qed_hwfn*,int ,int,struct qed_queue_start_common_params*) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_queue_cid*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct qed_hwfn *VAR_1,
         u16 VAR_2,
         struct qed_queue_start_common_params *VAR_3,
         u8 VAR_4,
         dma_addr_t VAR_5,
         u16 VAR_6,
         struct qed_txq_start_ret_params *VAR_7)
{
 struct qed_queue_cid *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_1, VAR_2, 0, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_0(VAR_1->cdev))
  VAR_9 = FUNC_1(VAR_1, VAR_8, VAR_4,
            VAR_5, VAR_6,
            &VAR_7->p_doorbell);
 else
  VAR_9 = FUNC_4(VAR_1, VAR_8,
      VAR_5, VAR_6,
      &VAR_7->p_doorbell);

 if (VAR_9)
  FUNC_2(VAR_1, VAR_8);
 else
  VAR_7->p_handle = (void *)VAR_8;

 return VAR_9;
}
