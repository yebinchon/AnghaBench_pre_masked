
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ mac_type; int phy_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct e1000_hw*) ;

 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_20)
{
 u32 VAR_21;
 s32 VAR_22;
 u16 VAR_23;




 if ((VAR_20->mac_type >= VAR_18) && (VAR_20->mac_type != VAR_19))
  return VAR_9;




 VAR_21 = FUNC_2(VAR_0);
 VAR_21 |= (VAR_3 | VAR_2);
 VAR_21 &= ~(VAR_8 | VAR_4);

 switch (VAR_20->phy_type) {
 case 128:
  VAR_22 = FUNC_1(VAR_20, VAR_15, &VAR_23);
  if (VAR_22)
   return VAR_22;

  if (VAR_23 & VAR_16)
   VAR_21 |= VAR_1;
  else
   VAR_21 &= ~VAR_1;

  if (VAR_23 & VAR_17)
   VAR_21 |= VAR_6;
  else
   VAR_21 |= VAR_5;

  FUNC_0(VAR_20);
  break;
 default:



  VAR_22 = FUNC_1(VAR_20, VAR_10,
          &VAR_23);
  if (VAR_22)
   return VAR_22;

  if (VAR_23 & VAR_13)
   VAR_21 |= VAR_1;
  else
   VAR_21 &= ~VAR_1;

  FUNC_0(VAR_20);




  if ((VAR_23 & VAR_14) == VAR_11)
   VAR_21 |= VAR_7;
  else if ((VAR_23 & VAR_14) ==
    VAR_12)
   VAR_21 |= VAR_6;
 }


 FUNC_3(VAR_0, VAR_21);
 return VAR_9;
}
