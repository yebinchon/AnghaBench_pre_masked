
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {scalar_t__ autoneg_wait_to_complete; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct e1000_hw *VAR_2)
{
 struct e1000_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4;
 u16 VAR_5;
 bool VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_2, &VAR_5);

 VAR_4 = FUNC_3(VAR_2, VAR_0, VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_5(1);

 if (VAR_3->autoneg_wait_to_complete) {
  FUNC_4("Waiting for forced speed/duplex link on 82577 phy\n");

  VAR_4 = FUNC_1(VAR_2, VAR_1,
            100000, &VAR_6);
  if (VAR_4)
   return VAR_4;

  if (!VAR_6)
   FUNC_4("Link taking longer than expected.\n");


  VAR_4 = FUNC_1(VAR_2, VAR_1,
            100000, &VAR_6);
 }

 return VAR_4;
}
