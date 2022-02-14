
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_wq_buf {scalar_t__ os_buf; int len; int dma_addr; scalar_t__ sop; } ;
struct vnic_wq {int vdev; } ;
struct enic {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct enic* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vnic_wq *VAR_1, struct vnic_wq_buf *VAR_2)
{
 struct enic *VAR_3 = FUNC_3(VAR_1->vdev);

 if (VAR_2->sop)
  FUNC_2(VAR_3->pdev, VAR_2->dma_addr,
   VAR_2->len, VAR_0);
 else
  FUNC_1(VAR_3->pdev, VAR_2->dma_addr,
   VAR_2->len, VAR_0);

 if (VAR_2->os_buf)
  FUNC_0(VAR_2->os_buf);
}
