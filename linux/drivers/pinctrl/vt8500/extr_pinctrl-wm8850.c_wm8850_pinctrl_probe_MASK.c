
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_pinctrl_data {void* ngroups; void* groups; void* npins; void* pins; void* nbanks; void* banks; } ;
struct platform_device {int dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct wmt_pinctrl_data* FUNC_1 (int *,int,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (struct platform_device*,struct wmt_pinctrl_data*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 struct wmt_pinctrl_data *VAR_6;

 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->banks = VAR_2;
 VAR_6->nbanks = FUNC_0(VAR_2);
 VAR_6->pins = VAR_4;
 VAR_6->npins = FUNC_0(VAR_4);
 VAR_6->groups = VAR_3;
 VAR_6->ngroups = FUNC_0(VAR_3);

 return FUNC_2(VAR_5, VAR_6);
}
