
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b53_device*) ;
 struct phy_device* FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct phy_device*) ;

int FUNC_3(struct dsa_switch *VAR_2, int VAR_3, int VAR_4)
{
 struct b53_device *VAR_5 = VAR_2->priv;
 struct phy_device *VAR_6;

 if (VAR_4 == VAR_1) {
  return FUNC_0(VAR_5);
 } else if (VAR_4 == VAR_0) {
  VAR_6 = FUNC_1(VAR_2, VAR_3);
  if (!VAR_6)
   return 0;

  return FUNC_2(VAR_6);
 }

 return 0;
}
