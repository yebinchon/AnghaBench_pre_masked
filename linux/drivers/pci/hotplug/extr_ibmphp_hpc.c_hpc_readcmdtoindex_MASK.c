
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(u8 VAR_3, u8 VAR_4)
{
 u8 VAR_5;

 switch (VAR_3) {
 case 133:
  VAR_5 = 0x0F;
  break;
 case 128:
 case 135:
  VAR_5 = VAR_4;
  break;
 case 132:
  VAR_5 = VAR_4 + VAR_2;
  break;
 case 134:
  VAR_5 = VAR_4 + VAR_1 - 1;
  break;
 case 129:
  VAR_5 = 0x28;
  break;
 case 130:
  VAR_5 = 0x25;
  break;
 case 131:
  VAR_5 = 0x27;
  break;
 default:
  VAR_5 = VAR_0;
 }
 return VAR_5;
}
