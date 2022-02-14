
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int mains_online; int usb_online; int lock; TYPE_1__* pdata; int regmap; } ;
struct TYPE_2__ {scalar_t__ use_usb; scalar_t__ use_mains; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct smb347_charger *VAR_3)
{
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->regmap, VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;





 if (VAR_3->pdata->use_mains)
  VAR_5 = !(VAR_6 & VAR_1);
 if (VAR_3->pdata->use_usb)
  VAR_4 = !(VAR_6 & VAR_2);

 FUNC_0(&VAR_3->lock);
 VAR_7 = VAR_3->mains_online != VAR_5 || VAR_3->usb_online != VAR_4;
 VAR_3->mains_online = VAR_5;
 VAR_3->usb_online = VAR_4;
 FUNC_1(&VAR_3->lock);

 return VAR_7;
}
