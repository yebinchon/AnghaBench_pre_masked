
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_hi_font_mask; int vc_complement_mask; int vc_s_complement_mask; int vc_screenbuf_size; unsigned short vc_video_erase_char; int vc_attr; scalar_t__ vc_can_do_color; scalar_t__ vc_origin; } ;


 unsigned short FUNC_0 (unsigned short*) ;
 int FUNC_1 (unsigned short,unsigned short*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, bool VAR_1)
{
 if (!VAR_1) {
  VAR_0->vc_hi_font_mask = 0;
  if (VAR_0->vc_can_do_color) {
   VAR_0->vc_complement_mask >>= 1;
   VAR_0->vc_s_complement_mask >>= 1;
  }


  if (VAR_0->vc_can_do_color) {
   unsigned short *VAR_2 =
       (unsigned short *) VAR_0->vc_origin;
   int VAR_3 = VAR_0->vc_screenbuf_size / 2;
   unsigned short VAR_4;
   for (; VAR_3 > 0; VAR_3--, VAR_2++) {
    VAR_4 = FUNC_0(VAR_2);
    FUNC_1(((VAR_4 & 0xfe00) >> 1) |
        (VAR_4 & 0xff), VAR_2);
   }
   VAR_4 = VAR_0->vc_video_erase_char;
   VAR_0->vc_video_erase_char =
       ((VAR_4 & 0xfe00) >> 1) | (VAR_4 & 0xff);
   VAR_0->vc_attr >>= 1;
  }
 } else {
  VAR_0->vc_hi_font_mask = 0x100;
  if (VAR_0->vc_can_do_color) {
   VAR_0->vc_complement_mask <<= 1;
   VAR_0->vc_s_complement_mask <<= 1;
  }


  {
   unsigned short *VAR_5 =
       (unsigned short *) VAR_0->vc_origin;
   int VAR_6 = VAR_0->vc_screenbuf_size / 2;
   unsigned short VAR_7;
   for (; VAR_6 > 0; VAR_6--, VAR_5++) {
    unsigned short VAR_8;
    VAR_7 = FUNC_0(VAR_5);
    if (VAR_0->vc_can_do_color)
     VAR_8 =
         ((VAR_7 & 0xff00) << 1) | (VAR_7 &
           0xff);
    else
     VAR_8 = VAR_7 & ~0x100;
    FUNC_1(VAR_8, VAR_5);
   }
   VAR_7 = VAR_0->vc_video_erase_char;
   if (VAR_0->vc_can_do_color) {
    VAR_0->vc_video_erase_char =
        ((VAR_7 & 0xff00) << 1) | (VAR_7 & 0xff);
    VAR_0->vc_attr <<= 1;
   } else
    VAR_0->vc_video_erase_char = VAR_7 & ~0x100;
  }
 }
}
