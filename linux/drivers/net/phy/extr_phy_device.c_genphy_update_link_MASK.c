
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; int autoneg_complete; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ) ;

int FUNC_2(struct phy_device *VAR_6)
{
 int VAR_7 = 0, VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;




 if (VAR_8 & VAR_1)
  goto done;





 if (!FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  else if (VAR_7 & VAR_3)
   goto done;
 }


 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
done:
 VAR_6->link = VAR_7 & VAR_3 ? 1 : 0;
 VAR_6->autoneg_complete = VAR_7 & VAR_2 ? 1 : 0;




 if (VAR_6->autoneg == VAR_0 && !VAR_6->autoneg_complete)
  VAR_6->link = 0;

 return 0;
}
