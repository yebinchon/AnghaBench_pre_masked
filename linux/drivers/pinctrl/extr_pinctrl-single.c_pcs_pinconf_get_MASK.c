
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct pcs_function {unsigned int nconfs; TYPE_1__* conf; } ;
struct pcs_device {unsigned int width; unsigned int (* read ) (scalar_t__) ;scalar_t__ base; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int param; unsigned int mask; unsigned int enable; unsigned int disable; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 unsigned int FUNC_0 (struct pinctrl_dev*,unsigned int,struct pcs_function**) ;
 scalar_t__ FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 struct pcs_device* FUNC_3 (struct pinctrl_dev*) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_3,
    unsigned VAR_4, unsigned long *VAR_5)
{
 struct pcs_device *VAR_6 = FUNC_3(VAR_3);
 struct pcs_function *VAR_7;
 enum pin_config_param VAR_8;
 unsigned VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12, VAR_13;

 VAR_13 = FUNC_0(VAR_3, VAR_4, &VAR_7);
 if (VAR_13)
  return VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_7->nconfs; VAR_11++) {
  VAR_8 = FUNC_2(*VAR_5);
  if (VAR_8 == VAR_2) {
   if (FUNC_1(VAR_3, VAR_4)) {
    *VAR_5 = 0;
    return 0;
   } else {
    return -VAR_1;
   }
  } else if (VAR_8 != VAR_7->conf[VAR_11].param) {
   continue;
  }

  VAR_9 = VAR_4 * (VAR_6->width / VAR_0);
  VAR_10 = VAR_6->read(VAR_6->base + VAR_9) & VAR_7->conf[VAR_11].mask;
  switch (VAR_7->conf[VAR_11].param) {

  case 134:
  case 133:
  case 130:
   if ((VAR_10 != VAR_7->conf[VAR_11].enable) ||
       (VAR_10 == VAR_7->conf[VAR_11].disable))
    return -VAR_1;
   *VAR_5 = 0;
   break;

  case 131:
   for (VAR_12 = 0; VAR_12 < VAR_7->nconfs; VAR_12++) {
    switch (VAR_7->conf[VAR_12].param) {
    case 130:
     if (VAR_10 != VAR_7->conf[VAR_12].enable)
      return -VAR_1;
     break;
    default:
     break;
    }
   }
   *VAR_5 = VAR_10;
   break;
  case 132:
  case 128:
  case 129:
  default:
   *VAR_5 = VAR_10;
   break;
  }
  return 0;
 }
 return -VAR_1;
}
