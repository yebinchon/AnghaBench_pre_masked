
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct open_flags {int mode; int open_flag; int acc_mode; int lookup_flags; int intent; } ;


 int FUNC_0 (int) ;
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

__attribute__((used)) static inline int FUNC_1(int VAR_25, umode_t VAR_26, struct open_flags *VAR_27)
{
 int VAR_28 = 0;
 int VAR_29 = FUNC_0(VAR_25);





 VAR_25 &= VAR_22;

 if (VAR_25 & (VAR_11 | VAR_24))
  VAR_27->mode = (VAR_26 & VAR_20) | VAR_21;
 else
  VAR_27->mode = 0;


 VAR_25 &= ~VAR_1 & ~VAR_10;







 if (VAR_25 & VAR_23)
  VAR_25 |= VAR_13;

 if (VAR_25 & VAR_24) {
  if ((VAR_25 & VAR_18) != VAR_17)
   return -VAR_0;
  if (!(VAR_29 & VAR_8))
   return -VAR_0;
 } else if (VAR_25 & VAR_16) {




  VAR_25 &= VAR_12 | VAR_15 | VAR_16;
  VAR_29 = 0;
 }

 VAR_27->open_flag = VAR_25;


 if (VAR_25 & VAR_19)
  VAR_29 |= VAR_8;



 if (VAR_25 & VAR_9)
  VAR_29 |= VAR_7;

 VAR_27->acc_mode = VAR_29;

 VAR_27->intent = VAR_25 & VAR_16 ? 0 : VAR_6;

 if (VAR_25 & VAR_11) {
  VAR_27->intent |= VAR_2;
  if (VAR_25 & VAR_14)
   VAR_27->intent |= VAR_4;
 }

 if (VAR_25 & VAR_12)
  VAR_28 |= VAR_3;
 if (!(VAR_25 & VAR_15))
  VAR_28 |= VAR_5;
 VAR_27->lookup_flags = VAR_28;
 return 0;
}
