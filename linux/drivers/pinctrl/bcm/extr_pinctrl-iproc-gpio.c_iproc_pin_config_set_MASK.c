
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct iproc_gpio {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct iproc_gpio*,unsigned int,int,int) ;
 int FUNC_2 (struct iproc_gpio*,unsigned int,int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct iproc_gpio*,int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 struct iproc_gpio* FUNC_7 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_1, unsigned VAR_2,
     unsigned long *VAR_3, unsigned VAR_4)
{
 struct iproc_gpio *VAR_5 = FUNC_7(VAR_1);
 enum pin_config_param VAR_6;
 u32 VAR_7;
 unsigned VAR_8, VAR_9 = FUNC_3(VAR_2);
 int VAR_10 = -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_6 = FUNC_6(VAR_3[VAR_8]);

  if (FUNC_4(VAR_5, VAR_6))
   return -VAR_0;

  VAR_7 = FUNC_5(VAR_3[VAR_8]);

  switch (VAR_6) {
  case 131:
   VAR_10 = FUNC_1(VAR_5, VAR_9, 1, 0);
   if (VAR_10 < 0)
    goto out;
   break;

  case 129:
   VAR_10 = FUNC_1(VAR_5, VAR_9, 0, 1);
   if (VAR_10 < 0)
    goto out;
   break;

  case 130:
   VAR_10 = FUNC_1(VAR_5, VAR_9, 0, 0);
   if (VAR_10 < 0)
    goto out;
   break;

  case 128:
   VAR_10 = FUNC_2(VAR_5, VAR_9, VAR_7);
   if (VAR_10 < 0)
    goto out;
   break;

  default:
   FUNC_0(VAR_5->dev, "invalid configuration\n");
   return -VAR_0;
  }
 }

out:
 return VAR_10;
}
