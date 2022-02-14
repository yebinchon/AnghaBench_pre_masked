
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(u32 VAR_9, umode_t VAR_10)
{
 int VAR_11 = 0;

 if (VAR_9 & VAR_7)
  VAR_11 |= VAR_1;
 if (FUNC_0(VAR_10)) {
  if ((VAR_9 & VAR_3) == VAR_3)
   VAR_11 |= VAR_2;
  if ((VAR_9 & VAR_6) == VAR_6)
   VAR_11 |= VAR_0;
 } else if (FUNC_1(VAR_10)) {
  if ((VAR_9 & VAR_4) == VAR_4)
   VAR_11 |= VAR_2;
  if ((VAR_9 & VAR_5) == VAR_5)
   VAR_11 |= VAR_0;
 } else if (VAR_9 & VAR_8)
   VAR_11 |= VAR_2;
 return VAR_11;
}
