
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {int vc_hi_font_mask; int vc_can_do_color; TYPE_1__* vc_sw; } ;
typedef int a ;
struct TYPE_2__ {int (* con_invert_region ) (struct vc_data*,unsigned short*,int) ;} ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*,unsigned long,int) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int,int*) ;
 unsigned short* FUNC_6 (struct vc_data*,int,int) ;
 int FUNC_7 (struct vc_data*,unsigned short*,int) ;

void FUNC_8(struct vc_data *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 unsigned short *VAR_4;

 FUNC_0();

 VAR_2 /= 2;
 VAR_4 = FUNC_6(VAR_0, VAR_1, VAR_3);
 if (VAR_0->vc_sw->con_invert_region) {
  VAR_0->vc_sw->con_invert_region(VAR_0, VAR_4, VAR_2);
 } else {
  u16 *VAR_5 = VAR_4;
  int VAR_6 = VAR_2;
  u16 VAR_7;

  if (!VAR_0->vc_can_do_color) {
   while (VAR_6--) {
       VAR_7 = FUNC_4(VAR_5);
       VAR_7 ^= 0x0800;
       FUNC_5(VAR_7, VAR_5);
       VAR_5++;
   }
  } else if (VAR_0->vc_hi_font_mask == 0x100) {
   while (VAR_6--) {
    VAR_7 = FUNC_4(VAR_5);
    VAR_7 = ((VAR_7) & 0x11ff) | (((VAR_7) & 0xe000) >> 4) | (((VAR_7) & 0x0e00) << 4);
    FUNC_5(VAR_7, VAR_5);
    VAR_5++;
   }
  } else {
   while (VAR_6--) {
    VAR_7 = FUNC_4(VAR_5);
    VAR_7 = ((VAR_7) & 0x88ff) | (((VAR_7) & 0x7000) >> 4) | (((VAR_7) & 0x0700) << 4);
    FUNC_5(VAR_7, VAR_5);
    VAR_5++;
   }
  }
 }

 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0, (unsigned long) VAR_4, VAR_2);
 FUNC_3(VAR_0);
}
