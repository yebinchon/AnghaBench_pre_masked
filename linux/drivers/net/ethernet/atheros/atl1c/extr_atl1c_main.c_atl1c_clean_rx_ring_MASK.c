
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct atl1c_rrd_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct atl1c_rfd_ring {int count; scalar_t__ next_to_use; scalar_t__ next_to_clean; int size; int desc; struct atl1c_buffer* buffer_info; } ;
struct atl1c_buffer {int dummy; } ;
struct atl1c_adapter {struct pci_dev* pdev; struct atl1c_rrd_ring rrd_ring; struct atl1c_rfd_ring rfd_ring; } ;


 int FUNC_0 (struct pci_dev*,struct atl1c_buffer*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct atl1c_adapter *VAR_0)
{
 struct atl1c_rfd_ring *VAR_1 = &VAR_0->rfd_ring;
 struct atl1c_rrd_ring *VAR_2 = &VAR_0->rrd_ring;
 struct atl1c_buffer *VAR_3;
 struct pci_dev *VAR_4 = VAR_0->pdev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++) {
  VAR_3 = &VAR_1->buffer_info[VAR_5];
  FUNC_0(VAR_4, VAR_3);
 }

 FUNC_1(VAR_1->desc, 0, VAR_1->size);
 VAR_1->next_to_clean = 0;
 VAR_1->next_to_use = 0;
 VAR_2->next_to_use = 0;
 VAR_2->next_to_clean = 0;
}
