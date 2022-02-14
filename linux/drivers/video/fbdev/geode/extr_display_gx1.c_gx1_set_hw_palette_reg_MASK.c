
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geodefb_par {scalar_t__ dc_regs; } ;
struct fb_info {struct geodefb_par* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_2, unsigned VAR_3,
       unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
 struct geodefb_par *VAR_7 = VAR_2->par;
 int VAR_8;


 VAR_8 = (VAR_4 << 2) & 0x3f000;
 VAR_8 |= (VAR_5 >> 4) & 0x00fc0;
 VAR_8 |= (VAR_6 >> 10) & 0x0003f;

 FUNC_0(VAR_3, VAR_7->dc_regs + VAR_0);
 FUNC_0(VAR_8, VAR_7->dc_regs + VAR_1);
}
