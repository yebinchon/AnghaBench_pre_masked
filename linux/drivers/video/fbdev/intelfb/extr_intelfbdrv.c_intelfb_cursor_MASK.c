
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_4__ {int physical; int offset; } ;
struct intelfb_info {int depth; size_t* pseudo_palette; int* cursor_src; TYPE_1__ cursor; scalar_t__ mobile; int hwcursor; } ;
struct TYPE_5__ {size_t xoffset; size_t yoffset; } ;
struct fb_info {TYPE_2__ var; } ;
struct TYPE_6__ {int width; int height; size_t dx; size_t dy; size_t fg_color; size_t bg_color; int depth; scalar_t__ data; } ;
struct fb_cursor {int set; int rop; scalar_t__ enable; TYPE_3__ image; scalar_t__ mask; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct intelfb_info* FUNC_1 (struct fb_info*) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct intelfb_info*) ;


 int FUNC_4 (int,int) ;
 int FUNC_5 (struct intelfb_info*) ;
 int FUNC_6 (struct intelfb_info*) ;
 int FUNC_7 (struct intelfb_info*,int,int,int*) ;
 int FUNC_8 (struct intelfb_info*) ;
 int FUNC_9 (struct intelfb_info*,size_t,size_t) ;
 int FUNC_10 (struct intelfb_info*,size_t,size_t) ;
 int FUNC_11 (struct intelfb_info*) ;
 int FUNC_12 (int*,int*,size_t) ;

__attribute__((used)) static int FUNC_13(struct fb_info *VAR_8, struct fb_cursor *VAR_9)
{
        struct intelfb_info *VAR_10 = FUNC_1(VAR_8);
 u32 VAR_11;




 if (!VAR_10->hwcursor)
  return -VAR_1;

 FUNC_5(VAR_10);


 VAR_11 = (VAR_10->mobile || FUNC_3(VAR_10)) ? VAR_10->cursor.physical :
     (VAR_10->cursor.offset << 12);

 if (FUNC_2(VAR_0) != VAR_11) {
  u32 VAR_12, VAR_13;

  FUNC_0("the cursor was killed - restore it !!\n");
  FUNC_0("size %d, %d   pos %d, %d\n",
   VAR_9->image.width, VAR_9->image.height,
   VAR_9->image.dx, VAR_9->image.dy);

  FUNC_6(VAR_10);
  FUNC_8(VAR_10);
  FUNC_10(VAR_10, VAR_9->image.dx,
     VAR_9->image.dy);

  if (VAR_10->depth != 8) {
   VAR_12 =VAR_10->pseudo_palette[VAR_9->image.fg_color];
   VAR_13 =VAR_10->pseudo_palette[VAR_9->image.bg_color];
  } else {
   VAR_12 = VAR_9->image.fg_color;
   VAR_13 = VAR_9->image.bg_color;
  }
  FUNC_9(VAR_10, VAR_13, VAR_12);
  FUNC_7(VAR_10, VAR_9->image.width,
          VAR_9->image.height,
          VAR_10->cursor_src);

  if (VAR_9->enable)
   FUNC_11(VAR_10);
  return 0;
 }

 if (VAR_9->set & VAR_5) {
  u32 VAR_14, VAR_15;

  VAR_14 = VAR_9->image.dx - VAR_8->var.xoffset;
  VAR_15 = VAR_9->image.dy - VAR_8->var.yoffset;

  FUNC_10(VAR_10, VAR_14, VAR_15);
 }

 if (VAR_9->set & VAR_7) {
  if (VAR_9->image.width > 64 || VAR_9->image.height > 64)
   return -VAR_2;

  FUNC_8(VAR_10);
 }

 if (VAR_9->set & VAR_3) {
  u32 VAR_16, VAR_17;

  if (VAR_10->depth != 8) {
   VAR_16 = VAR_10->pseudo_palette[VAR_9->image.fg_color];
   VAR_17 = VAR_10->pseudo_palette[VAR_9->image.bg_color];
  } else {
   VAR_16 = VAR_9->image.fg_color;
   VAR_17 = VAR_9->image.bg_color;
  }

  FUNC_9(VAR_10, VAR_17, VAR_16);
 }

 if (VAR_9->set & (VAR_6 | VAR_4)) {
  u32 VAR_18 = (FUNC_4(VAR_9->image.width, 8) / 8);
  u32 VAR_19 = VAR_18 * VAR_9->image.height;
  u8 *VAR_20 = (u8 *) VAR_9->image.data;
  u8 *VAR_21 = (u8 *) VAR_9->mask;
  u8 VAR_22[64];
  u32 VAR_23;

  if (VAR_9->image.depth != 1)
   return -VAR_2;

  switch (VAR_9->rop) {
  case 128:
   for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++)
    VAR_22[VAR_23] = VAR_20[VAR_23] ^ VAR_21[VAR_23];
   break;
  case 129:
  default:
   for (VAR_23 = 0; VAR_23 < VAR_19; VAR_23++)
    VAR_22[VAR_23] = VAR_20[VAR_23] & VAR_21[VAR_23];
   break;
  }



  FUNC_12(VAR_10->cursor_src, VAR_22, VAR_19);

  FUNC_7(VAR_10, VAR_9->image.width,
          VAR_9->image.height, VAR_22);
 }

 if (VAR_9->enable)
  FUNC_11(VAR_10);

 return 0;
}
