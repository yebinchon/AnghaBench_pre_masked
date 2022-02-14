
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_uio_dev {int ll2_buf_size; int ll2_buf; int ll2_ring_size; int ll2_ring; struct qedi_uio_ctrl* uctrl; struct qedi_ctx* qedi; } ;
struct qedi_uio_ctrl {scalar_t__ host_rx_bd_cons; scalar_t__ hw_rx_bd_prod; scalar_t__ hw_rx_prod; scalar_t__ host_rx_cons; } ;
struct qedi_ctx {int ll2_lock; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qedi_uio_dev *VAR_0)
{
 struct qedi_ctx *VAR_1 = ((void*)0);
 struct qedi_uio_ctrl *VAR_2 = ((void*)0);

 VAR_1 = VAR_0->qedi;
 VAR_2 = VAR_0->uctrl;

 FUNC_1(&VAR_1->ll2_lock);
 VAR_2->host_rx_cons = 0;
 VAR_2->hw_rx_prod = 0;
 VAR_2->hw_rx_bd_prod = 0;
 VAR_2->host_rx_bd_cons = 0;

 FUNC_0(VAR_0->ll2_ring, 0, VAR_0->ll2_ring_size);
 FUNC_0(VAR_0->ll2_buf, 0, VAR_0->ll2_buf_size);
 FUNC_2(&VAR_1->ll2_lock);
}
