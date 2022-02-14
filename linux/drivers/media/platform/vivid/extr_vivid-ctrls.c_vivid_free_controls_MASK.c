
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int ctrl_hdl_fb; int ctrl_hdl_loop_cap; int ctrl_hdl_sdtv_cap; int ctrl_hdl_streaming; int ctrl_hdl_user_aud; int ctrl_hdl_user_vid; int ctrl_hdl_user_gen; int ctrl_hdl_sdr_cap; int ctrl_hdl_radio_tx; int ctrl_hdl_radio_rx; int ctrl_hdl_vbi_out; int ctrl_hdl_vbi_cap; int ctrl_hdl_vid_out; int ctrl_hdl_vid_cap; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct vivid_dev *VAR_0)
{
 FUNC_0(&VAR_0->ctrl_hdl_vid_cap);
 FUNC_0(&VAR_0->ctrl_hdl_vid_out);
 FUNC_0(&VAR_0->ctrl_hdl_vbi_cap);
 FUNC_0(&VAR_0->ctrl_hdl_vbi_out);
 FUNC_0(&VAR_0->ctrl_hdl_radio_rx);
 FUNC_0(&VAR_0->ctrl_hdl_radio_tx);
 FUNC_0(&VAR_0->ctrl_hdl_sdr_cap);
 FUNC_0(&VAR_0->ctrl_hdl_user_gen);
 FUNC_0(&VAR_0->ctrl_hdl_user_vid);
 FUNC_0(&VAR_0->ctrl_hdl_user_aud);
 FUNC_0(&VAR_0->ctrl_hdl_streaming);
 FUNC_0(&VAR_0->ctrl_hdl_sdtv_cap);
 FUNC_0(&VAR_0->ctrl_hdl_loop_cap);
 FUNC_0(&VAR_0->ctrl_hdl_fb);
}
