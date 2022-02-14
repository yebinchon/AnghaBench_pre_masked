
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ntb_transport_qp {int qp_num; int tx_free_q; int ntb_tx_free_q_lock; int link_is_up; TYPE_1__* ndev; } ;
struct ntb_queue_entry {int flags; scalar_t__ len; int * buf; int * cb_data; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int) ;
 struct ntb_queue_entry* FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;
 int FUNC_5 (struct ntb_transport_qp*) ;

__attribute__((used)) static void FUNC_6(struct ntb_transport_qp *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->ndev->pdev;
 struct ntb_queue_entry *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_2->link_is_up)
  return;

 FUNC_1(&VAR_3->dev, "qp %d: Send Link Down\n", VAR_2->qp_num);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_3(&VAR_2->ntb_tx_free_q_lock, &VAR_2->tx_free_q);
  if (VAR_4)
   break;
  FUNC_2(100);
 }

 if (!VAR_4)
  return;

 VAR_4->cb_data = ((void*)0);
 VAR_4->buf = ((void*)0);
 VAR_4->len = 0;
 VAR_4->flags = VAR_0;

 VAR_6 = FUNC_4(VAR_2, VAR_4);
 if (VAR_6)
  FUNC_0(&VAR_3->dev, "ntb: QP%d unable to send linkdown msg\n",
   VAR_2->qp_num);

 FUNC_5(VAR_2);
}
