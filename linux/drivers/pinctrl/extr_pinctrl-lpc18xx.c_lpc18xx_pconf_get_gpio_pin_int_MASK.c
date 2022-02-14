
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct lpc18xx_scu_data {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 struct lpc18xx_scu_data* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
       int *VAR_4, unsigned VAR_5)
{
 struct lpc18xx_scu_data *VAR_6 = FUNC_3(VAR_3);
 int VAR_7, VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_7);





 *VAR_4 = 0;
 VAR_8 = FUNC_0(VAR_6->base + VAR_1, VAR_9, VAR_4);
 if (VAR_8 == 0)
  return VAR_8;

 return FUNC_0(VAR_6->base + VAR_2, VAR_9, VAR_4);
}
