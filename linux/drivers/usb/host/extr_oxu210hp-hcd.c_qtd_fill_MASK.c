
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ehci_qtd {int length; void* hw_token; void** hw_buf_hi; void** hw_buf; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ehci_qtd *VAR_0, dma_addr_t VAR_1, size_t VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u64 VAR_7 = VAR_1;


 VAR_0->hw_buf[0] = FUNC_0((u32)VAR_7);
 VAR_0->hw_buf_hi[0] = FUNC_0((u32)(VAR_7 >> 32));
 VAR_6 = 0x1000 - (VAR_1 & 0x0fff);
 if (FUNC_1(VAR_2 < VAR_6))
  VAR_6 = VAR_2;
 else {
  VAR_1 += 0x1000;
  VAR_1 &= ~0x0fff;


  for (VAR_5 = 1; VAR_6 < VAR_2 && VAR_5 < 5; VAR_5++) {
   VAR_7 = VAR_1;
   VAR_0->hw_buf[VAR_5] = FUNC_0((u32)VAR_7);
   VAR_0->hw_buf_hi[VAR_5] = FUNC_0((u32)(VAR_7 >> 32));
   VAR_1 += 0x1000;
   if ((VAR_6 + 0x1000) < VAR_2)
    VAR_6 += 0x1000;
   else
    VAR_6 = VAR_2;
  }


  if (VAR_6 != VAR_2)
   VAR_6 -= (VAR_6 % VAR_4);
 }
 VAR_0->hw_token = FUNC_0((VAR_6 << 16) | VAR_3);
 VAR_0->length = VAR_6;

 return VAR_6;
}
