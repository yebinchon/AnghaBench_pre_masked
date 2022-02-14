
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pcf50633_mbc {int usb; TYPE_2__* pcf; } ;
struct pcf50633 {int dev; int mbc_pdev; } ;
struct TYPE_5__ {TYPE_1__* pdata; } ;
struct TYPE_4__ {int charger_reference_current_ma; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pcf50633*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct pcf50633*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,unsigned int) ;
 struct pcf50633_mbc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct pcf50633 *VAR_12, int VAR_13)
{
 struct pcf50633_mbc *VAR_14 = FUNC_6(VAR_12->mbc_pdev);
 int VAR_15 = 0;
 u8 VAR_16;
 u8 VAR_17, VAR_18;
 unsigned int VAR_19;

 if (VAR_13 >= 1000) {
  VAR_16 = VAR_1;
  VAR_13 = 1000;
 } else if (VAR_13 >= 500) {
  VAR_16 = VAR_3;
  VAR_13 = 500;
 } else if (VAR_13 >= 100) {
  VAR_16 = VAR_2;
  VAR_13 = 100;
 } else {
  VAR_16 = VAR_5;
  VAR_13 = 0;
 }

 VAR_15 = FUNC_4(VAR_12, VAR_10,
     VAR_4, VAR_16);
 if (VAR_15)
  FUNC_0(VAR_12->dev, "error setting usb curlim to %d mA\n", VAR_13);
 else
  FUNC_1(VAR_12->dev, "usb curlim to %d mA\n", VAR_13);
 if (VAR_14->pcf->pdata->charger_reference_current_ma) {
  VAR_19 = (VAR_13 << 8) / VAR_14->pcf->pdata->charger_reference_current_ma;
  if (VAR_19 > 255)
   VAR_19 = 255;
  FUNC_5(VAR_14->pcf, VAR_9, VAR_19);
 }

 VAR_17 = FUNC_3(VAR_14->pcf, VAR_11);
 VAR_18 = (VAR_17 & VAR_7);





 if (VAR_18 != VAR_6)
  FUNC_4(VAR_12, VAR_8,
    VAR_0, VAR_0);
 else {
  FUNC_2(VAR_12, VAR_8,
    VAR_0);
  FUNC_4(VAR_12, VAR_8,
    VAR_0, VAR_0);
 }

 FUNC_7(VAR_14->usb);

 return VAR_15;
}
