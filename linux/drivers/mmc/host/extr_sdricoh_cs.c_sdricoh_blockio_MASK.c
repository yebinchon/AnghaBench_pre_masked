
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdricoh_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct sdricoh_host*,int ,int ) ;
 int FUNC_2 (struct sdricoh_host*,int ) ;
 int FUNC_3 (struct sdricoh_host*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sdricoh_host *VAR_6, int VAR_7,
    u8 *VAR_8, int VAR_9)
{
 int VAR_10;
 u32 VAR_11 = 0;

 if (VAR_7) {
  if (FUNC_1(VAR_6, VAR_3,
      VAR_5))
   return -VAR_0;
  FUNC_3(VAR_6, VAR_1, 0x18);

  while (VAR_9) {
   VAR_11 = FUNC_2(VAR_6, VAR_2);
   VAR_10 = FUNC_0(VAR_9, 4);
   VAR_9 -= VAR_10;
   while (VAR_10) {
    *VAR_8 = VAR_11 & 0xFF;
    VAR_8++;
    VAR_11 >>= 8;
    VAR_10--;
   }
  }
 } else {
  if (FUNC_1(VAR_6, VAR_4,
      VAR_5))
   return -VAR_0;
  FUNC_3(VAR_6, VAR_1, 0x18);

  while (VAR_9) {
   VAR_10 = FUNC_0(VAR_9, 4);
   VAR_9 -= VAR_10;
   while (VAR_10) {
    VAR_11 >>= 8;
    VAR_11 |= (u32)*VAR_8 << 24;
    VAR_8++;
    VAR_10--;
   }
   FUNC_3(VAR_6, VAR_2, VAR_11);
  }
 }

 return 0;
}
