
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {int polarity_correction; int is_mdix; void* remote_rx; void* local_rx; int cable_length; int cable_polarity; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (char*) ;

s32 FUNC_4(struct e1000_hw *VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_10->phy;
 s32 VAR_12;
 u16 VAR_13;
 bool VAR_14;

 VAR_12 = FUNC_1(VAR_10, 1, 0, &VAR_14);
 if (VAR_12)
  return VAR_12;

 if (!VAR_14) {
  FUNC_3("Phy info is only valid if link is up\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_3, &VAR_13);
 if (VAR_12)
  return VAR_12;
 VAR_11->polarity_correction = !(VAR_13 & VAR_5);

 if (VAR_11->polarity_correction) {
  VAR_12 = FUNC_0(VAR_10);
  if (VAR_12)
   return VAR_12;
 } else {

  VAR_11->cable_polarity = ((VAR_13 & VAR_6)
           ? VAR_9
           : VAR_8);
 }

 VAR_12 = FUNC_2(VAR_10, VAR_2, &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_11->is_mdix = !!(VAR_13 & VAR_4);


 VAR_11->cable_length = VAR_0;
 VAR_11->local_rx = VAR_7;
 VAR_11->remote_rx = VAR_7;

 return 0;
}
