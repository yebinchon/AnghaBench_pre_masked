
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bytes_per_pixel; int format; } ;
struct TYPE_3__ {int frame_width; } ;
struct usbvision_frame {unsigned char* data; int v4l2_linesize; int curline; int frmheight; int frmwidth; TYPE_2__ v4l2_format; TYPE_1__ isoc_header; } ;
struct usb_usbvision {int stretch_width; int stretch_height; struct usbvision_frame* cur_frame; } ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;




 int VAR_2 ;
 int FUNC_1 (unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct usb_usbvision*,unsigned char*,int) ;
 int FUNC_3 (struct usb_usbvision*) ;

__attribute__((used)) static enum parse_state FUNC_4(struct usb_usbvision *VAR_6,
        long *VAR_7)
{
 volatile struct usbvision_frame *VAR_8;
 unsigned char *VAR_9;
 int VAR_10;
 int VAR_11;
 unsigned char VAR_12[4] = { 180, 128, 10, 128 };
 unsigned char VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_8 = VAR_6->cur_frame;
 VAR_9 = VAR_8->data + (VAR_8->v4l2_linesize * VAR_8->curline);


 VAR_10 = (VAR_8->isoc_header.frame_width * 2) + 5;
 if (FUNC_3(VAR_6) < VAR_10) {
  FUNC_0(VAR_0, "out of data in line %d, need %u.\n", VAR_8->curline, VAR_10);
  return VAR_5;
 }

 if ((VAR_8->curline + 1) >= VAR_8->frmheight)
  return VAR_4;

 VAR_17 = VAR_8->v4l2_format.bytes_per_pixel;
 VAR_18 = (VAR_6->stretch_width - 1) * VAR_17;
 VAR_16 = VAR_8->curline * VAR_1;
 VAR_19 = VAR_6->stretch_width;

 for (VAR_11 = 0; VAR_11 < VAR_8->frmwidth; VAR_11 += (2 * VAR_6->stretch_width)) {
  FUNC_2(VAR_6, &VAR_12[0], 4);

  if (VAR_8->v4l2_format.format == VAR_2) {
   *VAR_9++ = VAR_12[0];
   *VAR_9++ = VAR_12[3];
  } else {
   FUNC_1(VAR_12[0], VAR_12[1], VAR_12[3], VAR_13, VAR_14, VAR_15);
   switch (VAR_8->v4l2_format.format) {
   case 128:
    *VAR_9++ = (0x1F & VAR_13) |
     (0xE0 & (VAR_14 << 5));
    *VAR_9++ = (0x07 & (VAR_14 >> 3)) |
     (0xF8 & VAR_15);
    break;
   case 131:
    *VAR_9++ = VAR_13;
    *VAR_9++ = VAR_14;
    *VAR_9++ = VAR_15;
    break;
   case 130:
    *VAR_9++ = VAR_13;
    *VAR_9++ = VAR_14;
    *VAR_9++ = VAR_15;
    VAR_9++;
    break;
   case 129:
    *VAR_9++ = (0x1F & VAR_13) |
     (0xE0 & (VAR_14 << 5));
    *VAR_9++ = (0x03 & (VAR_14 >> 3)) |
     (0x7C & (VAR_15 << 2));
    break;
   }
  }
  VAR_16 += VAR_19;
  VAR_9 += VAR_18;

  if (VAR_8->v4l2_format.format == VAR_2) {
   *VAR_9++ = VAR_12[2];
   *VAR_9++ = VAR_12[1];
  } else {
   FUNC_1(VAR_12[2], VAR_12[1], VAR_12[3], VAR_13, VAR_14, VAR_15);
   switch (VAR_8->v4l2_format.format) {
   case 128:
    *VAR_9++ = (0x1F & VAR_13) |
     (0xE0 & (VAR_14 << 5));
    *VAR_9++ = (0x07 & (VAR_14 >> 3)) |
     (0xF8 & VAR_15);
    break;
   case 131:
    *VAR_9++ = VAR_13;
    *VAR_9++ = VAR_14;
    *VAR_9++ = VAR_15;
    break;
   case 130:
    *VAR_9++ = VAR_13;
    *VAR_9++ = VAR_14;
    *VAR_9++ = VAR_15;
    VAR_9++;
    break;
   case 129:
    *VAR_9++ = (0x1F & VAR_13) |
     (0xE0 & (VAR_14 << 5));
    *VAR_9++ = (0x03 & (VAR_14 >> 3)) |
     (0x7C & (VAR_15 << 2));
    break;
   }
  }
  VAR_16 += VAR_19;
  VAR_9 += VAR_18;
 }

 VAR_8->curline += VAR_6->stretch_height;
 *VAR_7 += VAR_8->v4l2_linesize * VAR_6->stretch_height;

 if (VAR_8->curline >= VAR_8->frmheight)
  return VAR_4;
 return VAR_3;
}
