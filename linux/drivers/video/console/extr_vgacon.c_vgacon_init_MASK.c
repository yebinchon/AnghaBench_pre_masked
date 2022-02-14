
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; } ;
struct vc_data {int vc_complement_mask; int vc_hi_font_mask; struct uni_pagedir** vc_uni_pagedir_loc; TYPE_1__ vc_font; int vc_scan_lines; int vc_rows; int vc_cols; int vc_can_do_color; } ;
struct uni_pagedir {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (struct vc_data*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct uni_pagedir* VAR_10 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_11, int VAR_12)
{
 struct uni_pagedir *VAR_13;






 VAR_11->vc_can_do_color = VAR_4;


 if (VAR_12) {
  VAR_11->vc_cols = VAR_7;
  VAR_11->vc_rows = VAR_8;
 } else
  FUNC_2(VAR_11, VAR_7, VAR_8);

 VAR_11->vc_scan_lines = VAR_5;
 VAR_11->vc_font.height = VAR_6;
 VAR_11->vc_complement_mask = 0x7700;
 if (VAR_3)
  VAR_11->vc_hi_font_mask = 0x0800;
 VAR_13 = *VAR_11->vc_uni_pagedir_loc;
 if (VAR_11->vc_uni_pagedir_loc != &VAR_10) {
  FUNC_0(VAR_11);
  VAR_11->vc_uni_pagedir_loc = &VAR_10;
  VAR_9++;
 }
 if (!VAR_10 && VAR_13)
  FUNC_1(VAR_11);


 if (VAR_1 == -1)
  VAR_1 =
   !(VAR_2.flags & VAR_0);
}
