
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_slim_ngd_dma_desc {int * base; struct completion* comp; } ;
struct qcom_slim_ngd_ctrl {int tx_tail; int tx_head; int tx_buf_lock; int * tx_base; struct qcom_slim_ngd_dma_desc* txdesc; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u32 *FUNC_2(struct qcom_slim_ngd_ctrl *VAR_2, int VAR_3,
         struct completion *VAR_4)
{
 struct qcom_slim_ngd_dma_desc *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_2->tx_buf_lock, VAR_6);

 if ((VAR_2->tx_tail + 1) % VAR_0 == VAR_2->tx_head) {
  FUNC_1(&VAR_2->tx_buf_lock, VAR_6);
  return ((void*)0);
 }
 VAR_5 = &VAR_2->txdesc[VAR_2->tx_tail];
 VAR_5->base = VAR_2->tx_base + VAR_2->tx_tail * VAR_1;
 VAR_5->comp = VAR_4;
 VAR_2->tx_tail = (VAR_2->tx_tail + 1) % VAR_0;

 FUNC_1(&VAR_2->tx_buf_lock, VAR_6);

 return VAR_5->base;
}
