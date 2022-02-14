
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {int dummy; } ;
typedef enum xhci_setup_dev { ____Placeholder_xhci_setup_dev } xhci_setup_dev ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_command*,int ,int ,int ,int,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct xhci_hcd *VAR_3, struct xhci_command *VAR_4,
  dma_addr_t VAR_5, u32 VAR_6, enum xhci_setup_dev VAR_7)
{
 return FUNC_3(VAR_3, VAR_4, FUNC_2(VAR_5),
   FUNC_4(VAR_5), 0,
   FUNC_1(VAR_1) | FUNC_0(VAR_6)
   | (VAR_7 == VAR_0 ? VAR_2 : 0), 0);
}
