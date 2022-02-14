
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (unsigned char) ;
 int VAR_0 ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_1,
         unsigned char VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 VAR_3 |= FUNC_0(VAR_2);
 FUNC_2(VAR_1, VAR_3, VAR_0);
}
