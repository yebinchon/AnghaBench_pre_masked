
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vc_data {int vc_ulcolor; int vc_halfcolor; } ;
typedef int attr ;



__attribute__((used)) static u8
FUNC_0(struct vc_data *VAR_0, u8 VAR_1, u8 VAR_2,
       u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u8 VAR_7 = VAR_1;

 if (VAR_4)
  VAR_7 = (VAR_7 & 0xf0) | VAR_0->vc_ulcolor;
 else if (VAR_2 == 0)
  VAR_7 = (VAR_7 & 0xf0) | VAR_0->vc_halfcolor;

 if (VAR_5)
  VAR_7 = ((VAR_7) & 0x88) |
         ((((VAR_7) >> 4) |
         ((VAR_7) << 4)) & 0x77);

 if (VAR_3)
  VAR_7 ^= 0x80;

 if (VAR_2 == 2)
  VAR_7 ^= 0x08;

 return VAR_7;
}
