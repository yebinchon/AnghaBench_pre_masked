
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* addr_offset; void* data; } ;
struct ntb_transport_qp {int use_msi; TYPE_3__* ndev; TYPE_1__ peer_msi_desc; } ;
struct ntb_transport_ctx {unsigned int msi_spad_offset; int ndev; int use_msi; struct ntb_transport_qp* qp_vec; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,void*,void*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 void* FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ntb_transport_ctx *VAR_1,
         unsigned int VAR_2)
{
 struct ntb_transport_qp *VAR_3 = &VAR_1->qp_vec[VAR_2];
 int VAR_4 = VAR_2 * 2 + VAR_1->msi_spad_offset;

 if (!VAR_1->use_msi)
  return;

 if (VAR_4 >= FUNC_3(VAR_1->ndev))
  return;

 VAR_3->peer_msi_desc.addr_offset =
  FUNC_2(VAR_3->ndev, VAR_0, VAR_4);
 VAR_3->peer_msi_desc.data =
  FUNC_2(VAR_3->ndev, VAR_0, VAR_4 + 1);

 FUNC_0(&VAR_3->ndev->pdev->dev, "QP%d Peer MSI addr=%x data=%x\n",
  VAR_2, VAR_3->peer_msi_desc.addr_offset, VAR_3->peer_msi_desc.data);

 if (VAR_3->peer_msi_desc.addr_offset) {
  VAR_3->use_msi = 1;
  FUNC_1(&VAR_3->ndev->pdev->dev,
    "Using MSI interrupts for QP%d\n", VAR_2);
 }
}
