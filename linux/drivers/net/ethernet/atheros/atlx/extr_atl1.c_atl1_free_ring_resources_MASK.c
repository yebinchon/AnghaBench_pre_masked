
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct atl1_tpd_ring {scalar_t__ dma; int * desc; int * buffer_info; } ;
struct atl1_rrd_ring {scalar_t__ dma; int * desc; } ;
struct atl1_ring_header {int dma; int desc; int size; } ;
struct atl1_rfd_ring {scalar_t__ dma; int * desc; int * buffer_info; } ;
struct TYPE_4__ {int * smb; scalar_t__ dma; } ;
struct TYPE_3__ {int * cmb; scalar_t__ dma; } ;
struct atl1_adapter {TYPE_2__ smb; TYPE_1__ cmb; struct atl1_ring_header ring_header; struct atl1_rrd_ring rrd_ring; struct atl1_rfd_ring rfd_ring; struct atl1_tpd_ring tpd_ring; struct pci_dev* pdev; } ;


 int FUNC_0 (struct atl1_adapter*) ;
 int FUNC_1 (struct atl1_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct atl1_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 struct atl1_tpd_ring *VAR_2 = &VAR_0->tpd_ring;
 struct atl1_rfd_ring *VAR_3 = &VAR_0->rfd_ring;
 struct atl1_rrd_ring *VAR_4 = &VAR_0->rrd_ring;
 struct atl1_ring_header *VAR_5 = &VAR_0->ring_header;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 FUNC_2(VAR_2->buffer_info);
 FUNC_3(VAR_1, VAR_5->size, VAR_5->desc,
  VAR_5->dma);

 VAR_2->buffer_info = ((void*)0);
 VAR_2->desc = ((void*)0);
 VAR_2->dma = 0;

 VAR_3->buffer_info = ((void*)0);
 VAR_3->desc = ((void*)0);
 VAR_3->dma = 0;

 VAR_4->desc = ((void*)0);
 VAR_4->dma = 0;

 VAR_0->cmb.dma = 0;
 VAR_0->cmb.cmb = ((void*)0);

 VAR_0->smb.dma = 0;
 VAR_0->smb.smb = ((void*)0);
}
