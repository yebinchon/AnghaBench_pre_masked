
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev_ring {int * descs; int base_addr_unaligned; int descs_unaligned; int size_unaligned; } ;
struct vnic_dev {int pdev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(struct vnic_dev *VAR_0, struct vnic_dev_ring *VAR_1)
{
 if (VAR_1->descs) {
  FUNC_0(VAR_0->pdev,
   VAR_1->size_unaligned,
   VAR_1->descs_unaligned,
   VAR_1->base_addr_unaligned);
  VAR_1->descs = ((void*)0);
 }
}
