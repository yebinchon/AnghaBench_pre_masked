
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ntb_transport_qp {int link_is_up; int cb_data; int (* event_handler ) (int ,int ) ;int link_work; int qp_num; struct ntb_transport_ctx* transport; } ;
struct ntb_transport_ctx {TYPE_1__* ndev; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct ntb_transport_qp*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ntb_transport_qp *VAR_0)
{
 struct ntb_transport_ctx *VAR_1 = VAR_0->transport;
 struct pci_dev *VAR_2 = VAR_1->ndev->pdev;

 FUNC_1(&VAR_2->dev, "qp %d: Link Cleanup\n", VAR_0->qp_num);

 FUNC_0(&VAR_0->link_work);
 FUNC_2(VAR_0);

 if (VAR_0->event_handler)
  VAR_0->event_handler(VAR_0->cb_data, VAR_0->link_is_up);
}
