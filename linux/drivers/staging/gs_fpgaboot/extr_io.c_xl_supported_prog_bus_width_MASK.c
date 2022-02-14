
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wbus { ____Placeholder_wbus } wbus ;




 int FUNC_0 (char*,int) ;

int FUNC_1(enum wbus VAR_0)
{
 switch (VAR_0) {
 case 129:
  break;
 case 128:
  break;
 default:
  FUNC_0("unsupported program bus width %d\n", VAR_0);
  return 0;
 }

 return 1;
}
