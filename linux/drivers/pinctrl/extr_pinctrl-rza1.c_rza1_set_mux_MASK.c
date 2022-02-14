
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza1_pinctrl {int dummy; } ;
struct rza1_mux_conf {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct group_desc {int num_pins; } ;
struct function_desc {scalar_t__ data; } ;


 int VAR_0 ;
 struct rza1_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct group_desc* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 struct function_desc* FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_3 (struct rza1_pinctrl*,struct rza1_mux_conf*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
 struct rza1_pinctrl *VAR_4 = FUNC_0(VAR_1);
 struct rza1_mux_conf *VAR_5;
 struct function_desc *VAR_6;
 struct group_desc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = (struct rza1_mux_conf *)VAR_6->data;
 for (VAR_8 = 0; VAR_8 < VAR_7->num_pins; ++VAR_8) {
  int VAR_9;

  VAR_9 = FUNC_3(VAR_4, &VAR_5[VAR_8]);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
