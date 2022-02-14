
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; scalar_t__ desc_sz; scalar_t__ adma_addr; void* adma_table; } ;
struct sdhci_adma2_64_desc {int len; int cmd; int addr_lo; int addr_hi; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long long,int ,int ,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_2)
{
 void *VAR_3 = VAR_2->adma_table;
 dma_addr_t VAR_4 = VAR_2->adma_addr;

 FUNC_4(VAR_2);

 while (1) {
  struct sdhci_adma2_64_desc *VAR_5 = VAR_3;

  if (VAR_2->flags & VAR_1)
   FUNC_0("%08llx: DMA 0x%08x%08x, LEN 0x%04x, Attr=0x%02x\n",
       (unsigned long long)VAR_4,
       FUNC_3(VAR_5->addr_hi),
       FUNC_3(VAR_5->addr_lo),
       FUNC_2(VAR_5->len),
       FUNC_2(VAR_5->cmd));
  else
   FUNC_0("%08llx: DMA 0x%08x, LEN 0x%04x, Attr=0x%02x\n",
       (unsigned long long)VAR_4,
       FUNC_3(VAR_5->addr_lo),
       FUNC_2(VAR_5->len),
       FUNC_2(VAR_5->cmd));

  VAR_3 += VAR_2->desc_sz;
  VAR_4 += VAR_2->desc_sz;

  if (VAR_5->cmd & FUNC_1(VAR_0))
   break;
 }
}
