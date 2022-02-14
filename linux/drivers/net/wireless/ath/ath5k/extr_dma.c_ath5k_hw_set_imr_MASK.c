
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_hw {int ah_imr; scalar_t__ ah_version; } ;
typedef enum ath5k_int { ____Placeholder_ath5k_int } ath5k_int ;


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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;

enum ath5k_int
FUNC_2(struct ath5k_hw *VAR_32, enum ath5k_int VAR_33)
{
 enum ath5k_int VAR_34, VAR_35;

 VAR_34 = VAR_32->ah_imr;






 if (VAR_34 & VAR_17) {
  FUNC_1(VAR_32, VAR_2, VAR_1);
  FUNC_0(VAR_32, VAR_1);
 }





 VAR_35 = VAR_33 & VAR_13;

 if (VAR_32->ah_version != VAR_0) {

  u32 VAR_36 = FUNC_0(VAR_32, VAR_22)
    & VAR_25;


  if (VAR_33 & VAR_16) {
   VAR_35 |= VAR_6;
   VAR_36 |= (VAR_24 | VAR_26
    | VAR_23);
  }


  if (VAR_33 & VAR_19)
   VAR_35 |= VAR_9;

  if (VAR_33 & VAR_19)
   VAR_36 |= VAR_31;
  if (VAR_33 & VAR_14)
   VAR_36 |= VAR_29;
  if (VAR_33 & VAR_15)
   VAR_36 |= VAR_30;
  if (VAR_33 & VAR_10)
   VAR_36 |= VAR_27;
  if (VAR_33 & VAR_12)
   VAR_36 |= VAR_28;


  if (VAR_33 & VAR_11)
   VAR_35 |= VAR_11;



  FUNC_1(VAR_32, VAR_35, VAR_20);
  FUNC_1(VAR_32, VAR_36, VAR_22);

 } else {

  if (VAR_33 & VAR_16)
   VAR_35 |= (VAR_8 | VAR_7
    | VAR_6 | VAR_5);


  FUNC_1(VAR_32, VAR_35, VAR_4);
 }



 if (!(VAR_33 & VAR_18))
  FUNC_1(VAR_32, 0, VAR_21);


 VAR_32->ah_imr = VAR_33;


 if (VAR_33 & VAR_17) {
  FUNC_1(VAR_32, VAR_3, VAR_1);
  FUNC_0(VAR_32, VAR_1);
 }

 return VAR_34;
}
