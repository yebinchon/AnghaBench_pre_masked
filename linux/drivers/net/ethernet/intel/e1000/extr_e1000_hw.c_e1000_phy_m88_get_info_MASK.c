
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {void* remote_rx; void* local_rx; scalar_t__ cable_length; scalar_t__ mdix_mode; int cable_polarity; int polarity_correction; int extended_10bt_distance; scalar_t__ downshift; } ;
struct e1000_hw {scalar_t__ speed_downgraded; } ;
typedef scalar_t__ s32 ;
typedef int e1000_rev_polarity ;
typedef scalar_t__ e1000_downshift ;
typedef scalar_t__ e1000_cable_length ;
typedef scalar_t__ e1000_auto_x_mode ;


 scalar_t__ VAR_0 ;
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
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_24,
      struct e1000_phy_info *VAR_25)
{
 s32 VAR_26;
 u16 VAR_27;
 e1000_rev_polarity VAR_28;




 VAR_25->downshift = (e1000_downshift) VAR_24->speed_downgraded;

 VAR_26 = FUNC_1(VAR_24, VAR_1, &VAR_27);
 if (VAR_26)
  return VAR_26;

 VAR_25->extended_10bt_distance =
     ((VAR_27 & VAR_3) >>
      VAR_4) ?
     VAR_20 :
     VAR_21;

 VAR_25->polarity_correction =
     ((VAR_27 & VAR_5) >>
      VAR_6) ?
     VAR_22 : VAR_23;


 VAR_26 = FUNC_0(VAR_24, &VAR_28);
 if (VAR_26)
  return VAR_26;
 VAR_25->cable_polarity = VAR_28;

 VAR_26 = FUNC_1(VAR_24, VAR_2, &VAR_27);
 if (VAR_26)
  return VAR_26;

 VAR_25->mdix_mode =
     (e1000_auto_x_mode) ((VAR_27 & VAR_10) >>
     VAR_11);

 if ((VAR_27 & VAR_12) == VAR_7) {



  VAR_25->cable_length =
      (e1000_cable_length) ((VAR_27 &
        VAR_8) >>
       VAR_9);

  VAR_26 = FUNC_1(VAR_24, VAR_13, &VAR_27);
  if (VAR_26)
   return VAR_26;

  VAR_25->local_rx = ((VAR_27 & VAR_14) >>
          VAR_15) ?
      VAR_19 : VAR_18;
  VAR_25->remote_rx = ((VAR_27 & VAR_16) >>
           VAR_17) ?
      VAR_19 : VAR_18;
 }

 return VAR_0;
}
