
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b43legacy_plcp_hdr4 {int* raw; int data; } ;
typedef int __u8 ;
typedef int __le32 ;


 int const VAR_0 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int) ;

void FUNC_5(struct b43legacy_plcp_hdr4 *VAR_1,
     const u16 VAR_2, const u8 VAR_3)
{
 __le32 *VAR_4 = &(VAR_1->data);
 __u8 *VAR_5 = VAR_1->raw;

 if (FUNC_1(VAR_3)) {
  u16 VAR_6;

  VAR_6 = FUNC_3(VAR_3);
  FUNC_0(VAR_2 & 0xF000);
  VAR_6 |= (VAR_2 << 5);
  *VAR_4 = FUNC_4(VAR_6);
 } else {
  u32 VAR_7;

  VAR_7 = VAR_2 * 16 / VAR_3;
  if ((VAR_2 * 16 % VAR_3) > 0) {
   VAR_7++;
   if ((VAR_3 == VAR_0)
       && ((VAR_2 * 8 % 11) < 4))
    VAR_5[1] = 0x84;
   else
    VAR_5[1] = 0x04;
  } else
   VAR_5[1] = 0x04;
  *VAR_4 |= FUNC_4(VAR_7 << 16);
  VAR_5[0] = FUNC_2(VAR_3);
 }
}
