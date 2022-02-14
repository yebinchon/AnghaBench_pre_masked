
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {TYPE_1__* ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* adma_write_desc ) (struct sdhci_host*,void**,int ,int,unsigned int) ;} ;


 int FUNC_0 (struct sdhci_host*,void**,int ,int,unsigned int) ;
 int FUNC_1 (struct sdhci_host*,void**,int ,int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct sdhci_host *VAR_0,
        void **VAR_1, dma_addr_t VAR_2,
        int VAR_3, unsigned int VAR_4)
{
 if (VAR_0->ops->adma_write_desc)
  VAR_0->ops->adma_write_desc(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
