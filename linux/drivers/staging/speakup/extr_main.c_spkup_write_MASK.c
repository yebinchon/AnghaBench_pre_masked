
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u16 ;


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
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t* VAR_14 ;
 scalar_t__ VAR_15 ;
 int const*** VAR_16 ;
 int FUNC_0 (int) ;
 int* VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(const u16 *VAR_23, int VAR_24)
{
 static int VAR_25;
 static u16 VAR_26 = '\0', VAR_27 = '\0';
 static u_short VAR_28, VAR_29;
 int VAR_30 = VAR_24;

 VAR_19 = 0;
 while (VAR_24--) {
  if (VAR_13 == VAR_15) {

   if ((VAR_23 == VAR_16[VAR_11][VAR_12]) &&
       (VAR_12 <= VAR_14[VAR_11]))
    FUNC_3(VAR_12++);
  }
  VAR_26 = *VAR_23++;
  if (VAR_26 < 0x100)
   VAR_28 = VAR_17[VAR_26];
  else
   VAR_28 = VAR_0;
  if (VAR_26 == VAR_27 && !(VAR_28 & VAR_2)) {
   if (++VAR_25 > 2)
    continue;
  } else {
   if ((VAR_29 & VAR_3) && VAR_25 > 2) {
    FUNC_4(" ");
    FUNC_4(FUNC_1(VAR_5),
          ++VAR_25);
    FUNC_4(" ");
   }
   VAR_25 = 0;
  }
  if (VAR_26 == VAR_20) {
   VAR_25 = 0;
   if (VAR_18 == 1 && VAR_26 >= VAR_4)
    FUNC_0(VAR_26);
  } else if (VAR_28 & VAR_1) {
   if ((VAR_22 & VAR_8) && (VAR_29 & VAR_7))
    FUNC_2(VAR_9);
   FUNC_5(VAR_26);
  } else if (VAR_28 & VAR_2) {
   VAR_25 = 0;
   FUNC_5(VAR_26);
  } else if (VAR_28 & VAR_21) {
   FUNC_0(VAR_26);
   VAR_28 &= ~VAR_7;
  } else if (VAR_28 & VAR_10) {







   if (VAR_26 != VAR_27)
    FUNC_5(VAR_26);
   else
    VAR_25 = 0;
  } else {

   if (VAR_27 != VAR_26)
    FUNC_2(VAR_9);
   else
    VAR_25 = 0;
  }
  VAR_27 = VAR_26;
  VAR_29 = VAR_28;
 }
 VAR_20 = 0;
 if (VAR_30 > 2 && VAR_25 > 2) {
  if (VAR_29 & VAR_3) {
   FUNC_4(" ");
   FUNC_4(FUNC_1(VAR_6),
         ++VAR_25);
   FUNC_4(" ");
  }
  VAR_25 = 0;
 }
}
