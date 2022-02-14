
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int desc_sz; } ;
struct sdhci_adma2_64_desc {void* addr_hi; void* addr_lo; void* len; void* cmd; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct sdhci_host *VAR_1, void **VAR_2,
      dma_addr_t VAR_3, int VAR_4, unsigned int VAR_5)
{
 struct sdhci_adma2_64_desc *VAR_6 = *VAR_2;


 VAR_6->cmd = FUNC_0(VAR_5);
 VAR_6->len = FUNC_0(VAR_4);
 VAR_6->addr_lo = FUNC_1(FUNC_2(VAR_3));

 if (VAR_1->flags & VAR_0)
  VAR_6->addr_hi = FUNC_1(FUNC_3(VAR_3));

 *VAR_2 += VAR_1->desc_sz;
}
