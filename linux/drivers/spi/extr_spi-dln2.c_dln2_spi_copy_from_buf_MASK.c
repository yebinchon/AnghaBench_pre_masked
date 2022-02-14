
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_0, const u8 *VAR_1, u16 VAR_2, u8 VAR_3)
{



 if (VAR_3 <= 8) {
  FUNC_2(VAR_0, VAR_1, VAR_2);
 } else if (VAR_3 <= 16) {
  u16 *VAR_4 = (u16 *)VAR_0;
  __le16 *VAR_5 = (__le16 *)VAR_1;

  VAR_2 = VAR_2 / 2;
  while (VAR_2--)
   *VAR_4++ = FUNC_1(VAR_5++);
 } else {
  u32 *VAR_6 = (u32 *)VAR_0;
  __le32 *VAR_7 = (__le32 *)VAR_1;

  VAR_2 = VAR_2 / 4;
  while (VAR_2--)
   *VAR_6++ = FUNC_0(VAR_7++);
 }


 return 0;
}
