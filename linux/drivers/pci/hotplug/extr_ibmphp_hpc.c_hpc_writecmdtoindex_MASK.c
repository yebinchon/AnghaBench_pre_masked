
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4;

 switch (VAR_2) {
 case 135:
 case 137:
 case 133:
 case 134:
 case 136:
 case 143:
 case 144:
  VAR_4 = 0x0F;
  break;

 case 129:
 case 128:
 case 132:
 case 131:
 case 130:
  VAR_4 = VAR_3;
  break;

 case 140:
 case 139:
 case 138:
 case 142:
 case 141:
  VAR_4 = VAR_3 + VAR_1 - 1;
  break;

 default:
  FUNC_0("hpc_writecmdtoindex - Error invalid cmd[%x]\n", VAR_2);
  VAR_4 = VAR_0;
 }

 return VAR_4;
}
