
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_10 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_11 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (unsigned int) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int*) ;
 unsigned int FUNC_17 (struct adapter*,int ) ;
 int FUNC_18 (struct adapter*,int ,int,int) ;
 int FUNC_19 (struct adapter*,int ,unsigned int) ;

int FUNC_20(struct adapter *VAR_18, unsigned int VAR_19,
    unsigned int VAR_20)
{
 unsigned int VAR_21 = FUNC_12(VAR_19) - 1;
 unsigned int VAR_22 = VAR_21 - 10;
 unsigned int VAR_23 = VAR_20 > 64 ? 128 : 64;
 unsigned int VAR_24 = VAR_20 < 32 ? 32 : VAR_20;
 unsigned int VAR_25 = FUNC_12(VAR_24) - 1;

 FUNC_19(VAR_18, VAR_15,
       FUNC_1(VAR_22) |
       FUNC_2(VAR_22) |
       FUNC_3(VAR_22) |
       FUNC_4(VAR_22) |
       FUNC_5(VAR_22) |
       FUNC_6(VAR_22) |
       FUNC_7(VAR_22) |
       FUNC_8(VAR_22));

 if (FUNC_13(VAR_18->params.chip)) {
  FUNC_18(VAR_18, VAR_11,
     FUNC_11(VAR_6) |
     VAR_0,
     FUNC_11(VAR_25 -
        VAR_7) |
     FUNC_0(VAR_23 != 64));
 } else {
  unsigned int VAR_26;
  unsigned int VAR_27, VAR_28;
  VAR_26 = VAR_24;
  if (FUNC_15(VAR_18->pdev)) {
   unsigned int VAR_29, VAR_30;
   u16 VAR_31;





   FUNC_16(VAR_18->pdev, VAR_8,
        &VAR_31);
   VAR_30 = ((VAR_31 & VAR_9) >> 5) + 7;
   VAR_29 = 1 << VAR_30;
   if (VAR_29 > VAR_26)
    VAR_26 = VAR_29;
  }






  if (VAR_26 <= 16) {
   VAR_28 = VAR_1;
   VAR_24 = 16;
  } else if (VAR_26 == 32) {
   VAR_28 = VAR_2;
   VAR_24 = 64;
  } else {
   unsigned int VAR_32 = FUNC_12(VAR_26) - 1;

   VAR_28 = VAR_32 - VAR_4;
   VAR_24 = VAR_26;
  }






  if (FUNC_14(VAR_18->params.chip))
   VAR_27 = VAR_5;
  else
   VAR_27 = VAR_16;

  FUNC_18(VAR_18, VAR_11,
     FUNC_11(VAR_6) |
     VAR_0,
     FUNC_11(VAR_27) |
     FUNC_0(VAR_23 != 64));
  FUNC_18(VAR_18, VAR_10,
     FUNC_10(VAR_3),
     FUNC_10(VAR_28));
 }
 FUNC_19(VAR_18, VAR_12, VAR_19);
 FUNC_19(VAR_18, VAR_13,
       (FUNC_17(VAR_18, VAR_13) + VAR_24-1)
       & ~(VAR_24-1));
 FUNC_19(VAR_18, VAR_14,
       (FUNC_17(VAR_18, VAR_14) + VAR_24-1)
       & ~(VAR_24-1));

 FUNC_19(VAR_18, VAR_17, FUNC_9(VAR_21 - 12));

 return 0;
}
