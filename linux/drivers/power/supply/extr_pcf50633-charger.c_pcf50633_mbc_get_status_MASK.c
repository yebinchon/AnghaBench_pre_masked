
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633_mbc {scalar_t__ adapter_online; scalar_t__ usb_online; int pcf; } ;
struct pcf50633 {int mbc_pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 struct pcf50633_mbc* FUNC_1 (int ) ;

int FUNC_2(struct pcf50633 *VAR_14)
{
 struct pcf50633_mbc *VAR_15 = FUNC_1(VAR_14->mbc_pdev);
 int VAR_16 = 0;
 u8 VAR_17;

 if (!VAR_15)
  return 0;

 VAR_17 = FUNC_0(VAR_15->pcf, VAR_13)
  & VAR_4;

 if (VAR_15->usb_online)
  VAR_16 |= VAR_12;
 if (VAR_17 == VAR_7 ||
     VAR_17 == VAR_8 ||
     VAR_17 == VAR_5 ||
     VAR_17 == VAR_6)
  VAR_16 |= VAR_11;
 if (VAR_15->adapter_online)
  VAR_16 |= VAR_10;
 if (VAR_17 == VAR_2 ||
     VAR_17 == VAR_3 ||
     VAR_17 == VAR_0 ||
     VAR_17 == VAR_1)
  VAR_16 |= VAR_9;

 return VAR_16;
}
