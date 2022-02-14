
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_cdns_priv {scalar_t__ hrs_addr; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sdhci_cdns_priv *VAR_2, u32 VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_2->hrs_addr + VAR_0);
 VAR_4 &= ~VAR_1;
 VAR_4 |= FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_4, VAR_2->hrs_addr + VAR_0);
}
