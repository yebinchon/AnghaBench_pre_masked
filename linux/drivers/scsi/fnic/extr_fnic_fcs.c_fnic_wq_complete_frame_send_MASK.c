
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq_buf {struct sk_buff* os_buf; int len; int dma_addr; } ;
struct vnic_wq {int vdev; } ;
struct sk_buff {int dummy; } ;
struct fnic {TYPE_1__* pdev; } ;
struct fc_frame {int dummy; } ;
struct cq_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct fc_frame*) ;
 struct fnic* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vnic_wq *VAR_1,
     struct cq_desc *VAR_2,
     struct vnic_wq_buf *VAR_3, void *VAR_4)
{
 struct sk_buff *VAR_5 = VAR_3->os_buf;
 struct fc_frame *VAR_6 = (struct fc_frame *)VAR_5;
 struct fnic *VAR_7 = FUNC_3(VAR_1->vdev);

 FUNC_1(&VAR_7->pdev->dev, VAR_3->dma_addr, VAR_3->len,
    VAR_0);
 FUNC_0(FUNC_2(VAR_6));
 VAR_3->os_buf = ((void*)0);
}
