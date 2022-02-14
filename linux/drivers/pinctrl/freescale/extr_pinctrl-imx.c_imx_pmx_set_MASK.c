
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl_soc_info {int flags; } ;
struct imx_pinctrl {int dev; struct imx_pinctrl_soc_info* info; } ;
struct imx_pin {int dummy; } ;
struct group_desc {unsigned int num_pins; scalar_t__ data; int name; } ;
struct function_desc {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct imx_pinctrl*,struct imx_pin*) ;
 struct imx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 struct group_desc* FUNC_3 (struct pinctrl_dev*,unsigned int) ;
 struct function_desc* FUNC_4 (struct pinctrl_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_2, unsigned VAR_3,
         unsigned VAR_4)
{
 struct imx_pinctrl *VAR_5 = FUNC_2(VAR_2);
 const struct imx_pinctrl_soc_info *VAR_6 = VAR_5->info;
 struct function_desc *VAR_7;
 struct group_desc *VAR_8;
 struct imx_pin *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12;





 VAR_8 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_10 = VAR_8->num_pins;

 FUNC_0(VAR_5->dev, "enable function %s group %s\n",
  VAR_7->name, VAR_8->name);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {





  VAR_9 = &((struct imx_pin *)(VAR_8->data))[VAR_11];
  if (!(VAR_6->flags & VAR_1)) {
   VAR_12 = FUNC_1(VAR_5, VAR_9);
   if (VAR_12)
    return VAR_12;
  }
 }

 return 0;
}
