
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* des3; } ;
struct dma_extended_desc {TYPE_1__ basic; } ;
struct dma_desc {void* des3; } ;
typedef scalar_t__ dma_addr_t ;


 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, dma_addr_t VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{




 int VAR_4;
 dma_addr_t VAR_5 = VAR_1;

 if (VAR_3) {
  struct dma_extended_desc *VAR_6 = (struct dma_extended_desc *)VAR_0;
  for (VAR_4 = 0; VAR_4 < (VAR_2 - 1); VAR_4++) {
   VAR_5 += sizeof(struct dma_extended_desc);
   VAR_6->basic.des3 = FUNC_0((unsigned int)VAR_5);
   VAR_6++;
  }
  VAR_6->basic.des3 = FUNC_0((unsigned int)VAR_1);

 } else {
  struct dma_desc *VAR_7 = (struct dma_desc *)VAR_0;
  for (VAR_4 = 0; VAR_4 < (VAR_2 - 1); VAR_4++) {
   VAR_5 += sizeof(struct dma_desc);
   VAR_7->des3 = FUNC_0((unsigned int)VAR_5);
   VAR_7++;
  }
  VAR_7->des3 = FUNC_0((unsigned int)VAR_1);
 }
}
