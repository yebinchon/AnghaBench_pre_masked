
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum via_clksrc { ____Placeholder_via_clksrc } via_clksrc ;
__attribute__((used)) static inline u8 FUNC_0(enum via_clksrc VAR_0, bool VAR_1)
{
 u8 VAR_2 = 0;

 switch (VAR_0) {
 case 128:
  VAR_2 = 0x00;
  break;
 case 129:
  VAR_2 = 0x02;
  break;
 case 130:
  VAR_2 = 0x04;
  break;
 case 131:
  VAR_2 = 0x0A;
  break;
 case 133:
  VAR_2 = 0xC;
  break;
 case 132:
  VAR_2 = 0x0E;
  break;
 }

 if (!VAR_1)
  VAR_2 |= 1;

 return VAR_2;
}
