
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

int FUNC_8(u8 VAR_12, bool VAR_13)
{
 if (VAR_12 == VAR_9)
  return FUNC_5(VAR_12, VAR_13);
 else if (VAR_12 < VAR_5)
  return FUNC_0(VAR_12, VAR_13);
 else if (VAR_12 == VAR_11)
  return FUNC_7(VAR_13);
 else if ((VAR_12 == VAR_1) || (VAR_12 == VAR_3))
  return FUNC_1((VAR_12 - VAR_1), VAR_13);
 else if ((VAR_2 <= VAR_12) && (VAR_12 <= VAR_4))
  return FUNC_2((VAR_12 - VAR_2), VAR_13);
 else if (VAR_12 == VAR_6)
  return FUNC_4(VAR_13);
 else if (VAR_12 == VAR_10)
  return FUNC_6(VAR_13);
 else if ((VAR_12 == VAR_7) || (VAR_12 == VAR_8))
  return FUNC_3(VAR_12, VAR_13);
 else
  return -VAR_0;
}
