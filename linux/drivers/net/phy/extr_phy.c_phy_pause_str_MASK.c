
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; scalar_t__ pause; scalar_t__ asym_pause; int advertising; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static const char *FUNC_1(struct phy_device *VAR_3)
{
 bool VAR_4, VAR_5;

 if (VAR_3->autoneg == VAR_0)
  goto no_pause;

 VAR_4 = FUNC_0(VAR_2,
     VAR_3->advertising);
 VAR_5 = FUNC_0(VAR_1,
          VAR_3->advertising);

 if (VAR_4 && VAR_3->pause)
  return "rx/tx";

 if (VAR_5 && VAR_3->asym_pause) {
  if (VAR_4)
   return "rx";
  if (VAR_3->pause)
   return "tx";
 }

no_pause:
 return "off";
}
