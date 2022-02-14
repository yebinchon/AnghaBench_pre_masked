
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxfb_par {int dummy; } ;
struct fb_info {struct gxfb_par* par; } ;
typedef int green ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gxfb_par*,int ,int) ;

void FUNC_1(struct fb_info *VAR_2, unsigned VAR_3,
  unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
 struct gxfb_par *VAR_7 = VAR_2->par;
 int VAR_8;


 VAR_8 = (VAR_4 << 8) & 0xff0000;
 VAR_8 |= (VAR_5) & 0x00ff00;
 VAR_8 |= (VAR_6 >> 8) & 0x0000ff;

 FUNC_0(VAR_7, VAR_0, VAR_3);
 FUNC_0(VAR_7, VAR_1, VAR_8);
}
