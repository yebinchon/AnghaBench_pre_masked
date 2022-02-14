
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ head; } ;
struct sg_ent {int * addr; } ;
struct pci_dev {int dummy; } ;
struct deferred_unmap_info {void** addr; struct pci_dev* pdev; } ;
typedef void* dma_addr_t ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0, struct pci_dev *VAR_1,
         const struct sg_ent *VAR_2, int VAR_3)
{
 dma_addr_t *VAR_4;
 struct deferred_unmap_info *VAR_5;

 VAR_5 = (struct deferred_unmap_info *)VAR_0->head;
 VAR_5->pdev = VAR_1;
 for (VAR_4 = VAR_5->addr; VAR_3 >= 3; VAR_2++, VAR_3 -= 3) {
  *VAR_4++ = FUNC_0(VAR_2->addr[0]);
  *VAR_4++ = FUNC_0(VAR_2->addr[1]);
 }
 if (VAR_3)
  *VAR_4 = FUNC_0(VAR_2->addr[0]);
}
