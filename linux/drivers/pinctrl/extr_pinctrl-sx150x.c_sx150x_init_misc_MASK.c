
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sx150x_pinctrl {int regmap; TYPE_4__* data; } ;
struct TYPE_7__ {int reg_advanced; } ;
struct TYPE_6__ {int reg_advanced; } ;
struct TYPE_8__ {int reg_misc; } ;
struct TYPE_10__ {TYPE_2__ x123; TYPE_1__ x456; TYPE_3__ x789; } ;
struct TYPE_9__ {int model; TYPE_5__ pri; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct sx150x_pinctrl *VAR_2)
{
 u8 VAR_3, VAR_4;

 switch (VAR_2->data->model) {
 case 128:
  VAR_3 = VAR_2->data->pri.x789.reg_misc;
  VAR_4 = VAR_1;
  break;
 case 129:
  VAR_3 = VAR_2->data->pri.x456.reg_advanced;
  VAR_4 = 0x00;





  if (!VAR_3)
   return 0;
  break;
 case 130:
  VAR_3 = VAR_2->data->pri.x123.reg_advanced;
  VAR_4 = 0x00;
  break;
 default:
  FUNC_0(1, "Unknown chip model %d\n", VAR_2->data->model);
  return -VAR_0;
 }

 return FUNC_1(VAR_2->regmap, VAR_3, VAR_4);
}
