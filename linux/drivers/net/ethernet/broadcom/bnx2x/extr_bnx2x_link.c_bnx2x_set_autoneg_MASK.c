
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct link_vars {scalar_t__ line_speed; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int speed_cap_mask; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;

__attribute__((used)) static void FUNC_2(struct bnx2x_phy *VAR_30,
         struct link_params *VAR_31,
         struct link_vars *VAR_32,
         u8 VAR_33)
{
 struct bnx2x *VAR_34 = VAR_31->bp;
 u16 VAR_35;


 FUNC_0(VAR_34, VAR_30,
     VAR_20,
     VAR_13, &VAR_35);


 if (VAR_32->line_speed == VAR_29)
  VAR_35 |= VAR_14;
 else
  VAR_35 &= ~(VAR_14 |
        VAR_15);

 FUNC_1(VAR_34, VAR_30,
     VAR_20,
     VAR_13, VAR_35);



 FUNC_0(VAR_34, VAR_30,
     VAR_21,
     VAR_22, &VAR_35);
 VAR_35 &= ~(VAR_26 |
      VAR_25);
 VAR_35 |= VAR_24;
 if (VAR_32->line_speed == VAR_29)
  VAR_35 |= VAR_23;
 else
  VAR_35 &= ~VAR_23;

 FUNC_1(VAR_34, VAR_30,
     VAR_21,
     VAR_22, VAR_35);


 FUNC_0(VAR_34, VAR_30,
     VAR_16,
     VAR_0,
     &VAR_35);
 if (VAR_32->line_speed == VAR_29) {

  VAR_35 |= (VAR_1 |
       VAR_2);
 } else {

  VAR_35 &= ~(VAR_1 |
        VAR_2);
 }
 FUNC_1(VAR_34, VAR_30,
     VAR_16,
     VAR_0,
     VAR_35);

 if (VAR_33) {

  FUNC_1(VAR_34, VAR_30,
      VAR_19,
      VAR_12,
      0xe);


  FUNC_1(VAR_34, VAR_30,
   VAR_19,
   VAR_8,
   VAR_9 |
   VAR_11 |
   VAR_10);


  FUNC_0(VAR_34, VAR_30,
      VAR_18,
      VAR_5,
      &VAR_35);
  if (VAR_30->speed_cap_mask &
      VAR_27)
   VAR_35 |= VAR_7;
  if (VAR_30->speed_cap_mask &
      VAR_28)
   VAR_35 |= VAR_6;

  FUNC_1(VAR_34, VAR_30,
      VAR_18,
      VAR_5,
      VAR_35);


  VAR_35 = VAR_4;

 } else
  VAR_35 = 0;

 FUNC_1(VAR_34, VAR_30,
     VAR_17,
     VAR_3, VAR_35);
}
