
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ localmem_pool; } ;
struct ohci_hcd {int ed_cache; } ;
struct ed {int dma; } ;


 int FUNC_0 (int ,struct ed*,int ) ;
 int FUNC_1 (scalar_t__,unsigned long,int) ;
 struct usb_hcd* FUNC_2 (struct ohci_hcd*) ;

__attribute__((used)) static void
FUNC_3 (struct ohci_hcd *VAR_0, struct ed *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->localmem_pool)
  FUNC_1(VAR_2->localmem_pool, (unsigned long)VAR_1,
         sizeof(*VAR_1));
 else
  FUNC_0(VAR_0->ed_cache, VAR_1, VAR_1->dma);
}
