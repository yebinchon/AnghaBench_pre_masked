
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sx150x_pinctrl {struct sx150x_device_data* data; } ;
struct TYPE_7__ {unsigned int reg_advanced; } ;
struct TYPE_6__ {unsigned int reg_advanced; } ;
struct TYPE_5__ {unsigned int reg_misc; unsigned int reg_clock; unsigned int reg_reset; } ;
struct TYPE_8__ {TYPE_3__ x456; TYPE_2__ x123; TYPE_1__ x789; } ;
struct sx150x_device_data {unsigned int reg_sense; int ngpios; scalar_t__ model; TYPE_4__ pri; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct sx150x_pinctrl *VAR_3,
       unsigned int VAR_4)
{
 const struct sx150x_device_data *VAR_5 = VAR_3->data;

 if (VAR_4 == VAR_5->reg_sense) {





  return 2 * VAR_5->ngpios;
 } else if ((VAR_5->model == VAR_2 &&
      (VAR_4 == VAR_5->pri.x789.reg_misc ||
       VAR_4 == VAR_5->pri.x789.reg_clock ||
       VAR_4 == VAR_5->pri.x789.reg_reset))
     ||
     (VAR_5->model == VAR_0 &&
      VAR_4 == VAR_5->pri.x123.reg_advanced)
     ||
     (VAR_5->model == VAR_1 &&
      VAR_5->pri.x456.reg_advanced &&
      VAR_4 == VAR_5->pri.x456.reg_advanced)) {
  return 8;
 } else {
  return VAR_5->ngpios;
 }
}
