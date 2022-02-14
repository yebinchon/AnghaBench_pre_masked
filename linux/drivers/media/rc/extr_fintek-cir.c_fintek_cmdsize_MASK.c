
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(u8 VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 130:
  if (VAR_2 == 129)
   VAR_3 = 1;
  break;
 case 129:
  if (VAR_2 == VAR_0)
   VAR_3 = 2;
  break;
 case 131:
  switch (VAR_2) {
  case 135:
  case 133:
  case 128:
   VAR_3 = 2;
   break;
  case 136:
  case 132:
  case 134:
   VAR_3 = 1;
   break;
  }
 }

 return VAR_3;
}
