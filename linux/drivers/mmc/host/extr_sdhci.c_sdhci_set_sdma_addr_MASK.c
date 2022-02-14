
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ v4_mode; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_1, dma_addr_t VAR_2)
{
 if (VAR_1->v4_mode)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2, VAR_0);
}
