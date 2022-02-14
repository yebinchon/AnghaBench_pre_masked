
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_num; int vc_complement_mask; int vc_s_complement_mask; int vc_size_row; int vc_cols; int vc_screenbuf_size; int vc_rows; scalar_t__ vc_can_do_color; TYPE_1__* vc_sw; int vc_cur_blink_ms; scalar_t__ vc_hi_font_mask; int * vc_uni_pagedir; int ** vc_uni_pagedir_loc; int * vc_display_fg; } ;
struct TYPE_3__ {int (* con_init ) (struct vc_data*,int) ;int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (struct vc_data*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vc_data*,int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_4, int VAR_5, int VAR_6)
{

 if (VAR_4->vc_sw)
  FUNC_2(VAR_4->vc_sw->owner);
 VAR_4->vc_sw = VAR_2;

 if (VAR_1[VAR_5])
  VAR_4->vc_sw = VAR_1[VAR_5];

 FUNC_0(VAR_4->vc_sw->owner);
 VAR_4->vc_num = VAR_5;
 VAR_4->vc_display_fg = &VAR_3;
 if (VAR_4->vc_uni_pagedir_loc)
  FUNC_1(VAR_4);
 VAR_4->vc_uni_pagedir_loc = &VAR_4->vc_uni_pagedir;
 VAR_4->vc_uni_pagedir = ((void*)0);
 VAR_4->vc_hi_font_mask = 0;
 VAR_4->vc_complement_mask = 0;
 VAR_4->vc_can_do_color = 0;
 VAR_4->vc_cur_blink_ms = VAR_0;
 VAR_4->vc_sw->con_init(VAR_4, VAR_6);
 if (!VAR_4->vc_complement_mask)
  VAR_4->vc_complement_mask = VAR_4->vc_can_do_color ? 0x7700 : 0x0800;
 VAR_4->vc_s_complement_mask = VAR_4->vc_complement_mask;
 VAR_4->vc_size_row = VAR_4->vc_cols << 1;
 VAR_4->vc_screenbuf_size = VAR_4->vc_rows * VAR_4->vc_size_row;
}
