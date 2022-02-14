
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static u8 FUNC_2(unsigned int VAR_6)
{
 if (FUNC_1(VAR_6)) {
  if (VAR_6 < 425000)
   return VAR_0;

  else if (VAR_6 < 465000)
   return VAR_1;

  else if (VAR_6 < 490000)
   return VAR_2;

  else
   return VAR_3;
 } else {

  if (VAR_6 < VAR_5)
   VAR_6 = VAR_5;
  if (VAR_6 > VAR_4)
   VAR_6 = VAR_4;


  VAR_6 =
      FUNC_0(VAR_6 - VAR_5,
          1000);

  return (u8) VAR_6;
 }
}
