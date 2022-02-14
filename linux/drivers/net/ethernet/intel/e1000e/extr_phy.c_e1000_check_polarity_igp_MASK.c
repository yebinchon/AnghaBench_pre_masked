
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {int cable_polarity; } ;
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
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int*) ;

s32 FUNC_1(struct e1000_hw *VAR_8)
{
 struct e1000_phy_info *VAR_9 = &VAR_8->phy;
 s32 VAR_10;
 u16 VAR_11, VAR_12, VAR_13;




 VAR_10 = FUNC_0(VAR_8, VAR_2, &VAR_11);
 if (VAR_10)
  return VAR_10;

 if ((VAR_11 & VAR_5) ==
     VAR_4) {
  VAR_12 = VAR_0;
  VAR_13 = VAR_1;
 } else {



  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
 }

 VAR_10 = FUNC_0(VAR_8, VAR_12, &VAR_11);

 if (!VAR_10)
  VAR_9->cable_polarity = ((VAR_11 & VAR_13)
           ? VAR_7
           : VAR_6);

 return VAR_10;
}
