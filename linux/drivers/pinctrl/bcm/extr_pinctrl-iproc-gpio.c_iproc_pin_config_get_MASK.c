
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct iproc_gpio {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct iproc_gpio*,unsigned int,int*,int*) ;
 int FUNC_1 (struct iproc_gpio*,unsigned int,int *) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct iproc_gpio*,int) ;
 unsigned long FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long) ;
 struct iproc_gpio* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_2, unsigned VAR_3,
     unsigned long *VAR_4)
{
 struct iproc_gpio *VAR_5 = FUNC_6(VAR_2);
 enum pin_config_param VAR_6 = FUNC_5(*VAR_4);
 unsigned VAR_7 = FUNC_2(VAR_3);
 u16 VAR_8;
 bool VAR_9, VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_5, VAR_6))
  return -VAR_1;

 switch (VAR_6) {
 case 131:
  FUNC_0(VAR_5, VAR_7, &VAR_9, &VAR_10);
  if (VAR_9)
   return 0;
  else
   return -VAR_0;

 case 129:
  FUNC_0(VAR_5, VAR_7, &VAR_9, &VAR_10);
  if (!VAR_9 && VAR_10)
   return 0;
  else
   return -VAR_0;

 case 130:
  FUNC_0(VAR_5, VAR_7, &VAR_9, &VAR_10);
  if (!VAR_9 && !VAR_10)
   return 0;
  else
   return -VAR_0;

 case 128:
  VAR_11 = FUNC_1(VAR_5, VAR_7, &VAR_8);
  if (VAR_11)
   return VAR_11;
  *VAR_4 = FUNC_4(VAR_6, VAR_8);

  return 0;

 default:
  return -VAR_1;
 }

 return -VAR_1;
}
