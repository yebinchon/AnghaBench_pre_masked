
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_mpp_state {int dummy; } ;
struct pmic_mpp_pad {int is_enabled; unsigned int pullup; unsigned int num_sources; unsigned int power_source; int input_enabled; int output_enabled; unsigned int out_value; unsigned int dtest; unsigned int drive_strength; unsigned int amux_input; unsigned int aout_level; int paired; scalar_t__ has_pullup; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_mpp_pad* drv_data; } ;


 int VAR_0 ;







 unsigned int VAR_1 ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned long) ;
 struct pmic_mpp_state* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct pmic_mpp_state*,struct pmic_mpp_pad*,int ,unsigned int) ;
 int FUNC_4 (struct pmic_mpp_state*,struct pmic_mpp_pad*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_16, unsigned int VAR_17,
          unsigned long *VAR_18, unsigned VAR_19)
{
 struct pmic_mpp_state *VAR_20 = FUNC_2(VAR_16);
 struct pmic_mpp_pad *VAR_21;
 unsigned VAR_22, VAR_23;
 unsigned int VAR_24;
 int VAR_25, VAR_26;

 VAR_21 = VAR_16->desc->pins[VAR_17].drv_data;


 VAR_21->is_enabled = 1;

 for (VAR_25 = 0; VAR_25 < VAR_19; VAR_25++) {
  VAR_22 = FUNC_1(VAR_18[VAR_25]);
  VAR_23 = FUNC_0(VAR_18[VAR_25]);

  switch (VAR_22) {
  case 138:
   VAR_21->pullup = VAR_5;
   break;
  case 136:
   switch (VAR_23) {
   case 600:
    VAR_21->pullup = VAR_2;
    break;
   case 10000:
    VAR_21->pullup = VAR_3;
    break;
   case 30000:
    VAR_21->pullup = VAR_4;
    break;
   default:
    return -VAR_0;
   }
   break;
  case 137:
   VAR_21->is_enabled = 0;
   break;
  case 132:
   if (VAR_23 >= VAR_21->num_sources)
    return -VAR_0;
   VAR_21->power_source = VAR_23;
   break;
  case 134:
   VAR_21->input_enabled = VAR_23 ? 1 : 0;
   break;
  case 133:
   VAR_21->output_enabled = 1;
   VAR_21->out_value = VAR_23;
   break;
  case 129:
   VAR_21->dtest = VAR_23;
   break;
  case 135:
   VAR_21->drive_strength = VAR_23;
   break;
  case 131:
   if (VAR_23 >= VAR_1)
    return -VAR_0;
   VAR_21->amux_input = VAR_23;
   break;
  case 130:
   VAR_21->aout_level = VAR_23;
   break;
  case 128:
   VAR_21->paired = !!VAR_23;
   break;
  default:
   return -VAR_0;
  }
 }

 VAR_24 = VAR_21->power_source << VAR_15;

 VAR_26 = FUNC_3(VAR_20, VAR_21, VAR_10, VAR_24);
 if (VAR_26 < 0)
  return VAR_26;

 if (VAR_21->has_pullup) {
  VAR_24 = VAR_21->pullup << VAR_13;

  VAR_26 = FUNC_3(VAR_20, VAR_21, VAR_9,
         VAR_24);
  if (VAR_26 < 0)
   return VAR_26;
 }

 VAR_24 = VAR_21->amux_input & VAR_7;

 VAR_26 = FUNC_3(VAR_20, VAR_21, VAR_6, VAR_24);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_3(VAR_20, VAR_21, VAR_8, VAR_21->aout_level);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_4(VAR_20, VAR_21);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_3(VAR_20, VAR_21, VAR_14, VAR_21->drive_strength);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_24 = VAR_21->is_enabled << VAR_12;

 return FUNC_3(VAR_20, VAR_21, VAR_11, VAR_24);
}
