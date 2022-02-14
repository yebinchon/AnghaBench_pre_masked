
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_3, dma_addr_t VAR_4)
{
 FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_0);
 if (VAR_3->flags & VAR_2)
  FUNC_1(VAR_3, FUNC_2(VAR_4), VAR_1);
}
