
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mbase; } ;
typedef TYPE_1__ avmcard ;


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
 scalar_t__ VAR_12 ;
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
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,unsigned long*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_30 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,unsigned long) ;

__attribute__((used)) static int FUNC_7(avmcard *VAR_31)
{
 unsigned long VAR_32, VAR_33;

 FUNC_3(VAR_31->mbase + VAR_25, 0x0c);
 if (FUNC_2(VAR_31->mbase + VAR_25) != 0x0c)
  return 1;

 FUNC_3(VAR_31->mbase + VAR_12, VAR_5);

 VAR_32 = VAR_30 + VAR_21 * 10;
 while (FUNC_2(VAR_31->mbase + VAR_12) != 0xffffffff) {
  if (!FUNC_6(VAR_30, VAR_32))
   return 2;
  FUNC_3(VAR_31->mbase + VAR_12, VAR_3);
  FUNC_4();
 }

 FUNC_1(VAR_31, VAR_7 + VAR_1, 0);
 FUNC_1(VAR_31, VAR_7 + VAR_2, 0);

 FUNC_3(VAR_31->mbase + VAR_24, 0x55aa55aa);
 if (FUNC_2(VAR_31->mbase + VAR_24) != 0x55aa55aa) return 3;

 FUNC_3(VAR_31->mbase + VAR_24, 0xaa55aa55);
 if (FUNC_2(VAR_31->mbase + VAR_24) != 0xaa55aa55) return 4;

 if (FUNC_1(VAR_31, VAR_7 + VAR_6, 0)) return 5;
 if (FUNC_1(VAR_31, VAR_7 + VAR_4, 0)) return 6;
 if (FUNC_1(VAR_31, VAR_7 + VAR_26, VAR_27))
  return 7;
 if (FUNC_1(VAR_31, VAR_7 + VAR_28, VAR_22))
  return 8;
 if (FUNC_1(VAR_31, VAR_7 + VAR_29, VAR_23))
  return 8;
 if (FUNC_1(VAR_31, VAR_7 + VAR_19, 0)) return 9;

 FUNC_5(1);

 if (FUNC_0(VAR_31, VAR_8, &VAR_33)) return 10;
 if (FUNC_0(VAR_31, VAR_9, &VAR_33)) return 11;
 if (FUNC_0(VAR_31, VAR_10, &VAR_33)) return 12;
 if (FUNC_0(VAR_31, VAR_11, &VAR_33)) return 13;

 if (FUNC_1(VAR_31, VAR_8 + VAR_0, 0)) return 14;
 if (FUNC_1(VAR_31, VAR_9 + VAR_0, 0)) return 15;
 if (FUNC_1(VAR_31, VAR_10 + VAR_0, 0)) return 16;
 if (FUNC_1(VAR_31, VAR_11 + VAR_0, 0)) return 17;

 FUNC_5(1);

 if (FUNC_1(VAR_31, VAR_7 + VAR_19, VAR_20))
  return 18;

 if (FUNC_1(VAR_31, VAR_7 + VAR_13, VAR_17))
  return 19;
 if (FUNC_1(VAR_31, VAR_7 + VAR_14, VAR_18))
  return 20;
 if (FUNC_1(VAR_31, VAR_7 + VAR_15, VAR_18))
  return 21;
 if (FUNC_1(VAR_31, VAR_7 + VAR_16, VAR_18))
  return 22;



 if (FUNC_1(VAR_31, 0x000000, 0x11111111)
     || FUNC_1(VAR_31, 0x400000, 0x22222222)
        || FUNC_1(VAR_31, 0x800000, 0x33333333)
        || FUNC_1(VAR_31, 0xC00000, 0x44444444))
  return 23;

 if (FUNC_0(VAR_31, 0x000000, &VAR_33) || VAR_33 != 0x11111111
     || FUNC_0(VAR_31, 0x400000, &VAR_33) || VAR_33 != 0x22222222
        || FUNC_0(VAR_31, 0x800000, &VAR_33) || VAR_33 != 0x33333333
        || FUNC_0(VAR_31, 0xC00000, &VAR_33) || VAR_33 != 0x44444444)
  return 24;

 if (FUNC_1(VAR_31, 0x000000, 0x55555555)
     || FUNC_1(VAR_31, 0x400000, 0x66666666)
        || FUNC_1(VAR_31, 0x800000, 0x77777777)
        || FUNC_1(VAR_31, 0xC00000, 0x88888888))
  return 25;

 if (FUNC_0(VAR_31, 0x000000, &VAR_33) || VAR_33 != 0x55555555
     || FUNC_0(VAR_31, 0x400000, &VAR_33) || VAR_33 != 0x66666666
        || FUNC_0(VAR_31, 0x800000, &VAR_33) || VAR_33 != 0x77777777
        || FUNC_0(VAR_31, 0xC00000, &VAR_33) || VAR_33 != 0x88888888)
  return 26;

 return 0;
}
