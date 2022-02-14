
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;
typedef int a ;



__attribute__((used)) static void
FUNC_0(struct vc_data *VAR_0, u16 *VAR_1, int VAR_2)
{






 while (VAR_2--) {
  u16 VAR_3 = *VAR_1;

  *VAR_1++ = ((VAR_3) & 0x88ff) |
         (((VAR_3) & 0x7000) >> 4) |
         (((VAR_3) & 0x0700) << 4);
 }
}
