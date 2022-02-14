
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int quirks2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct sdhci_host *VAR_5,
         int VAR_6, u8 VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u8 VAR_11;
 int VAR_12 = (VAR_6 & 0x3) * 8;





 if (VAR_6 == VAR_3)
  return VAR_8;




 if (VAR_6 == VAR_2) {




  if (VAR_5->quirks2 & VAR_4)
   return VAR_8;


  VAR_10 = (VAR_7 & VAR_1) << 5;
  VAR_9 = (VAR_8 & (~(VAR_1 << 5))) | VAR_10;
  VAR_11 = (VAR_7 & (~VAR_1)) |
        (VAR_8 & VAR_1);
  VAR_9 = (VAR_9 & (~0xff)) | VAR_11;


  VAR_9 &= ~VAR_0;
  return VAR_9;
 }

 VAR_9 = (VAR_8 & (~(0xff << VAR_12))) | (VAR_7 << VAR_12);
 return VAR_9;
}
