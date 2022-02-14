
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u16 ;
struct vc_data {int vc_hi_font_mask; scalar_t__ vc_origin; } ;


 int FUNC_0 (struct vc_data*,int,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (struct vc_data*,int,int) ;

__attribute__((used)) static u16 FUNC_3(struct vc_data *VAR_0, u16 *VAR_1, u_char *VAR_2)
{
 u16 VAR_3 = ' ';

 if (VAR_0 && VAR_1) {
  u16 VAR_4;
  u16 VAR_5;

  VAR_1 = FUNC_2(VAR_0, VAR_1 - (u16 *)VAR_0->vc_origin, 1);
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = VAR_4 & 0xff;

  if (VAR_4 & VAR_0->vc_hi_font_mask) {
   VAR_4 &= ~VAR_0->vc_hi_font_mask;
   VAR_5 |= 0x100;
  }

  VAR_3 = FUNC_0(VAR_0, VAR_5, 1);
  *VAR_2 = (VAR_4 & 0xff00) >> 8;
 }
 return VAR_3;
}
