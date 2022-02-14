
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {int mdix; scalar_t__ id; int disable_polarity_correction; TYPE_1__ ops; scalar_t__ reset_disable; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int ) ;

s32 FUNC_6(struct e1000_hw *VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_11->phy;
 s32 VAR_13;
 u16 VAR_14;

 if (VAR_12->reset_disable)
  return 0;


 VAR_13 = VAR_12->ops.read_reg(VAR_11, VAR_3, &VAR_14);
 if (VAR_13)
  return VAR_13;
 VAR_14 &= ~VAR_5;

 switch (VAR_12->mdix) {
 case 1:
  VAR_14 |= VAR_7;
  break;
 case 2:
  VAR_14 |= VAR_6;
  break;
 case 3:

  if (VAR_12->id != VAR_9) {
   VAR_14 |= VAR_4;
   break;
  }

 case 0:
 default:
  VAR_14 |= VAR_5;
  break;
 }







 VAR_14 &= ~VAR_8;
 if (VAR_12->disable_polarity_correction == 1)
  VAR_14 |= VAR_8;


 if (VAR_12->id == VAR_10) {
  VAR_14 &= ~VAR_1;
  VAR_13 =
      VAR_12->ops.write_reg(VAR_11, VAR_3, VAR_14);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_1(VAR_11);
  if (VAR_13) {
   FUNC_0("Error committing the PHY changes\n");
   return VAR_13;
  }
 }

 VAR_14 &= ~VAR_2;
 VAR_14 |= VAR_0;
 VAR_14 |= VAR_1;

 VAR_13 = VAR_12->ops.write_reg(VAR_11, VAR_3, VAR_14);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13) {
  FUNC_0("Error committing the PHY changes\n");
  return VAR_13;
 }
 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13)
  return VAR_13;

 return 0;
}
