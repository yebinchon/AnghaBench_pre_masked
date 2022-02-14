
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct artpec6_pmx {unsigned int num_pins; scalar_t__ base; TYPE_1__* pins; int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,int ) ;
 unsigned long FUNC_3 (int,unsigned int) ;
 int FUNC_4 (unsigned long) ;
 struct artpec6_pmx* FUNC_5 (struct pinctrl_dev*) ;
 unsigned int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_6, unsigned int VAR_7,
        unsigned long *VAR_8)
{
 struct artpec6_pmx *VAR_9 = FUNC_5(VAR_6);
 enum pin_config_param VAR_10 = FUNC_4(*VAR_8);
 unsigned int VAR_11;


 if (VAR_7 >= VAR_9->num_pins) {
  FUNC_2(VAR_9->dev, "pinconf is not supported for pin %s\n",
   VAR_9->pins[VAR_7].name);
  return -VAR_5;
 }

 FUNC_2(VAR_9->dev, "getting configuration for pin %s\n",
  VAR_9->pins[VAR_7].name);


 VAR_11 = FUNC_6(VAR_9->base + FUNC_1(VAR_7));


 switch (VAR_10) {
 case 131:
  if (!(VAR_11 & VAR_3))
   return -VAR_4;
  break;

 case 129:
 case 130:
  if (VAR_11 & VAR_3)
   return -VAR_4;

  VAR_11 = VAR_11 & VAR_2;
  if ((VAR_10 == 129 && !VAR_11) ||
      (VAR_10 == 130 && VAR_11))
   return -VAR_4;
  break;
 case 128:
  VAR_11 = (VAR_11 & VAR_0)
   >> VAR_1;
  VAR_11 = FUNC_0(VAR_11);
  *VAR_8 = FUNC_3(VAR_10, VAR_11);
  break;
 default:
  return -VAR_5;
 }

 return 0;
}
