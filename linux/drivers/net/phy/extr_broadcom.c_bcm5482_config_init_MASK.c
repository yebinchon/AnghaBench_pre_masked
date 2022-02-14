
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; int duplex; int speed; int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int,int) ;
 int FUNC_6 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_18)
{
 int VAR_19, VAR_20;

 VAR_19 = FUNC_2(VAR_18);

 if (VAR_18->dev_flags & VAR_16) {



  VAR_20 = FUNC_4(VAR_18, VAR_4);
  FUNC_6(VAR_18, VAR_4,
         VAR_20 |
         VAR_6 |
         VAR_5);




  VAR_20 = VAR_9 | VAR_15;
  VAR_19 = FUNC_3(VAR_18, VAR_20);
  if (VAR_19 < 0)
   return VAR_19;
  VAR_19 = FUNC_5(VAR_18, VAR_20, VAR_19 |
     VAR_11 |
     VAR_10);
  if (VAR_19 < 0)
   return VAR_19;




  VAR_20 = VAR_7 | VAR_15;
  VAR_19 = FUNC_3(VAR_18, VAR_20);
  if (VAR_19 < 0)
   return VAR_19;
  VAR_19 = FUNC_5(VAR_18, VAR_20,
     VAR_19 & ~VAR_8);
  if (VAR_19 < 0)
   return VAR_19;




  VAR_20 = FUNC_4(VAR_18, VAR_2);
  FUNC_6(VAR_18, VAR_2,
         VAR_20 | VAR_3);





  FUNC_6(VAR_18, VAR_1,
   FUNC_0(VAR_12) |
   FUNC_1(VAR_13));







  VAR_18->autoneg = VAR_0;
  VAR_18->speed = VAR_17;
  VAR_18->duplex = VAR_14;
 }

 return VAR_19;
}
