
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xhci_port {int addr; } ;
struct xhci_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_6,
          struct xhci_port *VAR_7, u16 VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7->addr);
 VAR_9 = FUNC_2(VAR_9);

 if (VAR_8 & VAR_3)
  VAR_9 |= VAR_0;
 else
  VAR_9 &= ~VAR_0;

 if (VAR_8 & VAR_4)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;

 if (VAR_8 & VAR_5)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;

 FUNC_1(VAR_9, VAR_7->addr);
}
