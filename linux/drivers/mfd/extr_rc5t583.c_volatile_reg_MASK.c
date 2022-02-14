
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static bool FUNC_0(struct device *VAR_8, unsigned int VAR_9)
{

 switch (VAR_9) {
 case 129:
 case 128:
 case 131:
 case 130:
 case 134:
 case 133:
 case 132:
 case 137:
 case 136:
 case 138:
  return 0;

 case 135:

  return 1;

 default:

  if ((VAR_9 >= VAR_1) &&
    (VAR_9 <= VAR_0))
   return 0;


  if ((VAR_9 >= VAR_6) && (VAR_9 <= VAR_7))
   return 0;


  if ((VAR_9 >= VAR_2) && (VAR_9 <= VAR_5))
   return 0;
  if ((VAR_9 >= VAR_4) &&
     (VAR_9 <= VAR_3))
   return 0;

  break;
 }

 return 1;
}
