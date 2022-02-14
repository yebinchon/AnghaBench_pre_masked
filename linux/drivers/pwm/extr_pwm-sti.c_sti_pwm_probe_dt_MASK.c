
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sti_pwm_compat_data {struct reg_field* reg_fields; void* cpt_num_devs; void* pwm_num_devs; } ;
struct sti_pwm_chip {void* pwm_cpt_int_stat; int regmap; void* pwm_cpt_int_en; void* pwm_cpt_en; void* pwm_out_en; void* prescale_high; void* prescale_low; struct sti_pwm_compat_data* cdata; struct device* dev; } ;
struct reg_field {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int ,struct reg_field const) ;
 int FUNC_5 (struct device_node*,char*,void**) ;

__attribute__((used)) static int FUNC_6(struct sti_pwm_chip *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 const struct reg_field *VAR_9;
 struct device_node *VAR_10 = VAR_8->of_node;
 struct sti_pwm_compat_data *VAR_11 = VAR_7->cdata;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_10, "st,pwm-num-chan", &VAR_12);
 if (!VAR_13)
  VAR_11->pwm_num_devs = VAR_12;

 VAR_13 = FUNC_5(VAR_10, "st,capture-num-chan", &VAR_12);
 if (!VAR_13)
  VAR_11->cpt_num_devs = VAR_12;

 if (!VAR_11->pwm_num_devs && !VAR_11->cpt_num_devs) {
  FUNC_3(VAR_8, "No channels configured\n");
  return -VAR_0;
 }

 VAR_9 = VAR_11->reg_fields;

 VAR_7->prescale_low = FUNC_4(VAR_8, VAR_7->regmap,
     VAR_9[VAR_2]);
 if (FUNC_0(VAR_7->prescale_low))
  return FUNC_1(VAR_7->prescale_low);

 VAR_7->prescale_high = FUNC_4(VAR_8, VAR_7->regmap,
     VAR_9[VAR_1]);
 if (FUNC_0(VAR_7->prescale_high))
  return FUNC_1(VAR_7->prescale_high);


 VAR_7->pwm_out_en = FUNC_4(VAR_8, VAR_7->regmap,
       VAR_9[VAR_6]);
 if (FUNC_0(VAR_7->pwm_out_en))
  return FUNC_1(VAR_7->pwm_out_en);

 VAR_7->pwm_cpt_en = FUNC_4(VAR_8, VAR_7->regmap,
       VAR_9[VAR_3]);
 if (FUNC_0(VAR_7->pwm_cpt_en))
  return FUNC_1(VAR_7->pwm_cpt_en);

 VAR_7->pwm_cpt_int_en = FUNC_4(VAR_8, VAR_7->regmap,
      VAR_9[VAR_4]);
 if (FUNC_0(VAR_7->pwm_cpt_int_en))
  return FUNC_1(VAR_7->pwm_cpt_int_en);

 VAR_7->pwm_cpt_int_stat = FUNC_4(VAR_8, VAR_7->regmap,
      VAR_9[VAR_5]);
 if (FUNC_2(VAR_7->pwm_cpt_int_stat))
  return FUNC_1(VAR_7->pwm_cpt_int_stat);

 return 0;
}
