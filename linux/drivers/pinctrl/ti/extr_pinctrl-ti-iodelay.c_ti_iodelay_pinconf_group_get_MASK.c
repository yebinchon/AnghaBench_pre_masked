
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_iodelay_pingroup {unsigned long config; } ;
struct ti_iodelay_device {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct ti_iodelay_device* FUNC_0 (struct pinctrl_dev*) ;
 struct ti_iodelay_pingroup* FUNC_1 (struct ti_iodelay_device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     unsigned long *VAR_3)
{
 struct ti_iodelay_device *VAR_4;
 struct ti_iodelay_pingroup *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_1(VAR_4, VAR_2);

 if (!VAR_5)
  return -VAR_0;

 *VAR_3 = VAR_5->config;
 return 0;
}
