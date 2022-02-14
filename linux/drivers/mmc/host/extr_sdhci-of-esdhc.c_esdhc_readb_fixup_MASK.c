
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct sdhci_host *VAR_2,
         int VAR_3, u32 VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;
 int VAR_7 = (VAR_3 & 0x3) * 8;

 VAR_5 = (VAR_4 >> VAR_7) & 0xff;





 if (VAR_3 == VAR_1) {

  VAR_6 = (VAR_4 >> 5) & VAR_0;

  VAR_5 &= ~VAR_0;
  VAR_5 |= VAR_6;
 }
 return VAR_5;
}
