
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct imxfb_info {int palette_size; scalar_t__ regs; } ;
struct fb_info {struct imxfb_info* par; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
  u_int VAR_4, struct fb_info *VAR_5)
{
 struct imxfb_info *VAR_6 = VAR_5->par;
 u_int VAR_7, VAR_8 = 1;


 if (VAR_0 < VAR_6->palette_size) {
  VAR_7 = (((((VAR_1)<<(4))+0x7FFF-(VAR_1))>>16) << 8) |
        (((((VAR_2)<<(4))+0x7FFF-(VAR_2))>>16) << 4) |
        ((((VAR_3)<<(4))+0x7FFF-(VAR_3))>>16);

  FUNC_1(VAR_7, VAR_6->regs + 0x800 + (VAR_0 << 2));
  VAR_8 = 0;
 }
 return VAR_8;
}
