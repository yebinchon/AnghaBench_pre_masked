
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct intel_pinctrl {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct intel_pinctrl*,unsigned int,int ) ;
 int FUNC_1 (struct intel_pinctrl*,unsigned int,unsigned long) ;
 int FUNC_2 (struct intel_pinctrl*,unsigned int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct intel_pinctrl* FUNC_5 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
     unsigned long *VAR_3, unsigned int VAR_4)
{
 struct intel_pinctrl *VAR_5 = FUNC_5(VAR_1);
 int VAR_6, VAR_7;

 if (!FUNC_2(VAR_5, VAR_2))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  switch (FUNC_4(VAR_3[VAR_6])) {
  case 131:
  case 129:
  case 130:
   VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_3[VAR_6]);
   if (VAR_7)
    return VAR_7;
   break;

  case 128:
   VAR_7 = FUNC_0(VAR_5, VAR_2,
    FUNC_3(VAR_3[VAR_6]));
   if (VAR_7)
    return VAR_7;
   break;

  default:
   return -VAR_0;
  }
 }

 return 0;
}
