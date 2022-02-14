
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u8 VAR_3)
{
 if (FUNC_1(VAR_3 != 0))
  FUNC_0("admin command failed[%u]\n", VAR_3);

 if (FUNC_1(VAR_3 > 129))
  return -VAR_0;

 switch (VAR_3) {
 case 130:
  return 0;
 case 131:
  return -VAR_1;
 case 128:
  return -VAR_2;
 case 134:
 case 132:
 case 133:
 case 129:
  return -VAR_0;
 }

 return 0;
}
