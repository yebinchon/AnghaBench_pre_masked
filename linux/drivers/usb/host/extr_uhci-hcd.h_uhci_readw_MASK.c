
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uhci_hcd {scalar_t__ io_addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(const struct uhci_hcd *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->io_addr + VAR_1);
}
