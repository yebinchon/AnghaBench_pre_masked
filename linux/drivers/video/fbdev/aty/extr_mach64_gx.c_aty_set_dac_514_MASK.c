
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aty_pll {int dummy; } aty_pll ;
typedef int u8 ;
typedef int u32 ;
struct fb_info {scalar_t__ par; } ;
struct atyfb_par {int dummy; } ;


 int FUNC_0 (int,int,struct atyfb_par*) ;

__attribute__((used)) static int FUNC_1(const struct fb_info *VAR_0,
      const union aty_pll *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct atyfb_par *VAR_4 = (struct atyfb_par *) VAR_0->par;
 static struct {
  u8 pixel_dly;
  u8 misc2_cntl;
  u8 pixel_rep;
  u8 pixel_cntl_index;
  u8 pixel_cntl_v1;
 } VAR_5[3] = {
  {
  0, 0x41, 0x03, 0x71, 0x45},
  {
  0, 0x45, 0x04, 0x0c, 0x01},
  {
  0, 0x45, 0x06, 0x0e, 0x00},
 };
 int VAR_6;

 switch (VAR_2) {
 case 8:
 default:
  VAR_6 = 0;
  break;
 case 16:
  VAR_6 = 1;
  break;
 case 32:
  VAR_6 = 2;
  break;
 }
 FUNC_0(0x90, 0x00, VAR_4);
 FUNC_0(0x04, VAR_5[VAR_6].pixel_dly, VAR_4);
 FUNC_0(0x05, 0x00, VAR_4);
 FUNC_0(0x02, 0x01, VAR_4);
 FUNC_0(0x71, VAR_5[VAR_6].misc2_cntl, VAR_4);
 FUNC_0(0x0a, VAR_5[VAR_6].pixel_rep, VAR_4);
 FUNC_0(VAR_5[VAR_6].pixel_cntl_index, VAR_5[VAR_6].pixel_cntl_v1, VAR_4);

 return 0;
}
