
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_mpp_state {int dev; } ;
struct pmic_mpp_pad {int num_sources; int out_value; int input_enabled; int output_enabled; unsigned int dtest; int paired; int power_source; int pullup; int has_pullup; int amux_input; int drive_strength; int aout_level; int is_enabled; void* function; int base; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;







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
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 void* VAR_25 ;






 int VAR_26 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pmic_mpp_state*,struct pmic_mpp_pad*,int ) ;

__attribute__((used)) static int FUNC_2(struct pmic_mpp_state *VAR_27,
        struct pmic_mpp_pad *VAR_28)
{
 int VAR_29, VAR_30, VAR_31, VAR_32;
 unsigned int VAR_33;

 VAR_29 = FUNC_1(VAR_27, VAR_28, VAR_20);
 if (VAR_29 < 0)
  return VAR_29;

 if (VAR_29 != VAR_26) {
  FUNC_0(VAR_27->dev, "incorrect block type 0x%x at 0x%x\n",
   VAR_29, VAR_28->base);
  return -VAR_0;
 }

 VAR_30 = FUNC_1(VAR_27, VAR_28, VAR_19);
 if (VAR_30 < 0)
  return VAR_30;

 switch (VAR_30) {
 case 132:
 case 129:
 case 131:
 case 128:
 case 133:
  VAR_28->num_sources = 4;
  break;
 case 130:
  VAR_28->num_sources = 8;
  break;
 default:
  FUNC_0(VAR_27->dev, "unknown MPP type 0x%x at 0x%x\n",
   VAR_30, VAR_28->base);
  return -VAR_0;
 }

 VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_10);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_28->out_value = VAR_31 & VAR_15;

 VAR_32 = VAR_31 >> VAR_12;
 VAR_32 &= VAR_11;

 switch (VAR_32) {
 case 135:
  VAR_28->input_enabled = 1;
  VAR_28->output_enabled = 0;
  VAR_28->function = VAR_2;
  break;
 case 134:
  VAR_28->input_enabled = 0;
  VAR_28->output_enabled = 1;
  VAR_28->function = VAR_2;
  break;
 case 136:
  VAR_28->input_enabled = 1;
  VAR_28->output_enabled = 1;
  VAR_28->function = VAR_2;
  break;
 case 140:
  VAR_28->input_enabled = 1;
  VAR_28->output_enabled = 1;
  VAR_28->function = VAR_1;
  break;
 case 139:
  VAR_28->input_enabled = 1;
  VAR_28->output_enabled = 0;
  VAR_28->function = VAR_1;
  break;
 case 138:
  VAR_28->input_enabled = 0;
  VAR_28->output_enabled = 1;
  VAR_28->function = VAR_1;
  break;
 case 137:
  VAR_28->input_enabled = 0;
  VAR_28->output_enabled = 1;
  VAR_28->function = VAR_25;
  break;
 default:
  FUNC_0(VAR_27->dev, "unknown MPP direction\n");
  return -VAR_0;
 }

 VAR_33 = VAR_31 >> VAR_14;
 VAR_33 &= VAR_13;

 if (VAR_33 >= VAR_23)
  VAR_28->dtest = VAR_33 + 1;
 else if (VAR_33 == VAR_24)
  VAR_28->paired = 1;

 VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_8);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_28->power_source = VAR_31 >> VAR_22;
 VAR_28->power_source &= VAR_21;

 if (VAR_30 != 129 &&
     VAR_30 != 128) {
  VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_7);
  if (VAR_31 < 0)
   return VAR_31;

  VAR_28->pullup = VAR_31 >> VAR_17;
  VAR_28->pullup &= VAR_16;
  VAR_28->has_pullup = 1;
 }

 VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_3);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_28->amux_input = VAR_31 >> VAR_5;
 VAR_28->amux_input &= VAR_4;

 VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_18);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_28->drive_strength = VAR_31;

 VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_6);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_28->aout_level = VAR_31;

 VAR_31 = FUNC_1(VAR_27, VAR_28, VAR_9);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_28->is_enabled = !!VAR_31;

 return 0;
}
