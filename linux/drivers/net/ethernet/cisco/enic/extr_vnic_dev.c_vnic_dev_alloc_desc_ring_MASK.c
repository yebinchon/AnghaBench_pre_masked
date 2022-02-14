
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnic_dev_ring {int base_addr_unaligned; int base_addr; scalar_t__ desc_count; scalar_t__ desc_avail; scalar_t__ descs_unaligned; int * descs; int base_align; scalar_t__ size; int size_unaligned; } ;
struct vnic_dev {int pdev; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (struct vnic_dev*,char*,int) ;
 int FUNC_3 (struct vnic_dev_ring*) ;
 int FUNC_4 (struct vnic_dev_ring*,unsigned int,unsigned int) ;

int FUNC_5(struct vnic_dev *VAR_1, struct vnic_dev_ring *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4)
{
 FUNC_4(VAR_2, VAR_3, VAR_4);

 VAR_2->descs_unaligned = FUNC_1(VAR_1->pdev,
  VAR_2->size_unaligned,
  &VAR_2->base_addr_unaligned);

 if (!VAR_2->descs_unaligned) {
  FUNC_2(VAR_1, "Failed to allocate ring (size=%d), aborting\n",
    (int)VAR_2->size);
  return -VAR_0;
 }

 VAR_2->base_addr = FUNC_0(VAR_2->base_addr_unaligned,
  VAR_2->base_align);
 VAR_2->descs = (u8 *)VAR_2->descs_unaligned +
  (VAR_2->base_addr - VAR_2->base_addr_unaligned);

 FUNC_3(VAR_2);

 VAR_2->desc_avail = VAR_2->desc_count - 1;

 return 0;
}
