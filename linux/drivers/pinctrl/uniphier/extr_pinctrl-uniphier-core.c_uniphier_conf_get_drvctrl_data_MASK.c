
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct pin_desc {int drv_data; } ;
typedef enum uniphier_pin_drv_type { ____Placeholder_uniphier_pin_drv_type } uniphier_pin_drv_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;






 struct pin_desc* FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;
 unsigned int* VAR_9 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_10,
       unsigned int VAR_11, unsigned int *VAR_12,
       unsigned int *VAR_13,
       unsigned int *VAR_14,
       const unsigned int **VAR_15)
{
 const struct pin_desc *VAR_16 = FUNC_0(VAR_10, VAR_11);
 enum uniphier_pin_drv_type VAR_17 =
    FUNC_1(VAR_16->drv_data);
 unsigned int VAR_18 = 0;
 unsigned int VAR_19 = 0;
 unsigned int VAR_20 = 0;
 unsigned int VAR_21;

 switch (VAR_17) {
 case 133:
  *VAR_15 = VAR_4;
  VAR_18 = VAR_3;
  VAR_19 = 1;
  VAR_20 = 1;
  break;
 case 132:
  *VAR_15 = VAR_5;
  VAR_18 = VAR_1;
  VAR_19 = 2;
  VAR_20 = 2;
  break;
 case 131:
  *VAR_15 = VAR_6;
  VAR_18 = VAR_2;
  VAR_19 = 4;
  VAR_20 = 3;
  break;
 case 130:
  *VAR_15 = VAR_7;
  break;
 case 129:
  *VAR_15 = VAR_8;
  break;
 case 128:
  *VAR_15 = VAR_9;
  break;
 default:

  return -VAR_0;
 }

 VAR_21 = FUNC_2(VAR_16->drv_data);
 VAR_21 *= VAR_19;

 *VAR_12 = VAR_18 + VAR_21 / 32 * 4;
 *VAR_13 = VAR_21 % 32;
 *VAR_14 = (1U << VAR_20) - 1;

 return 0;
}
