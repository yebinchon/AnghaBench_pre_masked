
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {int slot_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct xhci_hcd *VAR_1, int VAR_2,
  struct xhci_command *VAR_3, u32 VAR_4)
{
 if (VAR_4 == VAR_0)
  VAR_3->slot_id = VAR_2;
 else
  VAR_3->slot_id = 0;
}
