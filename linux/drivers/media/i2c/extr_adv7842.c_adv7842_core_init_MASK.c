
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; } ;
struct adv7842_platform_data {int alt_gamma; int blank_data; int insert_av_codes; int replicate_av_codes; int dr_str_data; int dr_str_clk; int dr_str_sync; int hdmi_free_run_enable; int hdmi_free_run_mode; int sdp_free_run_force; int sdp_free_run_cbar_en; int sdp_free_run_man_col_en; int sdp_free_run_auto; int ain_sel; int output_bus_lsb_to_msb; int sd_ram_size; int llc_dll_phase; scalar_t__ hpa_auto; int vid_std_select; scalar_t__ sd_ram_ddr; int sdp_csc_coeff; scalar_t__ disable_cable_det_rst; scalar_t__ disable_pwrdnb; } ;
struct adv7842_state {struct adv7842_platform_data pdata; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct adv7842_state*) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,int,int) ;
 int FUNC_4 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,int,int) ;
 int FUNC_8 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_9 (struct v4l2_subdev*,int,int) ;
 int FUNC_10 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_11 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_12 (struct v4l2_subdev*,int *) ;
 int FUNC_13 (struct v4l2_subdev*,int,int) ;
 int FUNC_14 (struct v4l2_subdev*,int,int) ;
 int FUNC_15 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_16 (struct v4l2_subdev*,int ) ;
 struct adv7842_state* FUNC_17 (struct v4l2_subdev*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct v4l2_subdev *VAR_0)
{
 struct adv7842_state *VAR_1 = FUNC_17(VAR_0);
 struct adv7842_platform_data *VAR_2 = &VAR_1->pdata;
 FUNC_7(VAR_0, 0x48,
     (VAR_2->disable_pwrdnb ? 0x80 : 0) |
     (VAR_2->disable_cable_det_rst ? 0x40 : 0));

 FUNC_5(VAR_0);





 FUNC_11(VAR_0, 0x77, 0xd3, 0x20);


 FUNC_9(VAR_0, 0x0c, 0x42);
 FUNC_9(VAR_0, 0x15, 0x80);


 FUNC_9(VAR_0, 0x02, 0xf0 | VAR_2->alt_gamma << 3);
 FUNC_10(VAR_0, 0x05, 0xf0, VAR_2->blank_data << 3 |
   VAR_2->insert_av_codes << 2 |
   VAR_2->replicate_av_codes << 1);
 FUNC_1(VAR_1);


 FUNC_8(VAR_0, 0x1a, 0xf1, 0x08);


 FUNC_10(VAR_0, 0x14, 0xc0,
   VAR_2->dr_str_data << 4 |
   VAR_2->dr_str_clk << 2 |
   VAR_2->dr_str_sync);


 FUNC_4(VAR_0, 0xba, 0xfc, VAR_2->hdmi_free_run_enable |
     (VAR_2->hdmi_free_run_mode << 1));


 FUNC_15(VAR_0, 0xdd, 0xf0, VAR_2->sdp_free_run_force |
      (VAR_2->sdp_free_run_cbar_en << 1) |
      (VAR_2->sdp_free_run_man_col_en << 2) |
      (VAR_2->sdp_free_run_auto << 3));


 FUNC_3(VAR_0, 0x69, 0x14);
 FUNC_9(VAR_0, 0x06, 0xa6);
 FUNC_3(VAR_0, 0xf3, 0xdc);
 FUNC_2(VAR_0, 0xb5, 0x01);

 FUNC_2(VAR_0, 0x02, VAR_2->ain_sel);
 FUNC_10(VAR_0, 0x30, ~(1 << 4), VAR_2->output_bus_lsb_to_msb << 4);

 FUNC_12(VAR_0, &VAR_2->sdp_csc_coeff);


 if (VAR_2->sd_ram_size >= 128) {
  FUNC_14(VAR_0, 0x12, 0x0d);
  if (VAR_2->sd_ram_ddr) {

   FUNC_13(VAR_0, 0x6f, 0x00);
   FUNC_13(VAR_0, 0x75, 0x0a);
   FUNC_13(VAR_0, 0x7a, 0xa5);
   FUNC_13(VAR_0, 0x7b, 0x8f);
   FUNC_13(VAR_0, 0x60, 0x01);
  } else {
   FUNC_13(VAR_0, 0x75, 0x0a);
   FUNC_13(VAR_0, 0x74, 0x00);
   FUNC_13(VAR_0, 0x79, 0x33);

   FUNC_13(VAR_0, 0x6f, 0x01);
   FUNC_13(VAR_0, 0x7a, 0xa5);
   FUNC_13(VAR_0, 0x7b, 0x8f);
   FUNC_13(VAR_0, 0x60, 0x01);
  }
 } else {




  FUNC_13(VAR_0, 0x29, 0x10);
 }

 FUNC_16(VAR_0, VAR_2->vid_std_select);

 FUNC_6(VAR_0);

 if (VAR_2->hpa_auto) {

  FUNC_7(VAR_0, 0x69, 0x5c);
 } else {

  FUNC_7(VAR_0, 0x69, 0xa3);

  FUNC_10(VAR_0, 0x20, 0xcf, 0x00);
 }


 FUNC_9(VAR_0, 0x19, 0x80 | VAR_2->llc_dll_phase);
 FUNC_9(VAR_0, 0x33, 0x40);


 FUNC_9(VAR_0, 0x40, 0xf2);

 FUNC_0(VAR_0, 1);

 return FUNC_18(VAR_0->ctrl_handler);
}
