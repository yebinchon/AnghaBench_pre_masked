
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int format; } ;
struct usbvision_frame {int frmwidth; int frmheight; unsigned char* data; int width; int curline; int v4l2_linesize; TYPE_1__ v4l2_format; } ;
struct usb_usbvision {unsigned char* intra_frame_buffer; int block_pos; int max_strip_len; int comprblock_pos; int strip_len_errors; int strip_line_number_errors; int strip_magic_errors; struct usbvision_frame* cur_frame; } ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct usb_usbvision*,unsigned char*,int) ;
 int FUNC_2 (struct usb_usbvision*,unsigned char*,int*,int) ;
 int FUNC_3 (struct usb_usbvision*) ;
 int FUNC_4 (struct usb_usbvision*,int*,int ) ;
 int FUNC_5 (struct usb_usbvision*) ;
 int FUNC_6 (struct usb_usbvision*,unsigned char*,unsigned char*,int*,int*,int) ;
 int FUNC_7 (struct usb_usbvision*) ;

__attribute__((used)) static enum parse_state FUNC_8(struct usb_usbvision *VAR_10,
        long *VAR_11)
{




 struct usbvision_frame *VAR_12;
 unsigned char *VAR_13, *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 unsigned char VAR_16[400];
 unsigned char VAR_17[3];
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;
 int VAR_26;
 unsigned char VAR_27, VAR_28, VAR_29;
 static unsigned char *VAR_30, *VAR_31, *VAR_32;

 VAR_12 = VAR_10->cur_frame;
 VAR_26 = VAR_12->frmwidth * VAR_12->frmheight;
 if ((VAR_12->v4l2_format.format == VAR_4) ||
     (VAR_12->v4l2_format.format == VAR_6)) {

  VAR_13 = VAR_12->data + (VAR_12->width * VAR_12->curline);
 } else
  VAR_13 = VAR_12->data + (VAR_12->v4l2_linesize * VAR_12->curline);

 if (VAR_12->v4l2_format.format == VAR_5) {

  VAR_14 = VAR_12->data
   + VAR_26
   + (VAR_12->frmwidth >> 1) * VAR_12->curline;
  VAR_15 = VAR_14 + (VAR_26 >> 1);
 } else if (VAR_12->v4l2_format.format == VAR_6) {
  VAR_15 = VAR_12->data + VAR_26 + ((VAR_12->curline * (VAR_12->width)) >> 2);
  VAR_14 = VAR_15 + (VAR_26 >> 2);
 }

 if (VAR_12->curline == 0)
  FUNC_5(VAR_10);

 if (FUNC_3(VAR_10) < 3)
  return VAR_9;


 FUNC_4(VAR_10, &VAR_21, 0);
 FUNC_2(VAR_10, &VAR_17[0], &VAR_21,
    3);

 if (VAR_17[0] != 0x5A) {

  VAR_10->strip_magic_errors++;
  return VAR_8;
 }

 if (VAR_12->curline != (int)VAR_17[2]) {

  VAR_10->strip_line_number_errors++;
 }

 VAR_20 = 2 * (unsigned int)VAR_17[1];
 if (VAR_20 > 400) {


  FUNC_7(VAR_10);
 }

 if (FUNC_3(VAR_10) < VAR_20) {

  return VAR_9;
 }

 if (VAR_10->intra_frame_buffer) {
  VAR_30 = VAR_10->intra_frame_buffer + VAR_12->frmwidth * VAR_12->curline;
  VAR_31 = VAR_10->intra_frame_buffer + VAR_26 + (VAR_12->frmwidth / 2) * (VAR_12->curline / 2);
  VAR_32 = VAR_10->intra_frame_buffer + VAR_26 / 4 * 5 + (VAR_12->frmwidth / 2) * (VAR_12->curline / 2);
 } else {
  return VAR_8;
 }

 VAR_25 = VAR_12->curline * VAR_0;

 FUNC_1(VAR_10, VAR_16, VAR_20);

 VAR_19 = VAR_12->frmwidth;
 VAR_24 = 3;
 VAR_22 = VAR_24 + (VAR_19 - 1) / 96 + (VAR_19 / 2 - 1) / 96 + 2;
 VAR_23 = VAR_22;

 VAR_10->block_pos = VAR_23;

 FUNC_6(VAR_10, VAR_16, VAR_30, &VAR_23, &VAR_24, VAR_19);
 if (VAR_20 > VAR_10->max_strip_len)
  VAR_10->max_strip_len = VAR_20;

 if (VAR_12->curline % 2)
  FUNC_6(VAR_10, VAR_16, VAR_32, &VAR_23, &VAR_24, VAR_19 / 2);
 else
  FUNC_6(VAR_10, VAR_16, VAR_31, &VAR_23, &VAR_24, VAR_19 / 2);

 if (VAR_23 > VAR_10->comprblock_pos)
  VAR_10->comprblock_pos = VAR_23;
 if (VAR_23 > VAR_20)
  VAR_10->strip_len_errors++;

 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
  if (VAR_12->v4l2_format.format == VAR_5) {
   *VAR_13++ = VAR_30[VAR_18];
   *VAR_13++ = VAR_18 & 0x01 ? VAR_31[VAR_18 / 2] : VAR_32[VAR_18 / 2];
  } else if (VAR_12->v4l2_format.format == VAR_4) {
   *VAR_13++ = VAR_30[VAR_18];
   if (VAR_18 & 0x01)
    *VAR_14++ = VAR_31[VAR_18 >> 1];
   else
    *VAR_15++ = VAR_32[VAR_18 >> 1];
  } else if (VAR_12->v4l2_format.format == VAR_6) {
   *VAR_13++ = VAR_30[VAR_18];
   if (!((VAR_18 & 0x01) | (VAR_12->curline & 0x01))) {


    *VAR_14++ = VAR_31[VAR_18 >> 1];
    *VAR_15++ = VAR_32[VAR_18 >> 1];
   }
  } else {
   FUNC_0(VAR_30[VAR_18], VAR_31[VAR_18 / 2], VAR_32[VAR_18 / 2], VAR_27, VAR_28, VAR_29);
   switch (VAR_12->v4l2_format.format) {
   case 132:
    *VAR_13++ = VAR_30[VAR_18];
    break;
   case 129:
    *VAR_13++ = (0x1F & VAR_27) |
     (0xE0 & (VAR_28 << 5));
    *VAR_13++ = (0x03 & (VAR_28 >> 3)) |
     (0x7C & (VAR_29 << 2));
    break;
   case 128:
    *VAR_13++ = (0x1F & VAR_27) |
     (0xE0 & (VAR_28 << 5));
    *VAR_13++ = (0x07 & (VAR_28 >> 3)) |
     (0xF8 & VAR_29);
    break;
   case 131:
    *VAR_13++ = VAR_27;
    *VAR_13++ = VAR_28;
    *VAR_13++ = VAR_29;
    break;
   case 130:
    *VAR_13++ = VAR_27;
    *VAR_13++ = VAR_28;
    *VAR_13++ = VAR_29;
    VAR_13++;
    break;
   }
  }
  VAR_25++;
 }

 if (VAR_12->v4l2_format.format != VAR_6)
  *VAR_11 += VAR_12->v4l2_linesize;
 else
  *VAR_11 += VAR_12->curline & 0x01 ? VAR_12->v4l2_linesize : VAR_12->v4l2_linesize << 1;

 VAR_12->curline += 1;

 if (VAR_12->curline >= VAR_12->frmheight)
  return VAR_8;
 return VAR_7;

}
