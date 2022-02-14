
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ehci_qtd {int length; void* hw_token; void** hw_buf_hi; void** hw_buf; } ;
struct ehci_hcd {int dummy; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct ehci_hcd*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct ehci_hcd *VAR_0, struct ehci_qtd *VAR_1, dma_addr_t VAR_2,
    size_t VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 u64 VAR_8 = VAR_2;


 VAR_1->hw_buf[0] = FUNC_0(VAR_0, (u32)VAR_8);
 VAR_1->hw_buf_hi[0] = FUNC_0(VAR_0, (u32)(VAR_8 >> 32));
 VAR_7 = 0x1000 - (VAR_2 & 0x0fff);
 if (FUNC_1 (VAR_3 < VAR_7))
  VAR_7 = VAR_3;
 else {
  VAR_2 += 0x1000;
  VAR_2 &= ~0x0fff;


  for (VAR_6 = 1; VAR_7 < VAR_3 && VAR_6 < 5; VAR_6++) {
   VAR_8 = VAR_2;
   VAR_1->hw_buf[VAR_6] = FUNC_0(VAR_0, (u32)VAR_8);
   VAR_1->hw_buf_hi[VAR_6] = FUNC_0(VAR_0,
     (u32)(VAR_8 >> 32));
   VAR_2 += 0x1000;
   if ((VAR_7 + 0x1000) < VAR_3)
    VAR_7 += 0x1000;
   else
    VAR_7 = VAR_3;
  }


  if (VAR_7 != VAR_3)
   VAR_7 -= (VAR_7 % VAR_5);
 }
 VAR_1->hw_token = FUNC_0(VAR_0, (VAR_7 << 16) | VAR_4);
 VAR_1->length = VAR_7;

 return VAR_7;
}
