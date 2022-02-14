
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int mdix; int disable_polarity_correction; scalar_t__ phy_revision; scalar_t__ phy_id; scalar_t__ phy_reset_disable; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_19)
{
 s32 VAR_20;
 u16 VAR_21;

 if (VAR_19->phy_reset_disable)
  return VAR_1;


 VAR_20 = FUNC_1(VAR_19, VAR_8, &VAR_21);
 if (VAR_20)
  return VAR_20;

 VAR_21 |= VAR_9;
 VAR_21 &= ~VAR_11;

 switch (VAR_19->mdix) {
 case 1:
  VAR_21 |= VAR_13;
  break;
 case 2:
  VAR_21 |= VAR_12;
  break;
 case 3:
  VAR_21 |= VAR_10;
  break;
 case 0:
 default:
  VAR_21 |= VAR_11;
  break;
 }







 VAR_21 &= ~VAR_14;
 if (VAR_19->disable_polarity_correction == 1)
  VAR_21 |= VAR_14;
 VAR_20 = FUNC_2(VAR_19, VAR_8, VAR_21);
 if (VAR_20)
  return VAR_20;

 if (VAR_19->phy_revision < VAR_15) {



  VAR_20 =
      FUNC_1(VAR_19, VAR_7,
           &VAR_21);
  if (VAR_20)
   return VAR_20;

  VAR_21 |= VAR_6;

  if ((VAR_19->phy_revision == VAR_0) &&
      (VAR_19->phy_id == VAR_16)) {

   VAR_21 &= ~(VAR_18);
   VAR_21 |= VAR_17;
   VAR_20 = FUNC_2(VAR_19,
            VAR_7,
            VAR_21);
   if (VAR_20)
    return VAR_20;
  } else {

   VAR_21 &= ~(VAR_3 |
          VAR_5);
   VAR_21 |= (VAR_2 |
         VAR_4);
   VAR_20 = FUNC_2(VAR_19,
            VAR_7,
            VAR_21);
   if (VAR_20)
    return VAR_20;
  }
 }


 VAR_20 = FUNC_0(VAR_19);
 if (VAR_20) {
  FUNC_3("Error Resetting the PHY\n");
  return VAR_20;
 }

 return VAR_1;
}
