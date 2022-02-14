
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnic_wq_buf {int len; int dma_addr; struct snic_host_req* os_buf; } ;
struct vnic_wq {int vdev; } ;
struct TYPE_5__ {int * next; } ;
struct snic_req_info {scalar_t__ sge_va; TYPE_2__ list; } ;
struct snic_host_req {int dummy; } ;
struct snic {int shost; int spl_cmd_lock; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 struct snic_req_info* FUNC_6 (struct snic_host_req*) ;
 int FUNC_7 (struct snic*,struct snic_req_info*) ;
 int FUNC_8 (struct snic*,struct snic_req_info*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct snic* FUNC_11 (int ) ;

void
FUNC_12(struct vnic_wq *VAR_1, struct vnic_wq_buf *VAR_2)
{

 struct snic_host_req *VAR_3 = VAR_2->os_buf;
 struct snic *VAR_4 = FUNC_11(VAR_1->vdev);
 struct snic_req_info *VAR_5 = ((void*)0);
 unsigned long VAR_6;

 FUNC_2(&VAR_4->pdev->dev, VAR_2->dma_addr, VAR_2->len,
    VAR_0);

 VAR_5 = FUNC_6(VAR_3);
 FUNC_9(&VAR_4->spl_cmd_lock, VAR_6);
 if (FUNC_5(&VAR_5->list)) {
  FUNC_10(&VAR_4->spl_cmd_lock, VAR_6);
  goto end;
 }

 FUNC_0(VAR_5->list.next == ((void*)0));
 FUNC_4(&VAR_5->list);
 FUNC_10(&VAR_4->spl_cmd_lock, VAR_6);

 if (VAR_5->sge_va) {
  FUNC_7(VAR_4, VAR_5);
  FUNC_3((void *)VAR_5->sge_va);
  VAR_5->sge_va = 0;
 }
 FUNC_8(VAR_4, VAR_5);
 FUNC_1(VAR_4->shost, "snic_free_wq_buf .. freed.\n");

end:
 return;
}
