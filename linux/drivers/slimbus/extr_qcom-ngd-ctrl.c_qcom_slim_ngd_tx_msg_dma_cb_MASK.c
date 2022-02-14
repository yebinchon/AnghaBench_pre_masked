
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_dma_desc {int * comp; struct qcom_slim_ngd_ctrl* ctrl; } ;
struct qcom_slim_ngd_ctrl {int tx_head; int tx_buf_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct qcom_slim_ngd_dma_desc *VAR_2 = VAR_1;
 struct qcom_slim_ngd_ctrl *VAR_3 = VAR_2->ctrl;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->tx_buf_lock, VAR_4);

 if (VAR_2->comp) {
  FUNC_0(VAR_2->comp);
  VAR_2->comp = ((void*)0);
 }

 VAR_3->tx_head = (VAR_3->tx_head + 1) % VAR_0;
 FUNC_2(&VAR_3->tx_buf_lock, VAR_4);
}
