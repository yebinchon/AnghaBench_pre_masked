
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct zynq_pinctrl {int pctrl; void* nfuncs; void* funcs; void* ngroups; void* groups; int pctrl_offset; int syscon; } ;
struct resource {int start; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct zynq_pinctrl* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int *,struct zynq_pinctrl*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct zynq_pinctrl*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)

{
 struct resource *VAR_8;
 struct zynq_pinctrl *VAR_9;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->syscon = FUNC_9(VAR_7->dev.of_node,
       "syscon");
 if (FUNC_1(VAR_9->syscon)) {
  FUNC_3(&VAR_7->dev, "unable to get syscon\n");
  return FUNC_2(VAR_9->syscon);
 }

 VAR_8 = FUNC_7(VAR_7, VAR_3, 0);
 if (!VAR_8) {
  FUNC_3(&VAR_7->dev, "missing IO resource\n");
  return -VAR_0;
 }
 VAR_9->pctrl_offset = VAR_8->start;

 VAR_9->groups = VAR_5;
 VAR_9->ngroups = FUNC_0(VAR_5);
 VAR_9->funcs = VAR_6;
 VAR_9->nfuncs = FUNC_0(VAR_6);

 VAR_9->pctrl = FUNC_6(&VAR_7->dev, &VAR_4, VAR_9);
 if (FUNC_1(VAR_9->pctrl))
  return FUNC_2(VAR_9->pctrl);

 FUNC_8(VAR_7, VAR_9);

 FUNC_4(&VAR_7->dev, "zynq pinctrl initialized\n");

 return 0;
}
