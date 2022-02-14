
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(struct sdhci_host *VAR_4, int VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_1(VAR_4->ioaddr + VAR_5);

  VAR_6 = VAR_7 & VAR_3;
  VAR_6 |= (VAR_7 >> 5) & VAR_2;
  VAR_6 |= (VAR_7 & VAR_0);
  VAR_6 |= (VAR_7 & VAR_1) << 3;
  return VAR_6;
 }

 return FUNC_0(VAR_4->ioaddr + VAR_5);
}
