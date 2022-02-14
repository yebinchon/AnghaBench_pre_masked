
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinmux_ops {unsigned int (* get_functions_count ) (struct pinctrl_dev*) ;char* (* get_function_name ) (struct pinctrl_dev*,unsigned int) ;} ;
struct pinctrl_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {struct pinmux_ops* pmxops; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 unsigned int FUNC_1 (struct pinctrl_dev*) ;
 char* FUNC_2 (struct pinctrl_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
     const char *VAR_2)
{
 const struct pinmux_ops *VAR_3 = VAR_1->desc->pmxops;
 unsigned VAR_4 = VAR_3->get_functions_count(VAR_1);
 unsigned VAR_5 = 0;


 while (VAR_5 < VAR_4) {
  const char *VAR_6 = VAR_3->get_function_name(VAR_1, VAR_5);

  if (!FUNC_0(VAR_2, VAR_6))
   return VAR_5;

  VAR_5++;
 }

 return -VAR_0;
}
