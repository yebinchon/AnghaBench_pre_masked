
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(int VAR_16, int VAR_17)
{
 int VAR_18 = 0;

 FUNC_0(!(VAR_16 & (VAR_2 | VAR_3 |
         VAR_4)));
 FUNC_0(FUNC_1(VAR_17));

 if (VAR_16 & (VAR_9|VAR_7)) {
  FUNC_0(VAR_17 <= VAR_8);
  VAR_18 += VAR_17 << VAR_10;
 }

 if (VAR_16 & (VAR_14|VAR_12)) {
  FUNC_0(VAR_17 <= VAR_13);
  VAR_18 += VAR_17 << VAR_15;
 }

 if (VAR_16 & (VAR_5|VAR_0)) {
  FUNC_0(VAR_17 <= VAR_1);
  VAR_18 += VAR_17 << VAR_6;
 }

 return (VAR_16 & ~VAR_11) | VAR_18;
}
