
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; scalar_t__ ioaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_3(struct sdhci_host *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_0->ioaddr + VAR_1);

 FUNC_1("%s: readl [0x%02x] 0x%08x\n",
   FUNC_0(VAR_0->mmc), VAR_1, VAR_2);
 return VAR_2;
}
