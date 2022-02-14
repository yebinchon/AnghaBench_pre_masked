
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(char *VAR_3)
{
 u8 VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = VAR_4 - 1;

 if (VAR_4 < VAR_1)
  return 0;
 if (FUNC_2(VAR_3, VAR_5) ==
     VAR_2)
  return 1;

 VAR_6 = FUNC_0(VAR_3,
        VAR_5);
 if (++VAR_6 == VAR_0)
  return 1;
 return 0;
}
