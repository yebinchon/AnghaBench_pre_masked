
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct xhci_command {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_hcd*,struct xhci_command*,int ,int ,int ,int,int) ;

int FUNC_5(struct xhci_hcd *VAR_1, struct xhci_command *VAR_2,
        int VAR_3, unsigned int VAR_4, int VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = FUNC_0(VAR_4);
 u32 VAR_8 = FUNC_3(VAR_0);
 u32 VAR_9 = FUNC_2(VAR_5);

 return FUNC_4(VAR_1, VAR_2, 0, 0, 0,
   VAR_6 | VAR_7 | VAR_8 | VAR_9, 0);
}
