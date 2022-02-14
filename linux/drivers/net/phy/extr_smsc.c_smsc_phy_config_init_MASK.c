
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc_phy_priv {scalar_t__ energy_enable; } ;
struct phy_device {struct smsc_phy_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_2)
{
 struct smsc_phy_priv *VAR_3 = VAR_2->priv;

 int VAR_4 = FUNC_0(VAR_2, VAR_0);

 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->energy_enable) {

  VAR_4 = FUNC_1(VAR_2, VAR_0,
          VAR_4 | VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return FUNC_2(VAR_2);
}
