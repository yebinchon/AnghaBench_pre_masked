
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_2(unsigned int VAR_3, int VAR_4)
{
 int VAR_5;
 FUNC_1(VAR_0 + VAR_4, VAR_3 + VAR_1);

 for (VAR_5 = 1620; VAR_5 >= 0; VAR_5--) {
  if ((FUNC_0(VAR_3 + VAR_1) & 0x8000) == 0)
   break;
 }
 return FUNC_0(VAR_3 + VAR_2);
}
