
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int * desc; int dma; int size; } ;
struct atl1c_adapter {int * rx_page; TYPE_1__* tpd_ring; TYPE_2__ ring_header; struct pci_dev* pdev; } ;
struct TYPE_3__ {int * buffer_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*,int ,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct atl1c_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_1(VAR_1, VAR_0->ring_header.size,
     VAR_0->ring_header.desc,
     VAR_0->ring_header.dma);
 VAR_0->ring_header.desc = ((void*)0);



 if (VAR_0->tpd_ring[0].buffer_info) {
  FUNC_0(VAR_0->tpd_ring[0].buffer_info);
  VAR_0->tpd_ring[0].buffer_info = ((void*)0);
 }
 if (VAR_0->rx_page) {
  FUNC_2(VAR_0->rx_page);
  VAR_0->rx_page = ((void*)0);
 }
}
