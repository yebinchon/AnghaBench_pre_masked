
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ localmem_pool; } ;
struct td {int hwINFO; int td_dma; struct td* td_hash; } ;
struct ohci_hcd {int td_cache; struct td** td_hash; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct ohci_hcd*,int ) ;
 int FUNC_2 (int ,struct td*,int ) ;
 int FUNC_3 (scalar_t__,unsigned long,int) ;
 int FUNC_4 (struct ohci_hcd*,char*,struct td*) ;
 struct usb_hcd* FUNC_5 (struct ohci_hcd*) ;

__attribute__((used)) static void
FUNC_6 (struct ohci_hcd *VAR_1, struct td *VAR_2)
{
 struct td **VAR_3 = &VAR_1->td_hash [FUNC_0 (VAR_2->td_dma)];
 struct usb_hcd *VAR_4 = FUNC_5(VAR_1);

 while (*VAR_3 && *VAR_3 != VAR_2)
  VAR_3 = &(*VAR_3)->td_hash;
 if (*VAR_3)
  *VAR_3 = VAR_2->td_hash;
 else if ((VAR_2->hwINFO & FUNC_1(VAR_1, VAR_0)) != 0)
  FUNC_4 (VAR_1, "no hash for td %p\n", VAR_2);

 if (VAR_4->localmem_pool)
  FUNC_3(VAR_4->localmem_pool, (unsigned long)VAR_2,
         sizeof(*VAR_2));
 else
  FUNC_2(VAR_1->td_cache, VAR_2, VAR_2->td_dma);
}
