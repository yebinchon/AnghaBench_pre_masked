
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev_ring {int base_align; int desc_count; int desc_size; int size; int size_unaligned; } ;


 void* FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct vnic_dev_ring *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2)
{






 unsigned int VAR_3 = 32;
 unsigned int VAR_4 = 16;

 VAR_0->base_align = 512;

 if (VAR_1 == 0)
  VAR_1 = 4096;

 VAR_0->desc_count = FUNC_0(VAR_1, VAR_3);

 VAR_0->desc_size = FUNC_0(VAR_2, VAR_4);

 VAR_0->size = VAR_0->desc_count * VAR_0->desc_size;
 VAR_0->size_unaligned = VAR_0->size + VAR_0->base_align;

 return VAR_0->size_unaligned;
}
