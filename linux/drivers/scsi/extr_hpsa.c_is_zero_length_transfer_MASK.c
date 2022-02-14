
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;

__attribute__((used)) static bool FUNC_2(u8 *VAR_0)
{
 u32 VAR_1;


 switch (VAR_0[0]) {
 case 138:
 case 132:
 case 135:
 case 129:
  VAR_1 = FUNC_0(&VAR_0[7]);
  break;
 case 137:
 case 131:
 case 134:
 case 128:
  VAR_1 = FUNC_1(&VAR_0[6]);
  break;
 case 136:
 case 130:
 case 133:
  VAR_1 = FUNC_1(&VAR_0[10]);
  break;
 default:
  return 0;
 }

 return VAR_1 == 0;
}
