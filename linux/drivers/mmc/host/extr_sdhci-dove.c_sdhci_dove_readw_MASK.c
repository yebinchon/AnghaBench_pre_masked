
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {int ioaddr; } ;




 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct sdhci_host *VAR_0, int VAR_1)
{
 u16 VAR_2;

 switch (VAR_1) {
 case 129:
 case 128:

  return 0;
 default:
  VAR_2 = FUNC_0(VAR_0->ioaddr + VAR_1);
 }
 return VAR_2;
}
