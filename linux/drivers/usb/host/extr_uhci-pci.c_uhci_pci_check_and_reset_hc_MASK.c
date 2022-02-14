
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int io_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct uhci_hcd*) ;

__attribute__((used)) static int FUNC_3(struct uhci_hcd *VAR_0)
{
 return FUNC_1(FUNC_0(FUNC_2(VAR_0)),
    VAR_0->io_addr);
}
