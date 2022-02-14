
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsc8531_private {int nleds; int* leds_mode; } ;
struct phy_device {struct vsc8531_private* priv; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct phy_device*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_0,
        u32 *VAR_1)
{
 struct vsc8531_private *VAR_2 = VAR_0->priv;
 char VAR_3[28];
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->nleds; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, "vsc8531,led-%d-mode", VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_0, VAR_3,
           VAR_1[VAR_4]);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_2->leds_mode[VAR_4] = VAR_5;
 }

 return 0;
}
