
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dev; } ;
struct ltq_pinmux_info {int * membase; } ;
typedef enum ltq_pinconf_param { ____Placeholder_ltq_pinconf_param } ltq_pinconf_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned long FUNC_4 (int,int) ;



 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned int) ;
 int VAR_4 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 struct ltq_pinmux_info* FUNC_10 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_11(struct pinctrl_dev *VAR_5,
    unsigned VAR_6,
    unsigned long *VAR_7)
{
 struct ltq_pinmux_info *VAR_8 = FUNC_10(VAR_5);
 enum ltq_pinconf_param VAR_9 = FUNC_5(*VAR_7);
 int VAR_10 = FUNC_6(VAR_6);
 u32 VAR_11;

 switch (VAR_9) {
 case 130:
  if (VAR_10 == VAR_4)
   VAR_11 = VAR_1;
  else
   VAR_11 = FUNC_1(VAR_6);
  *VAR_7 = FUNC_4(VAR_9,
   !FUNC_9(VAR_8->membase[0], VAR_11, FUNC_7(VAR_6)));
  break;

 case 128:
  if (VAR_10 == VAR_4)
   VAR_11 = VAR_2;
  else
   VAR_11 = FUNC_2(VAR_6);
  if (!FUNC_9(VAR_8->membase[0], VAR_11, FUNC_7(VAR_6))) {
   *VAR_7 = FUNC_4(VAR_9, 0);
   break;
  }

  if (VAR_10 == VAR_4)
   VAR_11 = VAR_3;
  else
   VAR_11 = FUNC_3(VAR_6);
  if (!FUNC_9(VAR_8->membase[0], VAR_11, FUNC_7(VAR_6)))
   *VAR_7 = FUNC_4(VAR_9, 2);
  else
   *VAR_7 = FUNC_4(VAR_9, 1);
  break;

 case 129:
  VAR_11 = FUNC_0(VAR_6);
  *VAR_7 = FUNC_4(VAR_9,
   FUNC_9(VAR_8->membase[0], VAR_11, FUNC_7(VAR_6)));
  break;
 default:
  FUNC_8(VAR_5->dev, "Invalid config param %04x\n", VAR_9);
  return -VAR_0;
 }
 return 0;
}
