
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct msm_pinctrl_soc_data {int ntiles; int npins; int pins; int * tiles; } ;
struct TYPE_2__ {int npins; int pins; int name; int * confops; int * pmxops; int * pctlops; int owner; } ;
struct msm_pinctrl {scalar_t__ irq; void* pctrl; TYPE_1__ desc; struct msm_pinctrl_soc_data const* soc; void** regs; int lock; int chip; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,struct resource*) ;
 struct msm_pinctrl* FUNC_6 (int *,int,int ) ;
 void* FUNC_7 (int *,TYPE_1__*,struct msm_pinctrl*) ;
 int FUNC_8 (struct msm_pinctrl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct msm_pinctrl*) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct msm_pinctrl*) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct platform_device *VAR_8,
        const struct msm_pinctrl_soc_data *VAR_9)
{
 struct msm_pinctrl *VAR_10;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = &VAR_8->dev;
 VAR_10->soc = VAR_9;
 VAR_10->chip = VAR_4;

 FUNC_14(&VAR_10->lock);

 if (VAR_9->tiles) {
  for (VAR_13 = 0; VAR_13 < VAR_9->ntiles; VAR_13++) {
   VAR_11 = FUNC_12(VAR_8, VAR_2,
          VAR_9->tiles[VAR_13]);
   VAR_10->regs[VAR_13] = FUNC_5(&VAR_8->dev, VAR_11);
   if (FUNC_0(VAR_10->regs[VAR_13]))
    return FUNC_1(VAR_10->regs[VAR_13]);
  }
 } else {
  VAR_11 = FUNC_11(VAR_8, VAR_2, 0);
  VAR_10->regs[0] = FUNC_5(&VAR_8->dev, VAR_11);
  if (FUNC_0(VAR_10->regs[0]))
   return FUNC_1(VAR_10->regs[0]);
 }

 FUNC_9(VAR_10);

 VAR_10->irq = FUNC_10(VAR_8, 0);
 if (VAR_10->irq < 0)
  return VAR_10->irq;

 VAR_10->desc.owner = VAR_3;
 VAR_10->desc.pctlops = &VAR_6;
 VAR_10->desc.pmxops = &VAR_7;
 VAR_10->desc.confops = &VAR_5;
 VAR_10->desc.name = FUNC_4(&VAR_8->dev);
 VAR_10->desc.pins = VAR_10->soc->pins;
 VAR_10->desc.npins = VAR_10->soc->npins;

 VAR_10->pctrl = FUNC_7(&VAR_8->dev, &VAR_10->desc, VAR_10);
 if (FUNC_0(VAR_10->pctrl)) {
  FUNC_3(&VAR_8->dev, "Couldn't register pinctrl driver\n");
  return FUNC_1(VAR_10->pctrl);
 }

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_13(VAR_8, VAR_10);

 FUNC_2(&VAR_8->dev, "Probed Qualcomm pinctrl driver\n");

 return 0;
}
