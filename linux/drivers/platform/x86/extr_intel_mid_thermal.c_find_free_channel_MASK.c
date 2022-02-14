
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(void)
{
 int VAR_7;
 int VAR_8;
 uint8_t VAR_9;


 VAR_7 = FUNC_0(VAR_4, &VAR_9);
 if (VAR_7)
  return VAR_7;

 if ((VAR_9 & VAR_5) == 0)
  return 0;


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_0(VAR_1 + VAR_8, &VAR_9);
  if (VAR_7)
   return VAR_7;

  if (VAR_9 & VAR_6) {
   VAR_7 = VAR_8;
   break;
  }
 }
 return (VAR_7 > VAR_2) ? (-VAR_3) : VAR_7;
}
