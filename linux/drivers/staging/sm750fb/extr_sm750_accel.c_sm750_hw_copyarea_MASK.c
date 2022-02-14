
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lynx_accel {scalar_t__ (* de_wait ) () ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct lynx_accel*,int ,unsigned int) ;

int FUNC_2(
struct lynx_accel *VAR_32,
unsigned int VAR_33,
unsigned int VAR_34,
unsigned int VAR_35,
unsigned int VAR_36,
unsigned int VAR_37,
unsigned int VAR_38,
unsigned int VAR_39,
unsigned int VAR_40,
unsigned int VAR_41,
unsigned int VAR_42,
unsigned int VAR_43,
unsigned int VAR_44)
{
 unsigned int VAR_45, VAR_46;

 VAR_45 = VAR_29;

 VAR_46 = 0;


 if (VAR_33 == VAR_37 && VAR_34 == VAR_38) {

  if (VAR_36 < VAR_41) {
   VAR_45 = VAR_0;
  } else if (VAR_36 > VAR_41) {
   VAR_45 = VAR_31;
  } else {


   if (VAR_35 <= VAR_40) {
    VAR_45 = VAR_30;
   } else {
    VAR_45 = VAR_29;
   }
  }
 }

 if ((VAR_45 == VAR_0) || (VAR_45 == VAR_30)) {
  VAR_35 += VAR_42 - 1;
  VAR_36 += VAR_43 - 1;
  VAR_40 += VAR_42 - 1;
  VAR_41 += VAR_43 - 1;
 }
 FUNC_1(VAR_32, VAR_24, VAR_33);






 FUNC_1(VAR_32, VAR_23, VAR_37);






 FUNC_1(VAR_32, VAR_15,
    ((VAR_38 / VAR_39 << VAR_17) &
     VAR_16) |
    (VAR_34 / VAR_39 & VAR_18));






 FUNC_1(VAR_32, VAR_25,
    ((VAR_38 / VAR_39 << VAR_27) &
     VAR_26) |
    (VAR_34 / VAR_39 & VAR_28));

 if (VAR_32->de_wait() != 0)
  return -1;

 FUNC_1(VAR_32, VAR_19,
    ((VAR_35 << VAR_21) & VAR_20) |
    (VAR_36 & VAR_22));
 FUNC_1(VAR_32, VAR_7,
    ((VAR_40 << VAR_9) & VAR_8) |
    (VAR_41 & VAR_10));
 FUNC_1(VAR_32, VAR_11,
    ((VAR_42 << VAR_13) & VAR_12) |
    (VAR_43 & VAR_14));

 VAR_46 = (VAR_44 & VAR_4) | VAR_5 |
  ((VAR_45 == VAR_30) ? VAR_3 : 0) |
  VAR_2 | VAR_6;
 FUNC_1(VAR_32, VAR_1, VAR_46);

 return 0;
}
