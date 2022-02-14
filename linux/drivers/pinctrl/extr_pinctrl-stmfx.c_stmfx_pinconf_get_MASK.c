
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmfx_pinctrl {int gpio_chip; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 unsigned long FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long) ;
 struct stmfx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 struct pinctrl_gpio_range* FUNC_3 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (struct stmfx_pinctrl*,unsigned int) ;
 int FUNC_7 (struct stmfx_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_2,
        unsigned int VAR_3, unsigned long *VAR_4)
{
 struct stmfx_pinctrl *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6 = FUNC_1(*VAR_4);
 struct pinctrl_gpio_range *VAR_7;
 u32 VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = FUNC_5(&VAR_5->gpio_chip, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_11 = FUNC_7(VAR_5, VAR_3);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_12 = FUNC_6(VAR_5, VAR_3);
 if (VAR_12 < 0)
  return VAR_12;

 switch (VAR_6) {
 case 133:
  if ((!VAR_10 && (!VAR_11 || !VAR_12)) || (VAR_10 && !VAR_11))
   VAR_8 = 1;
  break;
 case 132:
  if (VAR_10 && VAR_11 && !VAR_12)
   VAR_8 = 1;
  break;
 case 131:
  if (VAR_11 && VAR_12)
   VAR_8 = 1;
  break;
 case 130:
  if ((!VAR_10 && VAR_11) || (VAR_10 && !VAR_11))
   VAR_8 = 1;
  break;
 case 129:
  if ((!VAR_10 && !VAR_11) || (VAR_10 && VAR_11))
   VAR_8 = 1;
  break;
 case 128:
  if (VAR_10)
   return -VAR_0;

  VAR_9 = FUNC_4(&VAR_5->gpio_chip, VAR_3);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8 = VAR_9;
  break;
 default:
  return -VAR_1;
 }

 *VAR_4 = FUNC_0(VAR_6, VAR_8);

 return 0;
}
