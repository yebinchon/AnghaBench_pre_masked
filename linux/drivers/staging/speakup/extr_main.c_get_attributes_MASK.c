
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int vc_hi_font_mask; scalar_t__ vc_origin; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct vc_data*,int,int) ;

__attribute__((used)) static unsigned char FUNC_2(struct vc_data *VAR_0, u16 *VAR_1)
{
 VAR_1 = FUNC_1(VAR_0, VAR_1 - (u16 *)VAR_0->vc_origin, 1);
 return (FUNC_0(VAR_1) & ~VAR_0->vc_hi_font_mask) >> 8;
}
