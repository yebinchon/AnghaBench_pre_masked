
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lynx_accel {scalar_t__ (* de_wait ) () ;} ;


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
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct lynx_accel*,int ,int) ;

int FUNC_3(struct lynx_accel *VAR_24,
        u32 VAR_25, u32 VAR_26, u32 VAR_27,
        u32 VAR_28, u32 VAR_29, u32 VAR_30, u32 VAR_31,
        u32 VAR_32, u32 VAR_33)
{
 u32 VAR_34;

 if (VAR_24->de_wait() != 0) {




  FUNC_0("De engine always busy\n");
  return -1;
 }

 FUNC_2(VAR_24, VAR_19, VAR_25);
 FUNC_2(VAR_24, VAR_15,
    ((VAR_26 / VAR_27 << VAR_17) &
     VAR_16) |
    (VAR_26 / VAR_27 & VAR_18));

 FUNC_2(VAR_24, VAR_20,
    ((VAR_26 / VAR_27 << VAR_22) &
     VAR_21) |
     (VAR_26 / VAR_27 & VAR_23));

 FUNC_2(VAR_24, VAR_14, VAR_32);

 FUNC_2(VAR_24, VAR_6,
    ((VAR_28 << VAR_8) & VAR_7) |
    (VAR_29 & VAR_9));

 FUNC_2(VAR_24, VAR_10,
    ((VAR_30 << VAR_12) & VAR_11) |
    (VAR_31 & VAR_13));

 VAR_34 = VAR_5 | VAR_2 |
  VAR_1 | VAR_4 |
  (VAR_33 & VAR_3);

 FUNC_2(VAR_24, VAR_0, VAR_34);
 return 0;
}
