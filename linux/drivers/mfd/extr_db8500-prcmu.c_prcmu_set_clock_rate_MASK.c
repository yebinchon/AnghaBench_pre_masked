
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (unsigned long) ;

int FUNC_5(u8 VAR_7, unsigned long VAR_8)
{
 if (VAR_7 < VAR_5)
  FUNC_1(VAR_7, VAR_8);
 else if (VAR_7 == VAR_0)
  return FUNC_0(VAR_8);
 else if (VAR_7 == VAR_6)
  return FUNC_4(VAR_8);
 else if ((VAR_7 == VAR_1) || (VAR_7 == VAR_3))
  FUNC_2((VAR_7 - VAR_1), VAR_8);
 else if ((VAR_2 <= VAR_7) && (VAR_7 <= VAR_4))
  FUNC_3((VAR_7 - VAR_2), VAR_8);
 return 0;
}
