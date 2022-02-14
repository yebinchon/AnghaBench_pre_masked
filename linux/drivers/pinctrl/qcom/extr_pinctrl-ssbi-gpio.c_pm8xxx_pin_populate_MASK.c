
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_pin_data {int power_source; int mode; int open_drain; int output_value; int bias; int pull_up_strength; int output_strength; int disable; int function; int inverted; } ;
struct pm8xxx_gpio {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pm8xxx_gpio*,struct pm8xxx_pin_data*,int) ;

__attribute__((used)) static int FUNC_2(struct pm8xxx_gpio *VAR_2,
          struct pm8xxx_pin_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->power_source = (VAR_4 >> 1) & 0x7;

 VAR_4 = FUNC_1(VAR_2, VAR_3, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->mode = (VAR_4 >> 2) & 0x3;
 VAR_3->open_drain = !!(VAR_4 & FUNC_0(1));
 VAR_3->output_value = VAR_4 & FUNC_0(0);

 VAR_4 = FUNC_1(VAR_2, VAR_3, 2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->bias = (VAR_4 >> 1) & 0x7;
 if (VAR_3->bias <= VAR_0)
  VAR_3->pull_up_strength = VAR_3->bias;
 else
  VAR_3->pull_up_strength = VAR_1;

 VAR_4 = FUNC_1(VAR_2, VAR_3, 3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->output_strength = (VAR_4 >> 2) & 0x3;
 VAR_3->disable = VAR_4 & FUNC_0(0);

 VAR_4 = FUNC_1(VAR_2, VAR_3, 4);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->function = (VAR_4 >> 1) & 0x7;

 VAR_4 = FUNC_1(VAR_2, VAR_3, 5);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->inverted = !(VAR_4 & FUNC_0(3));

 return 0;
}
