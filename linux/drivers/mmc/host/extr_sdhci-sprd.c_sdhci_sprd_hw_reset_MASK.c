
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_0(VAR_2->ioaddr + VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_2->ioaddr + VAR_1);

 FUNC_1(10, 20);

 VAR_3 |= VAR_0;
 FUNC_2(VAR_3, VAR_2->ioaddr + VAR_1);
 FUNC_1(300, 500);
}
