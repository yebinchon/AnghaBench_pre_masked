
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ media_type; scalar_t__ mac_type; int get_link_status; scalar_t__ forced_speed_duplex; int tbi_compatibility_on; scalar_t__ tbi_compatibility_en; int autoneg; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int*,int*) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;

s32 FUNC_12(struct e1000_hw *VAR_26)
{
 u32 VAR_27 = 0;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u32 VAR_31;
 u32 VAR_32 = 0;
 s32 VAR_33;
 u16 VAR_34;

 VAR_28 = FUNC_10(VAR_0);
 VAR_29 = FUNC_10(VAR_17);





 if ((VAR_26->media_type == VAR_24) ||
     (VAR_26->media_type == VAR_25)) {
  VAR_27 = FUNC_10(VAR_15);

  if (VAR_26->media_type == VAR_24) {
   VAR_32 =
       (VAR_26->mac_type >
        VAR_21) ? VAR_1 : 0;
   if (VAR_29 & VAR_5)
    VAR_26->get_link_status = 0;
  }
 }







 if ((VAR_26->media_type == VAR_23) && VAR_26->get_link_status) {





  VAR_33 = FUNC_8(VAR_26, VAR_13, &VAR_34);
  if (VAR_33)
   return VAR_33;
  VAR_33 = FUNC_8(VAR_26, VAR_13, &VAR_34);
  if (VAR_33)
   return VAR_33;

  if (VAR_34 & VAR_12) {
   VAR_26->get_link_status = 0;



   FUNC_0(VAR_26);
   if ((VAR_26->mac_type == VAR_21 ||
        VAR_26->mac_type == VAR_20) &&
       (!VAR_26->autoneg) &&
       (VAR_26->forced_speed_duplex == VAR_18 ||
        VAR_26->forced_speed_duplex == VAR_19)) {
    FUNC_11(VAR_9, 0xffffffff);
    VAR_33 =
        FUNC_7(VAR_26);
    VAR_31 = FUNC_10(VAR_7);
    FUNC_11(VAR_8, (VAR_31 & ~VAR_3));
    FUNC_11(VAR_10, VAR_11);
   }

  } else {

   FUNC_3(VAR_26, 0);
   return 0;
  }




  if (!VAR_26->autoneg)
   return -VAR_2;


  FUNC_3(VAR_26, 1);
  if ((VAR_26->mac_type >= VAR_21) &&
      (VAR_26->mac_type != VAR_22))
   FUNC_2(VAR_26);
  else {
   VAR_33 = FUNC_5(VAR_26);
   if (VAR_33) {
    FUNC_9
        ("Error configuring MAC to PHY settings\n");
    return VAR_33;
   }
  }






  VAR_33 = FUNC_4(VAR_26);
  if (VAR_33) {
   FUNC_9("Error configuring flow control\n");
   return VAR_33;
  }
  if (VAR_26->tbi_compatibility_en) {
   u16 VAR_35, VAR_36;

   VAR_33 =
       FUNC_6(VAR_26, &VAR_35, &VAR_36);

   if (VAR_33) {
    FUNC_9
        ("Error getting link speed and duplex\n");
    return VAR_33;
   }
   if (VAR_35 != VAR_16) {



    if (VAR_26->tbi_compatibility_on) {



     VAR_30 = FUNC_10(VAR_14);
     VAR_30 &= ~VAR_4;
     FUNC_11(VAR_14, VAR_30);
     VAR_26->tbi_compatibility_on = 0;
    }
   } else {






    if (!VAR_26->tbi_compatibility_on) {
     VAR_26->tbi_compatibility_on = 1;
     VAR_30 = FUNC_10(VAR_14);
     VAR_30 |= VAR_4;
     FUNC_11(VAR_14, VAR_30);
    }
   }
  }
 }

 if ((VAR_26->media_type == VAR_24) ||
     (VAR_26->media_type == VAR_25))
  FUNC_1(VAR_26);

 return VAR_6;
}
