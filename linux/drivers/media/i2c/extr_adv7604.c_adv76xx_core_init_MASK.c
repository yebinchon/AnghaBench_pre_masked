
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; } ;
struct adv76xx_platform_data {scalar_t__ default_input; int alt_gamma; int blank_data; int insert_av_codes; int replicate_av_codes; int inv_vs_pol; int inv_hs_pol; int inv_llc_pol; int dr_str_data; int dr_str_clk; int dr_str_sync; int hdmi_free_run_mode; int ain_sel; int output_bus_lsb_to_msb; int int1_config; scalar_t__ disable_cable_det_rst; scalar_t__ disable_pwrdnb; } ;
struct adv76xx_state {scalar_t__ source_pad; scalar_t__ selected_input; struct adv76xx_platform_data pdata; struct adv76xx_chip_info* info; } ;
struct adv76xx_chip_info {int fmt_change_digital_mask; int cable_det_mask; int (* setup_irqs ) (struct v4l2_subdev*) ;} ;


 scalar_t__ FUNC_0 (struct adv76xx_state*) ;
 int FUNC_1 (struct adv76xx_state*) ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,int,int) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*,int,int) ;
 int FUNC_7 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_8 (struct v4l2_subdev*,int,int) ;
 int FUNC_9 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (struct v4l2_subdev*) ;
 struct adv76xx_state* FUNC_12 (struct v4l2_subdev*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct v4l2_subdev *VAR_0)
{
 struct adv76xx_state *VAR_1 = FUNC_12(VAR_0);
 const struct adv76xx_chip_info *VAR_2 = VAR_1->info;
 struct adv76xx_platform_data *VAR_3 = &VAR_1->pdata;

 FUNC_6(VAR_0, 0x48,
  (VAR_3->disable_pwrdnb ? 0x80 : 0) |
  (VAR_3->disable_cable_det_rst ? 0x40 : 0));

 FUNC_4(VAR_0);

 if (VAR_3->default_input >= 0 &&
     VAR_3->default_input < VAR_1->source_pad) {
  VAR_1->selected_input = VAR_3->default_input;
  FUNC_10(VAR_0);
  FUNC_5(VAR_0);
 }


 FUNC_8(VAR_0, 0x0c, 0x42);
 FUNC_8(VAR_0, 0x0b, 0x44);
 FUNC_3(VAR_0, 0xcf, 0x01);


 FUNC_9(VAR_0, 0x02, 0x0f, VAR_3->alt_gamma << 3);
 FUNC_9(VAR_0, 0x05, 0x0e, VAR_3->blank_data << 3 |
   VAR_3->insert_av_codes << 2 |
   VAR_3->replicate_av_codes << 1);
 FUNC_1(VAR_1);

 FUNC_3(VAR_0, 0x69, 0x30);


 FUNC_8(VAR_0, 0x06, 0xa0 | VAR_3->inv_vs_pol << 2 |
   VAR_3->inv_hs_pol << 1 | VAR_3->inv_llc_pol);


 FUNC_8(VAR_0, 0x14, 0x40 | VAR_3->dr_str_data << 4 |
    VAR_3->dr_str_clk << 2 |
    VAR_3->dr_str_sync);

 FUNC_3(VAR_0, 0xba, (VAR_3->hdmi_free_run_mode << 1) | 0x01);
 FUNC_3(VAR_0, 0xf3, 0xdc);
 FUNC_3(VAR_0, 0xf9, 0x23);

 FUNC_3(VAR_0, 0x45, 0x23);

 FUNC_3(VAR_0, 0xc9, 0x2d);



 FUNC_7(VAR_0, 0x15, 0x03, 0x03);
 FUNC_7(VAR_0, 0x1a, 0x0e, 0x08);
 FUNC_7(VAR_0, 0x68, 0x06, 0x06);


 FUNC_2(VAR_0, 0xb5, 0x01);

 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_0, 0x02, VAR_3->ain_sel);
  FUNC_9(VAR_0, 0x30, 1 << 4, VAR_3->output_bus_lsb_to_msb << 4);
 }


 FUNC_8(VAR_0, 0x40, 0xc0 | VAR_3->int1_config);
 FUNC_8(VAR_0, 0x46, 0x98);
 FUNC_8(VAR_0, 0x6e, VAR_2->fmt_change_digital_mask);
 FUNC_8(VAR_0, 0x73, VAR_2->cable_det_mask);
 VAR_2->setup_irqs(VAR_0);

 return FUNC_13(VAR_0->ctrl_handler);
}
