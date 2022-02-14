
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_0; } ;
struct lcn_tx_iir_filter {int member_0; scalar_t__ type; int * values; TYPE_1__ member_1; } ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (struct lcn_tx_iir_filter*) ;
 int FUNC_1 (struct b43_wldev*,int,int ) ;

__attribute__((used)) static bool FUNC_2(struct b43_wldev *VAR_0,
      u8 VAR_1)
{
 int VAR_2, VAR_3;
 u16 VAR_4[] = { 0x90f, 0x900, 0x901, 0x906, 0x907, 0x908, 0x902,
      0x903, 0x909, 0x90a, 0x90b, 0x904, 0x905, 0x90c,
      0x90d, 0x90e };
 struct lcn_tx_iir_filter VAR_5[] = {
  { 0, { 0, 0xa2, 0x0, 0x100, 0x100, 0x0, 0x0, 0x0, 0x100, 0x0,
         0x0, 0x278, 0xfea0, 0x80, 0x100, 0x80 } },
  { 1, { 0, 374, 0xFF79, 16, 32, 16, 799, 0xFE74, 50, 32, 50, 750,
         0xFE2B, 212, 0xFFCE, 212 } },
  { 2, { 0, 375, 0xFF16, 37, 76, 37, 799, 0xFE74, 32, 20, 32, 748,
         0xFEF2, 128, 0xFFE2, 128 } },
 };

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_5); VAR_2++) {
  if (VAR_5[VAR_2].type == VAR_1) {
   for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
    FUNC_1(VAR_0, VAR_4[VAR_3],
           VAR_5[VAR_2].values[VAR_3]);
   return 1;
  }
 }

 return 0;
}
