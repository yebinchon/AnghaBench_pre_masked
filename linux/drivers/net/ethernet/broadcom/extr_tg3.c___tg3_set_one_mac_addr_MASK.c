
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tg3 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_4, u8 *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = ((VAR_5[0] << 8) | VAR_5[1]);
 VAR_8 = ((VAR_5[2] << 24) | (VAR_5[3] << 16) |
      (VAR_5[4] << 8) | VAR_5[5]);

 if (VAR_6 < 4) {
  FUNC_0(VAR_0 + (VAR_6 * 8), VAR_7);
  FUNC_0(VAR_1 + (VAR_6 * 8), VAR_8);
 } else {
  VAR_6 -= 4;
  FUNC_0(VAR_2 + (VAR_6 * 8), VAR_7);
  FUNC_0(VAR_3 + (VAR_6 * 8), VAR_8);
 }
}
