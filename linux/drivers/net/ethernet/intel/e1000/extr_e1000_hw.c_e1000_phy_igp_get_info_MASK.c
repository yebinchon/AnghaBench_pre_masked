
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_phy_info {int cable_length; void* remote_rx; void* local_rx; scalar_t__ mdix_mode; int cable_polarity; int polarity_correction; int extended_10bt_distance; scalar_t__ downshift; } ;
struct e1000_hw {scalar_t__ speed_downgraded; } ;
typedef scalar_t__ s32 ;
typedef int e1000_rev_polarity ;
typedef scalar_t__ e1000_downshift ;
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
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int*,int*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_24,
      struct e1000_phy_info *VAR_25)
{
 s32 VAR_26;
 u16 VAR_27, VAR_28, VAR_29, VAR_30;
 e1000_rev_polarity VAR_31;




 VAR_25->downshift = (e1000_downshift) VAR_24->speed_downgraded;


 VAR_25->extended_10bt_distance = VAR_13;


 VAR_25->polarity_correction = VAR_23;


 VAR_26 = FUNC_0(VAR_24, &VAR_31);
 if (VAR_26)
  return VAR_26;

 VAR_25->cable_polarity = VAR_31;

 VAR_26 = FUNC_2(VAR_24, VAR_1, &VAR_27);
 if (VAR_26)
  return VAR_26;

 VAR_25->mdix_mode =
     (e1000_auto_x_mode) ((VAR_27 & VAR_2) >>
     VAR_3);

 if ((VAR_27 & VAR_5) ==
     VAR_4) {



  VAR_26 = FUNC_2(VAR_24, VAR_6, &VAR_27);
  if (VAR_26)
   return VAR_26;

  VAR_25->local_rx = ((VAR_27 & VAR_7) >>
          VAR_8) ?
      VAR_12 : VAR_11;
  VAR_25->remote_rx = ((VAR_27 & VAR_9) >>
           VAR_10) ?
      VAR_12 : VAR_11;


  VAR_26 = FUNC_1(VAR_24, &VAR_28, &VAR_29);
  if (VAR_26)
   return VAR_26;


  VAR_30 = (VAR_29 + VAR_28) / 2;

  if (VAR_30 <= VAR_21)
   VAR_25->cable_length = VAR_16;
  else if (VAR_30 <= VAR_22)
   VAR_25->cable_length = VAR_17;
  else if (VAR_30 <= VAR_19)
   VAR_25->cable_length = VAR_18;
  else if (VAR_30 <= VAR_20)
   VAR_25->cable_length = VAR_14;
  else
   VAR_25->cable_length = VAR_15;
 }

 return VAR_0;
}
