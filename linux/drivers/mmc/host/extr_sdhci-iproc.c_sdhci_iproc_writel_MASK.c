
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int clock; scalar_t__ ioaddr; int mmc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct sdhci_host *VAR_0, u32 VAR_1, int VAR_2)
{
 FUNC_1("%s: writel [0x%02x] 0x%08x\n",
   FUNC_0(VAR_0->mmc), VAR_2, VAR_1);

 FUNC_3(VAR_1, VAR_0->ioaddr + VAR_2);

 if (VAR_0->clock <= 400000) {

  if (VAR_0->clock)
   FUNC_2((4 * 1000000 + VAR_0->clock - 1) / VAR_0->clock);
  else
   FUNC_2(10);
 }
}
