
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct phy_device*) ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*,int ,int) ;
 int FUNC_9 (struct phy_device*,int ,int) ;
 int FUNC_10 (struct phy_device*,int ) ;
 int FUNC_11 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct phy_device *VAR_23)
{
 int VAR_24, VAR_25, VAR_26;

 VAR_24 = FUNC_10(VAR_23, VAR_8);
 if (VAR_24 < 0)
  return VAR_24;


 VAR_24 |= VAR_9;
 VAR_25 = FUNC_11(VAR_23, VAR_8, VAR_24);
 if (VAR_25 < 0)
  return VAR_25;


 VAR_24 = ~(VAR_11 |
  VAR_13 |
  VAR_12);
 VAR_25 = FUNC_11(VAR_23, VAR_10, VAR_24);
 if (VAR_25 < 0)
  return VAR_25;

 if ((FUNC_2(VAR_23) == VAR_18 ||
      FUNC_2(VAR_23) == VAR_19) &&
     (VAR_23->dev_flags & VAR_15))
  FUNC_9(VAR_23, VAR_3, 0);

 if ((VAR_23->dev_flags & VAR_17) ||
     (VAR_23->dev_flags & VAR_16) ||
     (VAR_23->dev_flags & VAR_14))
  FUNC_5(VAR_23);

 if (FUNC_2(VAR_23) == VAR_20) {
  VAR_25 = FUNC_3(VAR_23);
  if (VAR_25)
   return VAR_25;
 } else if (FUNC_2(VAR_23) == VAR_21) {
  VAR_25 = FUNC_4(VAR_23);
  if (VAR_25)
   return VAR_25;
 } else if (FUNC_2(VAR_23) == VAR_22) {

  VAR_26 = FUNC_7(VAR_23,
           VAR_0);
  VAR_26 &= ~VAR_1;
  VAR_25 = FUNC_8(VAR_23,
     VAR_0,
     VAR_26);
  if (VAR_25 < 0)
   return VAR_25;
 }

 FUNC_6(VAR_23);





 VAR_26 = FUNC_0(VAR_7) |
  FUNC_1(VAR_7);
 FUNC_9(VAR_23, VAR_2, VAR_26);

 VAR_26 = VAR_5 |
  FUNC_0(VAR_6) |
  FUNC_1(VAR_6);
 FUNC_8(VAR_23, VAR_4, VAR_26);

 return 0;
}
