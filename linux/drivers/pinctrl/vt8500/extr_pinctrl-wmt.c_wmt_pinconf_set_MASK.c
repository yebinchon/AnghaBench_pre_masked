
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct wmt_pinctrl_data {int dev; TYPE_1__* banks; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {size_t reg_pull_en; size_t reg_pull_cfg; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;



 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*,...) ;
 size_t FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct wmt_pinctrl_data* FUNC_6 (struct pinctrl_dev*) ;
 int FUNC_7 (struct wmt_pinctrl_data*,size_t,int ) ;
 int FUNC_8 (struct wmt_pinctrl_data*,size_t,int ) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_2, unsigned VAR_3,
      unsigned long *VAR_4, unsigned VAR_5)
{
 struct wmt_pinctrl_data *VAR_6 = FUNC_6(VAR_2);
 enum pin_config_param VAR_7;
 u32 VAR_8;
 u32 VAR_9 = FUNC_1(VAR_3);
 u32 VAR_10 = FUNC_2(VAR_3);
 u32 VAR_11 = VAR_6->banks[VAR_9].reg_pull_en;
 u32 VAR_12 = VAR_6->banks[VAR_9].reg_pull_cfg;
 int VAR_13;

 if ((VAR_11 == VAR_1) || (VAR_12 == VAR_1)) {
  FUNC_3(VAR_6->dev, "bias functions not supported on pin %d\n",
   VAR_3);
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_7 = FUNC_5(VAR_4[VAR_13]);
  VAR_8 = FUNC_4(VAR_4[VAR_13]);

  if ((VAR_7 == 129) ||
      (VAR_7 == 128)) {
   if (VAR_8 == 0)
    VAR_7 = 130;
  }

  switch (VAR_7) {
  case 130:
   FUNC_7(VAR_6, VAR_11, FUNC_0(VAR_10));
   break;
  case 129:
   FUNC_7(VAR_6, VAR_12, FUNC_0(VAR_10));
   FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_10));
   break;
  case 128:
   FUNC_8(VAR_6, VAR_12, FUNC_0(VAR_10));
   FUNC_8(VAR_6, VAR_11, FUNC_0(VAR_10));
   break;
  default:
   FUNC_3(VAR_6->dev, "unknown pinconf param\n");
   return -VAR_0;
  }
 }

 return 0;
}
