
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsc8531_private {int nleds; int * leds_mode; int rate_magic; } ;
struct phy_device {TYPE_1__* drv; int interface; struct vsc8531_private* priv; } ;
struct TYPE_2__ {int phy_id; int phy_id_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*,int,int ) ;
 int FUNC_5 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct vsc8531_private *VAR_8 = VAR_4->priv;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_4, VAR_4->interface);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_8->rate_magic);
 if (VAR_5)
  return VAR_5;

 VAR_7 = VAR_4->drv->phy_id & VAR_4->drv->phy_id_mask;
 if (VAR_1 == VAR_7 || VAR_3 == VAR_7 ||
     VAR_0 == VAR_7 || VAR_2 == VAR_7) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_8->nleds; VAR_6++) {
  VAR_5 = FUNC_4(VAR_4, VAR_6, VAR_8->leds_mode[VAR_6]);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
