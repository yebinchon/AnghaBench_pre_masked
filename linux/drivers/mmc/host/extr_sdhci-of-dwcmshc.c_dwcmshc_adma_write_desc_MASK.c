
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sdhci_host*,void**,int,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_1, void **VAR_2,
        dma_addr_t VAR_3, int VAR_4, unsigned int VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_1(!VAR_4 || FUNC_0(VAR_3, VAR_4))) {
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return;
 }

 VAR_7 = VAR_3 & (VAR_0 - 1);
 VAR_6 = VAR_0 - VAR_7;
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6, VAR_5);

 VAR_3 += VAR_6;
 VAR_4 -= VAR_6;
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
