
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* get_cable_length ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {int polarity_correction; int is_mdix; void* remote_rx; void* local_rx; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_12->phy;
 s32 VAR_14;
 u16 VAR_15;
 bool VAR_16;

 VAR_14 = FUNC_1(VAR_12, 1, 0, &VAR_16);
 if (VAR_14)
  return VAR_14;

 if (!VAR_16) {
  FUNC_3("Phy info is only valid if link is up\n");
  return -VAR_1;
 }

 VAR_13->polarity_correction = 1;

 VAR_14 = FUNC_0(VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_2, &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_13->is_mdix = !!(VAR_15 & VAR_3);

 if ((VAR_15 & VAR_5) ==
     VAR_4) {
  VAR_14 = VAR_13->ops.get_cable_length(VAR_12);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_2(VAR_12, VAR_8, &VAR_15);
  if (VAR_14)
   return VAR_14;

  VAR_13->local_rx = (VAR_15 & VAR_6)
      ? VAR_10 : VAR_9;

  VAR_13->remote_rx = (VAR_15 & VAR_7)
      ? VAR_10 : VAR_9;
 } else {
  VAR_13->cable_length = VAR_0;
  VAR_13->local_rx = VAR_11;
  VAR_13->remote_rx = VAR_11;
 }

 return VAR_14;
}
