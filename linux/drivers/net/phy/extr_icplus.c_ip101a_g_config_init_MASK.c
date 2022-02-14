
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct ip101a_g_phy_priv* priv; } ;
struct ip101a_g_phy_priv {int sel_intr32; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_4)
{
 struct ip101a_g_phy_priv *VAR_5 = VAR_4->priv;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;


 switch (VAR_5->sel_intr32) {
 case 128:
  VAR_6 = FUNC_1(VAR_4, VAR_1,
     VAR_2, 0);
  if (VAR_6 < 0)
   return VAR_6;
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_4, VAR_1,
     VAR_2,
     VAR_2);
  if (VAR_6 < 0)
   return VAR_6;
  break;

 default:







  break;
 }


 VAR_7 = FUNC_2(VAR_4, VAR_3);
 VAR_7 |= VAR_0;

 return FUNC_3(VAR_4, VAR_3, VAR_7);
}
