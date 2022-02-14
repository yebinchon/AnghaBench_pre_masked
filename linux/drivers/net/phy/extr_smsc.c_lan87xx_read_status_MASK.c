
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc_phy_priv {scalar_t__ energy_enable; } ;
struct phy_device {int link; struct smsc_phy_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_3)
{
 struct smsc_phy_priv *VAR_4 = VAR_3->priv;

 int VAR_5 = FUNC_0(VAR_3);

 if (!VAR_3->link && VAR_4->energy_enable) {
  int VAR_6;


  int VAR_7 = FUNC_2(VAR_3, VAR_0);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_3, VAR_0,
          VAR_7 & ~VAR_1);
  if (VAR_7 < 0)
   return VAR_7;


  for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {

   FUNC_1(10);
   VAR_7 = FUNC_2(VAR_3, VAR_0);
   if (VAR_7 < 0)
    return VAR_7;
   if (VAR_7 & VAR_2)
    break;
  }


  VAR_7 = FUNC_2(VAR_3, VAR_0);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_3, VAR_0,
          VAR_7 | VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return VAR_5;
}
