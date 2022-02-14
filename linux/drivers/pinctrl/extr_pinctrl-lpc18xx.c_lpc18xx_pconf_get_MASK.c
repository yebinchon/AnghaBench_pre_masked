
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct lpc18xx_scu_data {scalar_t__ base; } ;
struct lpc18xx_pin_caps {scalar_t__ type; scalar_t__ offset; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lpc18xx_pin_caps* FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int*,int ,unsigned int) ;
 int FUNC_2 (struct pinctrl_dev*,int,int*,int ,unsigned int,struct lpc18xx_pin_caps*) ;
 int FUNC_3 (int,int*,int ) ;
 unsigned long FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long) ;
 struct lpc18xx_scu_data* FUNC_6 (struct pinctrl_dev*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_3, unsigned VAR_4,
        unsigned long *VAR_5)
{
 struct lpc18xx_scu_data *VAR_6 = FUNC_6(VAR_3);
 enum pin_config_param VAR_7 = FUNC_5(*VAR_5);
 struct lpc18xx_pin_caps *VAR_8;
 int VAR_9, VAR_10 = 0;
 u32 VAR_11;

 VAR_8 = FUNC_0(VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_6->base + VAR_8->offset);

 if (VAR_8->type == VAR_1)
  VAR_9 = FUNC_1(VAR_7, &VAR_10, VAR_11, VAR_4);
 else if (VAR_8->type == VAR_2)
  VAR_9 = FUNC_3(VAR_7, &VAR_10, VAR_11);
 else
  VAR_9 = FUNC_2(VAR_3, VAR_7, &VAR_10, VAR_11, VAR_4, VAR_8);

 if (VAR_9 < 0)
  return VAR_9;

 *VAR_5 = FUNC_4(VAR_7, (u16)VAR_10);

 return 0;
}
