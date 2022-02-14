
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_command*,int ,int ,int ,int,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct xhci_hcd *VAR_1,
  struct xhci_command *VAR_2, dma_addr_t VAR_3,
  u32 VAR_4, bool VAR_5)
{
 return FUNC_3(VAR_1, VAR_2, FUNC_2(VAR_3),
   FUNC_4(VAR_3), 0,
   FUNC_1(VAR_0) | FUNC_0(VAR_4),
   VAR_5);
}
