
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {int dummy; } ;
typedef enum xhci_ep_reset_type { ____Placeholder_xhci_ep_reset_type } xhci_ep_reset_type ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_command*,int ,int ,int ,int,int) ;

int FUNC_4(struct xhci_hcd *VAR_3, struct xhci_command *VAR_4,
   int VAR_5, unsigned int VAR_6,
   enum xhci_ep_reset_type VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9 = FUNC_0(VAR_6);
 u32 VAR_10 = FUNC_2(VAR_1);

 if (VAR_7 == VAR_0)
  VAR_10 |= VAR_2;

 return FUNC_3(VAR_3, VAR_4, 0, 0, 0,
   VAR_8 | VAR_9 | VAR_10, 0);
}
