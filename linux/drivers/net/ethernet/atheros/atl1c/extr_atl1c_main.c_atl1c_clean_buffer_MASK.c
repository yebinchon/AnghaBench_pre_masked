
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct atl1c_buffer {int flags; int * skb; scalar_t__ dma; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atl1c_buffer*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct pci_dev *VAR_6,
    struct atl1c_buffer *VAR_7)
{
 u16 VAR_8;
 if (VAR_7->flags & VAR_0)
  return;
 if (VAR_7->dma) {
  if (VAR_7->flags & VAR_1)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_5;

  if (VAR_7->flags & VAR_3)
   FUNC_3(VAR_6, VAR_7->dma,
     VAR_7->length, VAR_8);
  else if (VAR_7->flags & VAR_2)
   FUNC_2(VAR_6, VAR_7->dma,
     VAR_7->length, VAR_8);
 }
 if (VAR_7->skb)
  FUNC_1(VAR_7->skb);
 VAR_7->dma = 0;
 VAR_7->skb = ((void*)0);
 FUNC_0(VAR_7, VAR_0);
}
