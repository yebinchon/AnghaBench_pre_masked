
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(__le16 VAR_0)
{
 u8 VAR_1, VAR_2, VAR_3;
 u32 VAR_4 = 0;

 for (VAR_1 = VAR_2 = 0; VAR_1 < 4; VAR_1 += 2, VAR_2 += 10) {
  VAR_3 = (FUNC_0(VAR_0) >> VAR_1) & 3;

  switch (VAR_3) {
  case 2:
   VAR_4 = VAR_4 | (0x03ff << VAR_2);
   break;
  case 1:
   VAR_4 = VAR_4 | (0x01ff << VAR_2);
   break;
  case 0:
   VAR_4 = VAR_4 | (0x00ff << VAR_2);
   break;
  default:
   break;
  }
 }

 return VAR_4;
}
