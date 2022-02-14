
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int mdix; int disable_polarity_correction; scalar_t__ revision; scalar_t__ id; TYPE_1__ ops; scalar_t__ reset_disable; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_18)
{
 struct e1000_phy_info *VAR_19 = &VAR_18->phy;
 s32 VAR_20;
 u16 VAR_21;

 if (VAR_19->reset_disable) {
  VAR_20 = 0;
  goto out;
 }


 VAR_20 = VAR_19->ops.read_reg(VAR_18, VAR_8, &VAR_21);
 if (VAR_20)
  goto out;

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

 VAR_20 = VAR_19->ops.write_reg(VAR_18, VAR_8, VAR_21);
 if (VAR_20)
  goto out;

 if (VAR_19->revision < VAR_1) {



  VAR_20 = VAR_19->ops.read_reg(VAR_18, VAR_7,
         &VAR_21);
  if (VAR_20)
   goto out;

  VAR_21 |= VAR_6;

  if ((VAR_19->revision == VAR_0) &&
      (VAR_19->id == VAR_15)) {

   VAR_21 &= ~VAR_17;
   VAR_21 |= VAR_16;
  } else {

   VAR_21 &= ~(VAR_3 |
          VAR_5);
   VAR_21 |= (VAR_2 |
         VAR_4);
  }
  VAR_20 = VAR_19->ops.write_reg(VAR_18, VAR_7,
          VAR_21);
  if (VAR_20)
   goto out;
 }


 VAR_20 = FUNC_1(VAR_18);
 if (VAR_20) {
  FUNC_0("Error committing the PHY changes\n");
  goto out;
 }

out:
 return VAR_20;
}
