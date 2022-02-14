
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1, u32 VAR_2,
      u32 *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = *VAR_3;





 if (VAR_2 == 0x03) {
  switch (VAR_1) {
  case 4:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (0 << VAR_4);
   break;
  case 8:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (1 << VAR_4);
   break;
  case 12:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (2 << VAR_4);
   break;
  case 16:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (3 << VAR_4);
   break;
  case 20:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (4 << VAR_4);
   break;
  case 24:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (5 << VAR_4);
   break;
  case 28:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (6 << VAR_4);
   break;
  case 32:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (7 << VAR_4);
   break;
  default:
   return -VAR_0;
  }
 } else {
  switch (VAR_1) {
  case 4:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (0 << VAR_4);
   break;
  case 8:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (1 << VAR_4);
   break;
  case 12:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (2 << VAR_4);
   break;
  case 16:
   VAR_5 &= ~(VAR_2 << VAR_4);
   VAR_5 |= (3 << VAR_4);
   break;
  default:
   return -VAR_0;
  }
 }

 *VAR_3 = VAR_5;

 return 0;
}
