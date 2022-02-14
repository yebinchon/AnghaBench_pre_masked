
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned short vc_video_erase_char; int vc_cols; int vc_rows; scalar_t__ vc_hi_font_mask; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (struct vc_data*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, struct fb_info *VAR_1,
    int VAR_2)
{
 if (VAR_2) {
  unsigned short VAR_3 = VAR_0->vc_hi_font_mask ?
   0x1ff : 0xff;
  unsigned short VAR_4;

  VAR_4 = VAR_0->vc_video_erase_char;
  VAR_0->vc_video_erase_char &= VAR_3;
  FUNC_0(VAR_0, 0, 0, VAR_0->vc_rows, VAR_0->vc_cols);
  VAR_0->vc_video_erase_char = VAR_4;
 }
}
