
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {int enable_control; scalar_t__ use_usb_otg; int use_usb; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct smb347_charger*) ;
 int FUNC_2 (struct smb347_charger*) ;
 int FUNC_3 (struct smb347_charger*) ;
 int FUNC_4 (struct smb347_charger*) ;
 int FUNC_5 (struct smb347_charger*,int) ;
 int FUNC_6 (struct smb347_charger*) ;
 int FUNC_7 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_8(struct smb347_charger *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_10, 1);
 if (VAR_12 < 0)
  return VAR_12;





 VAR_12 = FUNC_1(VAR_10);
 if (VAR_12 < 0)
  goto fail;

 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12 < 0)
  goto fail;

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12 < 0)
  goto fail;

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12 < 0)
  goto fail;


 if (!VAR_10->pdata->use_usb) {
  VAR_12 = FUNC_0(VAR_10->regmap, VAR_8,
      VAR_9,
      VAR_9);
  if (VAR_12 < 0)
   goto fail;
 }





 VAR_12 = FUNC_0(VAR_10->regmap, VAR_0, VAR_2,
  VAR_10->pdata->use_usb_otg ? VAR_1 : 0);
 if (VAR_12 < 0)
  goto fail;






 switch (VAR_10->pdata->enable_control) {
 case 128:
  VAR_11 = VAR_6;
  break;
 case 129:
  VAR_11 = VAR_5;
  break;
 default:
  VAR_11 = 0;
  break;
 }

 VAR_12 = FUNC_0(VAR_10->regmap, VAR_3, VAR_7,
     VAR_11);
 if (VAR_12 < 0)
  goto fail;


 VAR_12 = FUNC_0(VAR_10->regmap, VAR_3, VAR_4, 0);
 if (VAR_12 < 0)
  goto fail;

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12 < 0)
  goto fail;

 VAR_12 = FUNC_6(VAR_10);

fail:
 FUNC_5(VAR_10, 0);
 return VAR_12;
}
