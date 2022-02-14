
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct pinctrl_desc {int * pmxops; int * pctlops; } ;
struct ltq_pinmux_info {int pctrl; int * dev; struct pinctrl_desc* desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct pinctrl_desc*,struct ltq_pinmux_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct platform_device*,struct ltq_pinmux_info*) ;

int FUNC_5(struct platform_device *VAR_3,
    struct ltq_pinmux_info *VAR_4)
{
 struct pinctrl_desc *VAR_5;

 if (!VAR_4)
  return -VAR_0;
 VAR_5 = VAR_4->desc;
 VAR_5->pctlops = &VAR_1;
 VAR_5->pmxops = &VAR_2;
 VAR_4->dev = &VAR_3->dev;

 VAR_4->pctrl = FUNC_3(&VAR_3->dev, VAR_5, VAR_4);
 if (FUNC_0(VAR_4->pctrl)) {
  FUNC_2(&VAR_3->dev, "failed to register LTQ pinmux driver\n");
  return FUNC_1(VAR_4->pctrl);
 }
 FUNC_4(VAR_3, VAR_4);
 return 0;
}
