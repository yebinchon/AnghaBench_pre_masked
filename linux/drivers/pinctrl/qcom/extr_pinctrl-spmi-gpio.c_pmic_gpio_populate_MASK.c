
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_gpio_state {int dev; } ;
struct pmic_gpio_pad {int have_buffer; int num_sources; int lv_mv_type; int out_value; int function; int input_enabled; int output_enabled; int analog_pass; int power_source; int pullup; int dtest_buffer; int strength; int buffer_type; int atest; int is_enabled; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;






 int VAR_29 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pmic_gpio_state*,struct pmic_gpio_pad*,int ) ;

__attribute__((used)) static int FUNC_3(struct pmic_gpio_state *VAR_30,
         struct pmic_gpio_pad *VAR_31)
{
 int VAR_32, VAR_33, VAR_34, VAR_35;

 VAR_32 = FUNC_2(VAR_30, VAR_31, VAR_26);
 if (VAR_32 < 0)
  return VAR_32;

 if (VAR_32 != VAR_29) {
  FUNC_0(VAR_30->dev, "incorrect block type 0x%x at 0x%x\n",
   VAR_32, VAR_31->base);
  return -VAR_0;
 }

 VAR_33 = FUNC_2(VAR_30, VAR_31, VAR_25);
 if (VAR_33 < 0)
  return VAR_33;

 switch (VAR_33) {
 case 131:
  VAR_31->have_buffer = 1;

 case 133:
  VAR_31->num_sources = 4;
  break;
 case 130:
  VAR_31->have_buffer = 1;

 case 132:
  VAR_31->num_sources = 8;
  break;
 case 129:
  VAR_31->num_sources = 1;
  VAR_31->have_buffer = 1;
  VAR_31->lv_mv_type = 1;
  break;
 case 128:
  VAR_31->num_sources = 2;
  VAR_31->have_buffer = 1;
  VAR_31->lv_mv_type = 1;
  break;
 default:
  FUNC_0(VAR_30->dev, "unknown GPIO type 0x%x\n", VAR_33);
  return -VAR_0;
 }

 if (VAR_31->lv_mv_type) {
  VAR_34 = FUNC_2(VAR_30, VAR_31,
    VAR_11);
  if (VAR_34 < 0)
   return VAR_34;

  VAR_31->out_value = !!(VAR_34 & VAR_4);
  VAR_31->function = VAR_34 & VAR_5;

  VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_13);
  if (VAR_34 < 0)
   return VAR_34;

  VAR_35 = VAR_34 & VAR_12;
 } else {
  VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_13);
  if (VAR_34 < 0)
   return VAR_34;

  VAR_31->out_value = VAR_34 & VAR_18;

  VAR_35 = VAR_34 >> VAR_15;
  VAR_35 &= VAR_14;
  VAR_31->function = VAR_34 >> VAR_17;
  VAR_31->function &= VAR_16;
 }

 switch (VAR_35) {
 case 136:
  VAR_31->input_enabled = 1;
  VAR_31->output_enabled = 0;
  break;
 case 134:
  VAR_31->input_enabled = 0;
  VAR_31->output_enabled = 1;
  break;
 case 135:
  VAR_31->input_enabled = 1;
  VAR_31->output_enabled = 1;
  break;
 case 137:
  if (!VAR_31->lv_mv_type)
   return -VAR_0;
  VAR_31->analog_pass = 1;
  break;
 default:
  FUNC_0(VAR_30->dev, "unknown GPIO direction\n");
  return -VAR_0;
 }

 VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_9);
 if (VAR_34 < 0)
  return VAR_34;

 VAR_31->power_source = VAR_34 >> VAR_28;
 VAR_31->power_source &= VAR_27;

 VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_8);
 if (VAR_34 < 0)
  return VAR_34;

 VAR_31->pullup = VAR_34 >> VAR_24;
 VAR_31->pullup &= VAR_23;

 VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_6);
 if (VAR_34 < 0)
  return VAR_34;

 if (VAR_31->lv_mv_type && (VAR_34 & VAR_2))
  VAR_31->dtest_buffer =
   (VAR_34 & VAR_3) + 1;
 else if (!VAR_31->lv_mv_type)
  VAR_31->dtest_buffer = FUNC_1(VAR_34);
 else
  VAR_31->dtest_buffer = 0;

 VAR_34 = FUNC_2(VAR_30, VAR_31, VAR_7);
 if (VAR_34 < 0)
  return VAR_34;

 VAR_31->strength = VAR_34 >> VAR_20;
 VAR_31->strength &= VAR_19;

 VAR_31->buffer_type = VAR_34 >> VAR_22;
 VAR_31->buffer_type &= VAR_21;

 if (VAR_31->lv_mv_type) {
  VAR_34 = FUNC_2(VAR_30, VAR_31,
    VAR_10);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_31->atest = (VAR_34 & VAR_1) + 1;
 }


 VAR_31->is_enabled = 1;
 return 0;
}
