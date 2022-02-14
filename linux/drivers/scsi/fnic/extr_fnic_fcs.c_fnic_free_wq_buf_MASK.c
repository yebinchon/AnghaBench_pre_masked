
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq_buf {struct fc_frame* os_buf; int len; int dma_addr; } ;
struct vnic_wq {int vdev; } ;
struct fnic {TYPE_1__* pdev; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct fc_frame*) ;
 struct fnic* FUNC_3 (int ) ;

void FUNC_4(struct vnic_wq *VAR_1, struct vnic_wq_buf *VAR_2)
{
 struct fc_frame *VAR_3 = VAR_2->os_buf;
 struct fnic *VAR_4 = FUNC_3(VAR_1->vdev);

 FUNC_1(&VAR_4->pdev->dev, VAR_2->dma_addr, VAR_2->len,
    VAR_0);

 FUNC_0(FUNC_2(VAR_3));
 VAR_2->os_buf = ((void*)0);
}
