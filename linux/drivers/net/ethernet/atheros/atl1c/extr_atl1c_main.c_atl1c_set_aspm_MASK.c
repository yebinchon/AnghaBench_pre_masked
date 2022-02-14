
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct atl1c_hw {scalar_t__ nic_type; int ctrl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int FUNC_2 (int,int ,int) ;
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
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;

__attribute__((used)) static void FUNC_3(struct atl1c_hw *VAR_29, u16 VAR_30)
{
 u32 VAR_31;
 u32 VAR_32;

 FUNC_0(VAR_29, VAR_21, &VAR_31);
 VAR_31 &= ~(VAR_8 |
     VAR_7 |
     VAR_12);

 if (VAR_29->nic_type == VAR_28 || VAR_29->nic_type == VAR_26) {
  VAR_31 &= ~VAR_6;
  VAR_32 =
   VAR_30 == VAR_24 || VAR_30 == VAR_23 ?
   VAR_4 : 1;
  VAR_31 = FUNC_2(VAR_31,
   VAR_3, VAR_32);
 } else {
  VAR_32 = VAR_29->nic_type == VAR_27 ?
   VAR_5 : VAR_2;
  if (VAR_30 != VAR_24 && VAR_30 != VAR_23)
   VAR_32 = 1;
  VAR_31 = FUNC_2(VAR_31,
   VAR_11, VAR_32);
 }


 if ((VAR_29->ctrl_flags & VAR_0) && VAR_30 != VAR_22)
  VAR_31 |= VAR_7 | VAR_12;
 if (VAR_29->ctrl_flags & VAR_1)
  VAR_31 |= VAR_8 | VAR_12;


 if (VAR_29->nic_type == VAR_27 || VAR_29->nic_type == VAR_25 ||
     VAR_29->nic_type == VAR_28 || VAR_29->nic_type == VAR_26) {
  VAR_31 = FUNC_2(VAR_31,
   VAR_13, VAR_14);
  VAR_31 |= VAR_15 |
    VAR_19 |
    VAR_9;
  VAR_31 &= ~(VAR_18 |
      VAR_20 |
      VAR_17 |
      VAR_16 |
      VAR_10);

  if (VAR_30 == VAR_22 || VAR_29->nic_type == VAR_27)
   VAR_31 &= ~VAR_7;
 } else {
  VAR_31 =
   FUNC_2(VAR_31, VAR_11, 0);
  if (VAR_30 != VAR_22) {
   VAR_31 |= VAR_18 |
     VAR_20 |
     VAR_17;
   VAR_31 &= ~(VAR_19 |
       VAR_9 |
       VAR_7 |
       VAR_8);
  } else {
   VAR_31 |= VAR_9;
   VAR_31 &= ~(VAR_18 |
       VAR_20 |
       VAR_17 |
       VAR_7);
  }
 }
 FUNC_1(VAR_29, VAR_21, VAR_31);

 return;
}
