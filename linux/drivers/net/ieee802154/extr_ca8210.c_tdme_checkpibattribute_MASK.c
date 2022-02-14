
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



__attribute__((used)) static u8 FUNC_0(
 u8 VAR_3,
 u8 VAR_4,
 const void *VAR_5
)
{
 u8 VAR_6 = VAR_1;
 u8 VAR_7;

 VAR_7 = *((u8 *)VAR_5);

 switch (VAR_3) {

 case 128:
  if (VAR_7 > 0x3F)
   VAR_6 = VAR_0;
  break;
 case 129:
  if (VAR_7 > 0x03)
   VAR_6 = VAR_0;
  break;

 case 143:
  if (VAR_7 < 6 || VAR_7 > 41)
   VAR_6 = VAR_0;
  break;
 case 141:
  if (VAR_4 > VAR_2)
   VAR_6 = VAR_0;
  break;
 case 140:
  if (VAR_7 > VAR_2)
   VAR_6 = VAR_0;
  break;
 case 142:
  if (VAR_7 > 15)
   VAR_6 = VAR_0;
  break;
 case 138:
  if (VAR_7 < 3 || VAR_7 > 8)
   VAR_6 = VAR_0;
  break;
 case 137:
  if (VAR_7 > 5)
   VAR_6 = VAR_0;
  break;
 case 136:
  if (VAR_7 > 7)
   VAR_6 = VAR_0;
  break;
 case 135:
  if (VAR_7 > 8)
   VAR_6 = VAR_0;
  break;
 case 133:
  if (VAR_7 < 2 || VAR_7 > 64)
   VAR_6 = VAR_0;
  break;
 case 130:
  if (VAR_7 > 15)
   VAR_6 = VAR_0;
  break;

 case 149:
 case 148:
 case 147:
 case 144:
 case 139:
 case 134:
 case 132:
 case 131:
  if (VAR_7 > 1)
   VAR_6 = VAR_0;
  break;

 case 145:
  if (VAR_7 > 7)
   VAR_6 = VAR_0;
  break;
 case 146:
  if (VAR_7 > 3)
   VAR_6 = VAR_0;
  break;
 default:
  break;
 }

 return VAR_6;
}
