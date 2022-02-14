
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct bm1880_pinctrl {int pctrldev; int pinconf; void* nfuncs; void* funcs; void* ngroups; void* groups; int base; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct bm1880_pinctrl* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int *,struct bm1880_pinctrl*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct bm1880_pinctrl*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)

{
 struct resource *VAR_8;
 struct bm1880_pinctrl *VAR_9;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_7, VAR_2, 0);
 VAR_9->base = FUNC_4(&VAR_7->dev, VAR_8);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_9->groups = VAR_4;
 VAR_9->ngroups = FUNC_0(VAR_4);
 VAR_9->funcs = VAR_6;
 VAR_9->nfuncs = FUNC_0(VAR_6);
 VAR_9->pinconf = VAR_5;

 VAR_9->pctrldev = FUNC_6(&VAR_7->dev, &VAR_3,
      VAR_9);
 if (FUNC_1(VAR_9->pctrldev))
  return FUNC_2(VAR_9->pctrldev);

 FUNC_8(VAR_7, VAR_9);

 FUNC_3(&VAR_7->dev, "BM1880 pinctrl driver initialized\n");

 return 0;
}
