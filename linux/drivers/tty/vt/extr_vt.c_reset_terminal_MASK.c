
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_decawm; int* vc_tab_stop; int vc_cur_blink_ms; int vc_bell_duration; int vc_bell_pitch; int vc_s_complement_mask; int vc_complement_mask; int vc_cursor_type; int vc_num; scalar_t__ vc_decim; int vc_deccm; scalar_t__ vc_decom; scalar_t__ vc_decscnm; scalar_t__ vc_toggle_meta; scalar_t__ vc_disp_ctrl; scalar_t__ vc_utf_count; int vc_utf; scalar_t__ vc_report_mouse; scalar_t__ vc_need_wrap; scalar_t__ vc_charset; int vc_G1_charset; int vc_G0_charset; int vc_translate; int vc_priv; int vc_state; int vc_rows; int vc_bottom; scalar_t__ vc_top; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vc_data*,int) ;
 int VAR_7 ;
 int FUNC_1 (struct vc_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct vc_data*,int ,int ) ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (int ,struct vc_data*) ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct vc_data *VAR_10, int VAR_11)
{
 VAR_10->vc_top = 0;
 VAR_10->vc_bottom = VAR_10->vc_rows;
 VAR_10->vc_state = VAR_4;
 VAR_10->vc_priv = VAR_3;
 VAR_10->vc_translate = FUNC_4(VAR_6, VAR_10);
 VAR_10->vc_G0_charset = VAR_6;
 VAR_10->vc_G1_charset = VAR_5;
 VAR_10->vc_charset = 0;
 VAR_10->vc_need_wrap = 0;
 VAR_10->vc_report_mouse = 0;
 VAR_10->vc_utf = VAR_8;
 VAR_10->vc_utf_count = 0;

 VAR_10->vc_disp_ctrl = 0;
 VAR_10->vc_toggle_meta = 0;

 VAR_10->vc_decscnm = 0;
 VAR_10->vc_decom = 0;
 VAR_10->vc_decawm = 1;
 VAR_10->vc_deccm = VAR_9;
 VAR_10->vc_decim = 0;

 FUNC_6(VAR_10->vc_num);

 VAR_10->vc_cursor_type = VAR_7;
 VAR_10->vc_complement_mask = VAR_10->vc_s_complement_mask;

 FUNC_1(VAR_10);
 FUNC_5(VAR_10);

 VAR_10->vc_tab_stop[0] =
 VAR_10->vc_tab_stop[1] =
 VAR_10->vc_tab_stop[2] =
 VAR_10->vc_tab_stop[3] =
 VAR_10->vc_tab_stop[4] =
 VAR_10->vc_tab_stop[5] =
 VAR_10->vc_tab_stop[6] =
 VAR_10->vc_tab_stop[7] = 0x01010101;

 VAR_10->vc_bell_pitch = VAR_1;
 VAR_10->vc_bell_duration = VAR_0;
 VAR_10->vc_cur_blink_ms = VAR_2;

 FUNC_2(VAR_10, 0, 0);
 FUNC_3(VAR_10);
 if (VAR_11)
     FUNC_0(VAR_10, 2);
}
