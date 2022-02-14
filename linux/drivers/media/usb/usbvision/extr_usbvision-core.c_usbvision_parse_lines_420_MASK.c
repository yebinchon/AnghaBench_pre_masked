
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bytes_per_pixel; int format; } ;
struct TYPE_3__ {unsigned int frame_width; } ;
struct usbvision_frame {unsigned char* data; int v4l2_linesize; int curline; int frmheight; TYPE_2__ v4l2_format; TYPE_1__ isoc_header; } ;
struct usb_usbvision {int stretch_height; int stretch_width; struct usbvision_frame* cur_frame; } ;
typedef enum parse_state { ____Placeholder_parse_state } parse_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_usbvision*,unsigned char*,int) ;
 int FUNC_2 (struct usb_usbvision*,unsigned char*,int*,int) ;
 int FUNC_3 (int*,int const) ;
 int FUNC_4 (struct usb_usbvision*) ;
 int FUNC_5 (struct usb_usbvision*,int const) ;
 int FUNC_6 (struct usb_usbvision*,int*,int const) ;

__attribute__((used)) static enum parse_state FUNC_7(struct usb_usbvision *VAR_5,
        long *VAR_6)
{
 struct usbvision_frame *VAR_7;
 unsigned char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 unsigned int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 const int VAR_18 = 128;
 const int VAR_19 = 64;
 const int VAR_20 = 32;
 const int VAR_21[] = { 0, 0, 0, 2 }, VAR_22 = 4;
 const int VAR_23[] = { 0, 0, 0, 4 }, VAR_24 = 4;
 unsigned char VAR_25[2], VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34, VAR_35, VAR_36;
 unsigned char VAR_37;
 int VAR_38, VAR_39, VAR_40;
 int VAR_41, VAR_42;

 VAR_7 = VAR_5->cur_frame;
 VAR_8 = VAR_7->data + (VAR_7->v4l2_linesize * VAR_7->curline);
 VAR_9 = VAR_8 + VAR_7->v4l2_linesize * VAR_5->stretch_height;




 VAR_40 = VAR_7->v4l2_format.bytes_per_pixel;
 VAR_42 = (VAR_5->stretch_width - 1) * VAR_40;
 VAR_38 = VAR_7->curline * VAR_0;
 VAR_39 = VAR_38 + VAR_0;
 VAR_41 = VAR_5->stretch_width;
 VAR_10 = VAR_7->isoc_header.frame_width;

 if (FUNC_4(VAR_5) < (int)VAR_10 * 3) {

  return VAR_4;
 }

 if ((VAR_7->curline + 1) >= VAR_7->frmheight)
  return VAR_3;

 VAR_13 = (VAR_10%VAR_18) ? 1 : 0;

 VAR_17 = (VAR_10 / VAR_18) * (VAR_18 + VAR_19)
   + VAR_13 * VAR_19;

 FUNC_6(VAR_5, &VAR_14, VAR_17);
 FUNC_6(VAR_5, &VAR_15, VAR_18);
 FUNC_6(VAR_5, &VAR_16, VAR_17
   + (4 - VAR_13) * VAR_20);

 for (VAR_11 = 0; VAR_11 < (VAR_10 / VAR_20); VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_20; VAR_12 += 2) {
   FUNC_1(VAR_5, &VAR_25[0], 2);
   FUNC_2(VAR_5, &VAR_26, &VAR_15, 1);
   FUNC_2(VAR_5, &VAR_27, &VAR_16, 1);


   VAR_30 = VAR_27 - 128;
   VAR_29 = VAR_26 - 128;
   VAR_31 = 132252 * VAR_30;
   VAR_32 = -53281 * VAR_29 - 25625 * VAR_30;
   VAR_33 = 104595 * VAR_29;

   if (VAR_7->v4l2_format.format == VAR_1) {
    *VAR_8++ = VAR_25[0];
    *VAR_8++ = VAR_27;
   } else {
    VAR_28 = 76284 * (VAR_25[0] - 16);

    VAR_36 = (VAR_28 + VAR_31) >> 16;
    VAR_35 = (VAR_28 + VAR_32) >> 16;
    VAR_34 = (VAR_28 + VAR_33) >> 16;

    switch (VAR_7->v4l2_format.format) {
    case 128:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_8++ =
      (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_8++ =
      (0x07 & (VAR_37 >> 3)) |
      (0xF8 & FUNC_0(VAR_36));
     break;
    case 131:
     *VAR_8++ = FUNC_0(VAR_34);
     *VAR_8++ = FUNC_0(VAR_35);
     *VAR_8++ = FUNC_0(VAR_36);
     break;
    case 130:
     *VAR_8++ = FUNC_0(VAR_34);
     *VAR_8++ = FUNC_0(VAR_35);
     *VAR_8++ = FUNC_0(VAR_36);
     VAR_8++;
     break;
    case 129:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_8++ = (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_8++ = (0x03 & (VAR_37 >> 3)) |
      (0x7C & (FUNC_0(VAR_36) << 2));
     break;
    }
   }
   VAR_38 += VAR_41;
   VAR_8 += VAR_42;

   if (VAR_7->v4l2_format.format == VAR_1) {
    *VAR_8++ = VAR_25[1];
    *VAR_8++ = VAR_26;
   } else {
    VAR_28 = 76284 * (VAR_25[1] - 16);

    VAR_36 = (VAR_28 + VAR_31) >> 16;
    VAR_35 = (VAR_28 + VAR_32) >> 16;
    VAR_34 = (VAR_28 + VAR_33) >> 16;

    switch (VAR_7->v4l2_format.format) {
    case 128:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_8++ =
      (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_8++ =
      (0x07 & (VAR_37 >> 3)) |
      (0xF8 & FUNC_0(VAR_36));
     break;
    case 131:
     *VAR_8++ = FUNC_0(VAR_34);
     *VAR_8++ = FUNC_0(VAR_35);
     *VAR_8++ = FUNC_0(VAR_36);
     break;
    case 130:
     *VAR_8++ = FUNC_0(VAR_34);
     *VAR_8++ = FUNC_0(VAR_35);
     *VAR_8++ = FUNC_0(VAR_36);
     VAR_8++;
     break;
    case 129:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_8++ = (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_8++ = (0x03 & (VAR_37 >> 3)) |
      (0x7C & (FUNC_0(VAR_36) << 2));
     break;
    }
   }
   VAR_38 += VAR_41;
   VAR_8 += VAR_42;

   FUNC_2(VAR_5, &VAR_25[0], &VAR_14, 2);

   if (VAR_7->v4l2_format.format == VAR_1) {
    *VAR_9++ = VAR_25[0];
    *VAR_9++ = VAR_27;
   } else {
    VAR_28 = 76284 * (VAR_25[0] - 16);

    VAR_36 = (VAR_28 + VAR_31) >> 16;
    VAR_35 = (VAR_28 + VAR_32) >> 16;
    VAR_34 = (VAR_28 + VAR_33) >> 16;

    switch (VAR_7->v4l2_format.format) {
    case 128:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_9++ =
      (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_9++ =
      (0x07 & (VAR_37 >> 3)) |
      (0xF8 & FUNC_0(VAR_36));
     break;
    case 131:
     *VAR_9++ = FUNC_0(VAR_34);
     *VAR_9++ = FUNC_0(VAR_35);
     *VAR_9++ = FUNC_0(VAR_36);
     break;
    case 130:
     *VAR_9++ = FUNC_0(VAR_34);
     *VAR_9++ = FUNC_0(VAR_35);
     *VAR_9++ = FUNC_0(VAR_36);
     VAR_9++;
     break;
    case 129:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_9++ = (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_9++ = (0x03 & (VAR_37 >> 3)) |
      (0x7C & (FUNC_0(VAR_36) << 2));
     break;
    }
   }
   VAR_39 += VAR_41;
   VAR_9 += VAR_42;

   if (VAR_7->v4l2_format.format == VAR_1) {
    *VAR_9++ = VAR_25[1];
    *VAR_9++ = VAR_26;
   } else {
    VAR_28 = 76284 * (VAR_25[1] - 16);

    VAR_36 = (VAR_28 + VAR_31) >> 16;
    VAR_35 = (VAR_28 + VAR_32) >> 16;
    VAR_34 = (VAR_28 + VAR_33) >> 16;

    switch (VAR_7->v4l2_format.format) {
    case 128:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_9++ =
      (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_9++ =
      (0x07 & (VAR_37 >> 3)) |
      (0xF8 & FUNC_0(VAR_36));
     break;
    case 131:
     *VAR_9++ = FUNC_0(VAR_34);
     *VAR_9++ = FUNC_0(VAR_35);
     *VAR_9++ = FUNC_0(VAR_36);
     break;
    case 130:
     *VAR_9++ = FUNC_0(VAR_34);
     *VAR_9++ = FUNC_0(VAR_35);
     *VAR_9++ = FUNC_0(VAR_36);
     VAR_9++;
     break;
    case 129:
     VAR_37 = FUNC_0(VAR_35);
     *VAR_9++ = (0x1F & FUNC_0(VAR_34)) |
      (0xE0 & (VAR_37 << 5));
     *VAR_9++ = (0x03 & (VAR_37 >> 3)) |
      (0x7C & (FUNC_0(VAR_36) << 2));
     break;
    }
   }
   VAR_39 += VAR_41;
   VAR_9 += VAR_42;
  }

  FUNC_5(VAR_5, VAR_21[VAR_11 % VAR_22] * VAR_20);
  FUNC_3(&VAR_14, VAR_21[(VAR_11 + 2 * VAR_13) % VAR_22]
    * VAR_20);
  FUNC_3(&VAR_15, VAR_23[VAR_11 % VAR_24]
    * VAR_20);
  FUNC_3(&VAR_16, VAR_23[(VAR_11 + 2 * VAR_13) % VAR_24]
    * VAR_20);
 }

 FUNC_5(VAR_5, VAR_10 * 3 / 2
   + VAR_13 * VAR_20);

 VAR_7->curline += 2 * VAR_5->stretch_height;
 *VAR_6 += VAR_7->v4l2_linesize * 2 * VAR_5->stretch_height;

 if (VAR_7->curline >= VAR_7->frmheight)
  return VAR_3;
 return VAR_2;
}
