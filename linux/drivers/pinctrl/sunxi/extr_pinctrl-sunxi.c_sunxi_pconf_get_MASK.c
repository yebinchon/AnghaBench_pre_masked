
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sunxi_pinctrl {int membase; TYPE_1__* desc; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {scalar_t__ pin_base; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct sunxi_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int,int,int*,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_5, unsigned VAR_6,
      unsigned long *VAR_7)
{
 struct sunxi_pinctrl *VAR_8 = FUNC_3(VAR_5);
 enum pin_config_param VAR_9 = FUNC_2(*VAR_7);
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u16 VAR_14;
 int VAR_15;

 VAR_6 -= VAR_8->desc->pin_base;

 VAR_15 = FUNC_5(VAR_6, VAR_9, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13 = (FUNC_4(VAR_8->membase + VAR_10) >> VAR_11) & VAR_12;

 switch (FUNC_2(*VAR_7)) {
 case 128:
  VAR_14 = (VAR_13 + 1) * 10;
  break;

 case 129:
  if (VAR_13 != VAR_4)
   return -VAR_0;
  VAR_14 = 1;
  break;

 case 130:
  if (VAR_13 != VAR_3)
   return -VAR_0;
  VAR_14 = 1;
  break;

 case 131:
  if (VAR_13 != VAR_2)
   return -VAR_0;
  VAR_14 = 0;
  break;

 default:

  FUNC_0(1);
  return -VAR_1;
 }

 *VAR_7 = FUNC_1(VAR_9, VAR_14);

 return 0;
}
