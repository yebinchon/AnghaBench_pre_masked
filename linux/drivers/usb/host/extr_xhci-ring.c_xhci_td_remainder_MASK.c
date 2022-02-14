
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xhci_hcd {int hci_version; int quirks; } ;
struct urb {TYPE_1__* ep; } ;
struct TYPE_2__ {int desc; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(struct xhci_hcd *VAR_1, int VAR_2,
         int VAR_3, unsigned int VAR_4,
         struct urb *VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8;


 if (VAR_1->hci_version < 0x100 && !(VAR_1->quirks & VAR_0))
  return ((VAR_4 - VAR_2) >> 10);


 if (!VAR_6 || (VAR_2 == 0 && VAR_3 == 0) ||
     VAR_3 == VAR_4)
  return 0;


 if ((VAR_1->quirks & VAR_0) && (VAR_1->hci_version < 0x100))
  VAR_3 = 0;

 VAR_7 = FUNC_1(&VAR_5->ep->desc);
 VAR_8 = FUNC_0(VAR_4, VAR_7);


 return (VAR_8 - ((VAR_2 + VAR_3) / VAR_7));
}
