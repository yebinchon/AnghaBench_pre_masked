
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ usb_hc_current_limit; scalar_t__ mains_current_limit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct smb347_charger *VAR_5)
{
 int VAR_6;

 if (VAR_5->pdata->mains_current_limit) {
  VAR_6 = FUNC_1(VAR_4, FUNC_0(VAR_4),
        VAR_5->pdata->mains_current_limit);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_5->regmap, VAR_0,
      VAR_1,
      VAR_6 << VAR_2);
  if (VAR_6 < 0)
   return VAR_6;
 }

 if (VAR_5->pdata->usb_hc_current_limit) {
  VAR_6 = FUNC_1(VAR_4, FUNC_0(VAR_4),
        VAR_5->pdata->usb_hc_current_limit);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_5->regmap, VAR_0,
      VAR_3, VAR_6);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
