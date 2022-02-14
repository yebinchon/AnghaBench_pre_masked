
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct vc_data {size_t vc_num; int vc_can_do_color; int vc_complement_mask; int vc_hi_font_mask; int vc_scan_lines; int vc_cols; int vc_rows; int * vc_uni_pagedir_loc; TYPE_1__ vc_font; } ;
struct sisusb_usb_data {int haveconsole; int* havethisconsole; int current_font_height; int lock; int kref; scalar_t__ current_font_512; } ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sisusb_usb_data* FUNC_4 (size_t) ;
 int FUNC_5 (struct sisusb_usb_data*) ;
 int FUNC_6 (struct vc_data*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct vc_data *VAR_0, int VAR_1)
{
 struct sisusb_usb_data *VAR_2;
 int VAR_3, VAR_4;







 VAR_2 = FUNC_4(VAR_0->vc_num);
 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->lock);

 if (!FUNC_5(VAR_2)) {
  FUNC_3(&VAR_2->lock);
  return;
 }

 VAR_0->vc_can_do_color = 1;

 VAR_0->vc_complement_mask = 0x7700;

 VAR_0->vc_hi_font_mask = VAR_2->current_font_512 ? 0x0800 : 0;

 VAR_2->haveconsole = 1;

 VAR_2->havethisconsole[VAR_0->vc_num] = 1;


 VAR_0->vc_scan_lines = 400;

 VAR_0->vc_font.height = VAR_2->current_font_height;


 VAR_3 = 80;
 VAR_4 = VAR_0->vc_scan_lines / VAR_0->vc_font.height;
 FUNC_1(&VAR_2->kref);

 if (!*VAR_0->vc_uni_pagedir_loc)
  FUNC_0(VAR_0);

 FUNC_3(&VAR_2->lock);

 if (VAR_1) {
  VAR_0->vc_cols = VAR_3;
  VAR_0->vc_rows = VAR_4;
 } else
  FUNC_6(VAR_0, VAR_3, VAR_4);
}
