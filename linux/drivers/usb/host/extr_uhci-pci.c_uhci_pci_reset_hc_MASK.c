
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int io_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct uhci_hcd*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct uhci_hcd *VAR_0)
{
 FUNC_2(FUNC_0(FUNC_1(VAR_0)), VAR_0->io_addr);
}
