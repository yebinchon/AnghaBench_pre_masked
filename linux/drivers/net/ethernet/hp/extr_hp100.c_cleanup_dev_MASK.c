
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct hp100_private {int mode; scalar_t__ mem_ptr_virt; int page_vaddr_algn; int pci_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 struct hp100_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct hp100_private *VAR_3 = FUNC_2(VAR_2);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2->base_addr, VAR_0);

 if (VAR_3->mode == 1)
  FUNC_3(VAR_3->pci_dev, VAR_1 + 0x0f,
        VAR_3->page_vaddr_algn,
        FUNC_6(VAR_2, VAR_3->page_vaddr_algn));
 if (VAR_3->mem_ptr_virt)
  FUNC_1(VAR_3->mem_ptr_virt);

 FUNC_0(VAR_2);
}
