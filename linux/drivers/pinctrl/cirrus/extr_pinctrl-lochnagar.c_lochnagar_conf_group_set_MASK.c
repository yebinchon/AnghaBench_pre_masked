
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct lochnagar_pin_priv {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct lochnagar_pin_priv*,unsigned int,int) ;
 unsigned int FUNC_1 (unsigned long) ;
 struct lochnagar_pin_priv* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
        unsigned int VAR_2,
        unsigned long *VAR_3,
        unsigned int VAR_4)
{
 struct lochnagar_pin_priv *VAR_5 = FUNC_2(VAR_1);
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  unsigned int VAR_8 = FUNC_1(*VAR_3);

  switch (VAR_8) {
  case 128:
   VAR_7 = FUNC_0(VAR_5, VAR_2, 1);
   if (VAR_7)
    return VAR_7;
   break;
  case 129:
   VAR_7 = FUNC_0(VAR_5, VAR_2, 0);
   if (VAR_7)
    return VAR_7;
   break;
  default:
   return -VAR_0;
  }

  VAR_3++;
 }

 return 0;
}
