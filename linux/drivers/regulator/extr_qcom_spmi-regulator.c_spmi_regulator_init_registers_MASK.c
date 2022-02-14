
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator_init_data {int pin_ctrl_enable; int pin_ctrl_hpm; int vs_soft_start_strength; } ;
struct spmi_regulator {int logical_type; } ;
typedef enum spmi_regulator_logical_type { ____Placeholder_spmi_regulator_logical_type } spmi_regulator_logical_type ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
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
 int FUNC_0 (struct spmi_regulator*,int ,int*,int) ;
 int FUNC_1 (struct spmi_regulator*,int ,int,int) ;
 int FUNC_2 (struct spmi_regulator*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct spmi_regulator *VAR_17,
    const struct spmi_regulator_init_data *VAR_18)
{
 int VAR_19;
 enum spmi_regulator_logical_type VAR_20;
 u8 VAR_21[8], VAR_22, VAR_23;

 VAR_20 = VAR_17->logical_type;

 VAR_19 = FUNC_0(VAR_17, VAR_5, VAR_21, 8);
 if (VAR_19)
  return VAR_19;


 if ((VAR_20 == VAR_7
      || VAR_20 == VAR_6
      || VAR_20 == VAR_11)
     && !(VAR_18->pin_ctrl_enable
   & VAR_12)) {
  VAR_21[VAR_1] &=
   ~VAR_0;
  VAR_21[VAR_1] |=
      VAR_18->pin_ctrl_enable & VAR_0;
 }


 if ((VAR_20 == VAR_7
     || VAR_20 == VAR_6)
  && !(VAR_18->pin_ctrl_hpm
   & VAR_13)) {
  VAR_21[VAR_2] &=
   ~VAR_3;
  VAR_21[VAR_2] |=
   VAR_18->pin_ctrl_hpm & VAR_3;
 }

 if (VAR_20 == VAR_11
    && !(VAR_18->pin_ctrl_hpm & VAR_13)) {
  VAR_21[VAR_2] &=
   ~VAR_4;
  VAR_21[VAR_2] |=
         VAR_18->pin_ctrl_hpm & VAR_4;
 }

 if ((VAR_20 == VAR_10
  || VAR_20 == VAR_8
  || VAR_20 == VAR_9)
  && !(VAR_18->pin_ctrl_hpm
   & VAR_13)) {
  VAR_21[VAR_2] &=
   ~VAR_4;
  VAR_21[VAR_2] |=
         VAR_18->pin_ctrl_hpm & VAR_4;
 }


 VAR_19 = FUNC_2(VAR_17, VAR_5, VAR_21, 8);
 if (VAR_19)
  return VAR_19;


 if (VAR_20 == VAR_11) {
  if (VAR_18->vs_soft_start_strength
    != VAR_16) {
   VAR_22 = VAR_18->vs_soft_start_strength
    & VAR_15;
   VAR_23 = VAR_15;
   return FUNC_1(VAR_17,
           VAR_14,
           VAR_22, VAR_23);
  }
 }

 return 0;
}
