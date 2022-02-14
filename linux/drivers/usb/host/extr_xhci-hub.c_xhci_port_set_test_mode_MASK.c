
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct xhci_port {scalar_t__ addr; } ;
struct TYPE_2__ {struct xhci_port** ports; } ;
struct xhci_hcd {size_t test_mode; TYPE_1__ usb2_rhub; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_3,
 u16 VAR_4, u16 VAR_5)
{
 u32 VAR_6;
 struct xhci_port *VAR_7;


 VAR_7 = VAR_3->usb2_rhub.ports[VAR_5];
 VAR_6 = FUNC_0(VAR_7->addr + VAR_0);
 VAR_6 |= VAR_4 << VAR_1;
 FUNC_1(VAR_6, VAR_7->addr + VAR_0);
 VAR_3->test_mode = VAR_4;
 if (VAR_4 == VAR_2)
  FUNC_2(VAR_3);
}
