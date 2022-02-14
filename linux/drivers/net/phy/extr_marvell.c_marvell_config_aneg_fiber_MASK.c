
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; int advertising; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct phy_device *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8->autoneg != VAR_2)
  return FUNC_1(VAR_8);


 FUNC_3(VAR_8->advertising, VAR_8->advertising,
       VAR_8->supported);


 VAR_11 = FUNC_4(VAR_8, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = VAR_11;
 VAR_11 &= ~(VAR_1 | VAR_0
  | VAR_5);
 VAR_11 |= FUNC_2(VAR_8->advertising);

 if (VAR_11 != VAR_12) {
  VAR_10 = FUNC_5(VAR_8, VAR_6, VAR_11);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = 1;
 }

 if (VAR_9 == 0) {



  int VAR_13 = FUNC_4(VAR_8, VAR_7);

  if (VAR_13 < 0)
   return VAR_13;

  if (!(VAR_13 & VAR_3) || (VAR_13 & VAR_4))
   VAR_9 = 1;
 }




 if (VAR_9 > 0)
  VAR_9 = FUNC_0(VAR_8);

 return VAR_9;
}
