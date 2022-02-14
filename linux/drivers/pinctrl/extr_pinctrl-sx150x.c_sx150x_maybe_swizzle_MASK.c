
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx150x_pinctrl {struct sx150x_device_data* data; } ;
struct sx150x_device_data {unsigned int reg_sense; int ngpios; scalar_t__ model; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct sx150x_pinctrl *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 const struct sx150x_device_data *VAR_7 = VAR_2->data;
 if (VAR_3 == VAR_7->reg_sense &&
     VAR_7->ngpios == 16 &&
     (VAR_7->model == VAR_0 ||
      VAR_7->model == VAR_1)) {
  VAR_5 = VAR_4 & 0x00ff0000;
  VAR_6 = VAR_4 & 0x0000ff00;

  VAR_4 &= 0xff0000ff;
  VAR_4 |= VAR_6 << 8;
  VAR_4 |= VAR_5 >> 8;
 }

 return VAR_4;
}
