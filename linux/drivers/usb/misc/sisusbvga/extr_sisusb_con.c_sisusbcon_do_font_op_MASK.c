
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int height; } ;
struct vc_data {int vc_hi_font_mask; int vc_scan_lines; TYPE_1__ vc_font; TYPE_3__* vc_sw; } ;
struct sisusb_usb_data {int font_slot; int current_font_512; int current_font_height; int sisusb_cursor_size_from; int sisusb_cursor_size_to; int lock; scalar_t__ vrambase; } ;
struct TYPE_6__ {int (* con_cursor ) (struct vc_data*,int ) ;} ;
struct TYPE_5__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_9 ;
 int FUNC_2 (struct sisusb_usb_data*,int ,int,unsigned char*) ;
 int FUNC_3 (struct sisusb_usb_data*,int ,int *) ;
 int FUNC_4 (struct sisusb_usb_data*,scalar_t__,int *) ;
 int FUNC_5 (struct sisusb_usb_data*,int ,int,unsigned char) ;
 int FUNC_6 (struct sisusb_usb_data*,int ,int) ;
 int FUNC_7 (struct sisusb_usb_data*,scalar_t__,int ) ;
 int FUNC_8 (struct vc_data*,int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_9 (struct vc_data*,int ,int) ;

int
FUNC_10(struct sisusb_usb_data *VAR_11, int VAR_12, int VAR_13,
   u8 *VAR_14, int VAR_15, int VAR_16, int VAR_17,
   struct vc_data *VAR_18, int VAR_19, int VAR_20)
{
 int VAR_21 = 0x00, VAR_22, VAR_23 = 0;
 u32 VAR_24 = 0;
 u8 VAR_25;
 if ((VAR_13 != 0 && VAR_13 != 2) || !VAR_19) {
  if (VAR_20)
   FUNC_1(&VAR_11->lock);
  return -VAR_1;
 }

 if (VAR_12)
  VAR_11->font_slot = VAR_13;


 if (VAR_13 == 0)
  VAR_16 = 0;
 else
  VAR_24 = 4 * VAR_15;

 VAR_21 = (VAR_13 == 0) ? 0x00 : (VAR_16 ? 0x0e : 0x0a);

 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x00, 0x01);
 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x02, 0x04);
 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x04, 0x07);
 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x00, 0x03);

 if (VAR_23)
  goto font_op_error;

 VAR_23 |= FUNC_5(VAR_11, VAR_6, 0x04, 0x03);
 VAR_23 |= FUNC_5(VAR_11, VAR_6, 0x05, 0x00);
 VAR_23 |= FUNC_5(VAR_11, VAR_6, 0x06, 0x00);

 if (VAR_23)
  goto font_op_error;

 if (VAR_14) {
  if (VAR_12)
   for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
    VAR_23 |= FUNC_7(VAR_11,
     VAR_11->vrambase + VAR_24 + VAR_22,
     VAR_14[VAR_22]);
    if (VAR_23)
     break;
   }
  else
   for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
    VAR_23 |= FUNC_4(VAR_11,
     VAR_11->vrambase + VAR_24 + VAR_22,
     &VAR_14[VAR_22]);
    if (VAR_23)
     break;
   }






  if (VAR_16) {
   if (VAR_12)
    for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
     VAR_23 |= FUNC_7(VAR_11,
      VAR_11->vrambase + VAR_24 +
       (2 * VAR_15) + VAR_22,
      VAR_14[VAR_15 + VAR_22]);
     if (VAR_23)
      break;
    }
   else
    for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
     VAR_23 |= FUNC_4(VAR_11,
      VAR_11->vrambase + VAR_24 +
       (2 * VAR_15) + VAR_22,
      &VAR_14[VAR_15 + VAR_22]);
     if (VAR_23)
      break;
    }
  }
 }

 if (VAR_23)
  goto font_op_error;

 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x00, 0x01);
 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x02, 0x03);
 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x04, 0x03);
 if (VAR_12)
  FUNC_5(VAR_11, VAR_8, 0x03, VAR_21);
 VAR_23 |= FUNC_5(VAR_11, VAR_8, 0x00, 0x03);

 if (VAR_23)
  goto font_op_error;

 VAR_23 |= FUNC_5(VAR_11, VAR_6, 0x04, 0x00);
 VAR_23 |= FUNC_5(VAR_11, VAR_6, 0x05, 0x10);
 VAR_23 |= FUNC_5(VAR_11, VAR_6, 0x06, 0x06);

 if (VAR_23)
  goto font_op_error;

 if ((VAR_12) && (VAR_16 != VAR_11->current_font_512)) {




  for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
   struct vc_data *VAR_26 = VAR_10[VAR_22].d;
   if (VAR_26 && VAR_26->vc_sw == &VAR_9)
    VAR_26->vc_hi_font_mask = VAR_16 ? 0x0800 : 0;
  }

  VAR_11->current_font_512 = VAR_16;




  FUNC_3(VAR_11, VAR_7, &VAR_25);
  FUNC_6(VAR_11, VAR_4, 0x12);
  FUNC_6(VAR_11, VAR_4, VAR_16 ? 0x07 : 0x0f);

  FUNC_3(VAR_11, VAR_7, &VAR_25);
  FUNC_6(VAR_11, VAR_4, 0x20);
  FUNC_3(VAR_11, VAR_7, &VAR_25);
 }

 if (VAR_17) {





  unsigned char VAR_27, VAR_28, VAR_29;
  int VAR_30 = 0, VAR_31 = 0;

  if (VAR_18) {


   VAR_30 = VAR_18->vc_scan_lines / VAR_19;

   VAR_31 = VAR_30 * VAR_19 - 1;




   FUNC_2(VAR_11, VAR_5, 0x07, &VAR_27);
   VAR_28 = VAR_31 & 0xff;
   VAR_27 = (VAR_27 & 0xbd) |
         ((VAR_31 & 0x100) >> 7) |
         ((VAR_31 & 0x200) >> 3);
   FUNC_5(VAR_11, VAR_5, 0x07, VAR_27);
   FUNC_5(VAR_11, VAR_5, 0x12, VAR_28);

  }

  FUNC_2(VAR_11, VAR_5, 0x09, &VAR_29);
  VAR_29 = (VAR_29 & 0xe0) | (VAR_19 - 1);
  FUNC_5(VAR_11, VAR_5, 0x09, VAR_29);
  VAR_11->current_font_height = VAR_19;

  VAR_11->sisusb_cursor_size_from = -1;
  VAR_11->sisusb_cursor_size_to = -1;

 }

 if (VAR_20)
  FUNC_1(&VAR_11->lock);

 if (VAR_17 && VAR_18) {
  int VAR_32 = VAR_18->vc_scan_lines / VAR_19;



  for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
   struct vc_data *VAR_33 = VAR_10[VAR_22].d;

   if (VAR_33 && VAR_33->vc_sw == &VAR_9) {
    if (FUNC_0(VAR_33)) {
     VAR_33->vc_sw->con_cursor(VAR_33, VAR_0);
    }
    VAR_33->vc_font.height = VAR_19;
    FUNC_9(VAR_33, 0, VAR_32);
   }
  }
 }

 return 0;

font_op_error:
 if (VAR_20)
  FUNC_1(&VAR_11->lock);

 return -VAR_2;
}
