
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum securityEnum { ____Placeholder_securityEnum } securityEnum ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;

__attribute__((used)) static bool
FUNC_0(enum securityEnum VAR_3)
{
 switch (VAR_3) {
 case 129:
 case 130:
  return 1;
 case 128:
  if (VAR_2 &
      (VAR_0 | VAR_1))
   return 1;

 default:
  return 0;
 }
}
