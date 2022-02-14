
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(u32 VAR_1, enum qe_clock VAR_2)
{
 int VAR_3 = -VAR_0;







 switch (VAR_1) {
 case 0:
 case 1:
 case 2:
 case 3:
  switch (VAR_2) {
  case 133:
   VAR_3 = 1;
   break;
  case 132:
   VAR_3 = 2;
   break;
  case 131:
   VAR_3 = 4;
   break;
  case 130:
   VAR_3 = 5;
   break;
  default:
   break;
  }
  break;
 case 4:
 case 5:
 case 6:
 case 7:
  switch (VAR_2) {
  case 135:
   VAR_3 = 1;
   break;
  case 134:
   VAR_3 = 2;
   break;
  case 129:
   VAR_3 = 4;
   break;
  case 128:
   VAR_3 = 5;
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 return VAR_3;
}
