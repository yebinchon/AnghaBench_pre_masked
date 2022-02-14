
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 VAR_2 |= 0x10;
 FUNC_1(VAR_1, VAR_2, VAR_0);

 FUNC_2(9);
 VAR_2 &= ~0x10;
 FUNC_1(VAR_1, VAR_2, VAR_0);

 FUNC_3(300, 1000);
}
