
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct alx_hw {scalar_t__ link_speed; scalar_t__ lnk_patch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_2 (struct alx_hw*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct alx_hw*,int ,scalar_t__*) ;
 int FUNC_5 (struct alx_hw*,int ,int ,scalar_t__*) ;
 int FUNC_6 (struct alx_hw*,int ,scalar_t__) ;
 int FUNC_7 (struct alx_hw*,int ,int ,scalar_t__) ;

void FUNC_8(struct alx_hw *VAR_26)
{
 u16 VAR_27, VAR_28, VAR_29;
 u8 VAR_30 = FUNC_2(VAR_26);
 bool VAR_31 = VAR_30 == VAR_22;

 if (VAR_30 != VAR_22 && !FUNC_3(VAR_30))
  return;


 if (VAR_26->link_speed != VAR_25) {
  FUNC_5(VAR_26, VAR_16, VAR_15,
     &VAR_27);
  VAR_28 = FUNC_0(VAR_27, VAR_6);
  FUNC_4(VAR_26, VAR_9, &VAR_27);
  VAR_29 = FUNC_0(VAR_27, VAR_1);

  if ((VAR_26->link_speed == VAR_24 &&
       (VAR_28 > VAR_8 ||
        (VAR_28 == 0 && VAR_29 > VAR_3))) ||
      (VAR_26->link_speed == VAR_23 &&
       (VAR_28 > VAR_7 ||
        (VAR_28 == 0 && VAR_29 > VAR_2)))) {
   FUNC_6(VAR_26, VAR_10,
       VAR_5);
   FUNC_5(VAR_26, VAR_14, VAR_13,
      &VAR_27);
   FUNC_7(VAR_26, VAR_14, VAR_13,
       VAR_27 | VAR_0);
  } else {
   FUNC_6(VAR_26, VAR_10,
       VAR_4);
   FUNC_5(VAR_26, VAR_14,
      VAR_13, &VAR_27);
   FUNC_7(VAR_26, VAR_14, VAR_13,
       VAR_27 & ~VAR_0);
  }


  if (VAR_31 && VAR_26->lnk_patch) {
   if (VAR_26->link_speed == VAR_23) {
    FUNC_6(VAR_26, VAR_11,
        VAR_18);
   } else if (VAR_26->link_speed == VAR_24) {




    FUNC_4(VAR_26, VAR_12,
       &VAR_27);
    FUNC_1(VAR_27, VAR_19,
           VAR_21);
    FUNC_6(VAR_26, VAR_12,
        VAR_27);
   }
  }
 } else {
  FUNC_5(VAR_26, VAR_14, VAR_13,
     &VAR_27);
  FUNC_7(VAR_26, VAR_14, VAR_13,
      VAR_27 & ~VAR_0);

  if (VAR_31 && VAR_26->lnk_patch) {
   FUNC_6(VAR_26, VAR_11,
       VAR_17);
   FUNC_4(VAR_26, VAR_12, &VAR_27);
   FUNC_1(VAR_27, VAR_19,
          VAR_20);
   FUNC_6(VAR_26, VAR_12, VAR_27);
  }
 }
}
