
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


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
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

u64 FUNC_5(bool VAR_13, bool VAR_14, bool VAR_15, bool VAR_16)
{
 u64 VAR_17 = 0;

 FUNC_3(VAR_17);
 if (VAR_13)
  VAR_17 |= VAR_1;
 if (FUNC_1(VAR_10) & VAR_8)
  VAR_17 |= VAR_5;

 if (VAR_14) {
  if (!VAR_15)
   VAR_17 |= VAR_3;
  VAR_17 |= (FUNC_0() & VAR_9) | VAR_0;
 } else {
  VAR_17 |= VAR_2 | VAR_3;
  if (FUNC_2())
   VAR_17 |= VAR_0;
  else
   VAR_17 &= ~(VAR_0);
  if (!FUNC_4(VAR_12, VAR_11))
   VAR_17 |= VAR_4;
 }
 if (VAR_16) {
  if (FUNC_2())
   VAR_17 |= VAR_7;
  else
   VAR_17 |= VAR_6;
 }
 return VAR_17;
}
