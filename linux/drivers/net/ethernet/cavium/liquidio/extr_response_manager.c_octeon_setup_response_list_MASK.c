
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct octeon_device* ctxptr; int work; } ;
struct cavium_wq {TYPE_3__ wk; int wq; } ;
struct octeon_device {int cmd_resp_state; struct cavium_wq dma_comp_wq; TYPE_2__* pci_dev; int cmd_resp_wqlock; TYPE_1__* response_list; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int pending_req_count; int lock; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct octeon_device *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct cavium_wq *VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_1(&VAR_5->response_list[VAR_6].head);
  FUNC_5(&VAR_5->response_list[VAR_6].lock);
  FUNC_3(&VAR_5->response_list[VAR_6].pending_req_count, 0);
 }
 FUNC_5(&VAR_5->cmd_resp_wqlock);

 VAR_5->dma_comp_wq.wq = FUNC_2("dma-comp", VAR_3, 0);
 if (!VAR_5->dma_comp_wq.wq) {
  FUNC_4(&VAR_5->pci_dev->dev, "failed to create wq thread\n");
  return -VAR_0;
 }

 VAR_8 = &VAR_5->dma_comp_wq;
 FUNC_0(&VAR_8->wk.work, VAR_4);
 VAR_8->wk.ctxptr = VAR_5;
 VAR_5->cmd_resp_state = VAR_2;

 return VAR_7;
}
