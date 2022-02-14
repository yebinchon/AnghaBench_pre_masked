
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_2, unsigned long VAR_3)
{
 switch (FUNC_0(VAR_2)) {
 case 128:
  if (VAR_3 != 0)
   return 0;
  break;
 case 130:
  if (VAR_3 < (unsigned long)-VAR_1)
   return (unsigned long)-VAR_0;
  break;
 case 129:
  if (VAR_3 != 0 && VAR_3 < (unsigned long)-VAR_1)
   return (unsigned long)-VAR_0;
  break;
 }

 return VAR_3;
}
