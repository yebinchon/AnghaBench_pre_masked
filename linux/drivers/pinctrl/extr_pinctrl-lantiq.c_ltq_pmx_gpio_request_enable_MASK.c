
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct ltq_pinmux_info {int (* apply_mux ) (struct pinctrl_dev*,int,int) ;int dev; int * mfp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ltq_pinmux_info*,unsigned int) ;
 int FUNC_2 (int *,int ) ;
 struct ltq_pinmux_info* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (struct pinctrl_dev*,int,int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
    struct pinctrl_gpio_range *VAR_2,
    unsigned VAR_3)
{
 struct ltq_pinmux_info *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = FUNC_1(VAR_4, VAR_3);
 int VAR_6;

 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "could not find mfp for pin %d\n", VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(&VAR_4->mfp[VAR_5], 0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4->dev, "No GPIO function on pin%d\n", VAR_5);
  return -VAR_0;
 }

 return VAR_4->apply_mux(VAR_1, VAR_5, VAR_6);
}
