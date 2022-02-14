
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_16__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; int name; } ;
struct TYPE_15__ {int base; int ngpio; int of_node; TYPE_5__* parent; int owner; int label; int dbg_show; int set_config; int set; int get; int direction_output; int direction_input; int get_direction; } ;
struct amd_gpio {int hwbank_num; TYPE_1__ gc; int pctrl; int ngroups; int groups; struct platform_device* pdev; int saved_regs; int base; int lock; } ;
struct TYPE_17__ {int name; int npins; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_7__ VAR_18 ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (TYPE_5__*,int ,int,int ) ;
 struct amd_gpio* FUNC_8 (TYPE_5__*,int,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_7__*,struct amd_gpio*) ;
 int FUNC_10 (TYPE_5__*,int,int ,int ,int ,struct amd_gpio*) ;
 int FUNC_11 (TYPE_1__*,struct amd_gpio*) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_13 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct amd_gpio*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct resource*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_21)
{
 int VAR_22 = 0;
 int VAR_23;
 struct resource *VAR_24;
 struct amd_gpio *VAR_25;

 VAR_25 = FUNC_8(&VAR_21->dev,
    sizeof(struct amd_gpio), VAR_3);
 if (!VAR_25)
  return -VAR_2;

 FUNC_18(&VAR_25->lock);

 VAR_24 = FUNC_16(VAR_21, VAR_4, 0);
 if (!VAR_24) {
  FUNC_4(&VAR_21->dev, "Failed to get gpio io resource.\n");
  return -VAR_0;
 }

 VAR_25->base = FUNC_6(&VAR_21->dev, VAR_24->start,
      FUNC_19(VAR_24));
 if (!VAR_25->base)
  return -VAR_2;

 VAR_23 = FUNC_15(VAR_21, 0);
 if (VAR_23 < 0)
  return VAR_23;
 VAR_25->pdev = VAR_21;
 VAR_25->gc.get_direction = VAR_12;
 VAR_25->gc.direction_input = VAR_10;
 VAR_25->gc.direction_output = VAR_11;
 VAR_25->gc.get = VAR_13;
 VAR_25->gc.set = VAR_17;
 VAR_25->gc.set_config = VAR_16;
 VAR_25->gc.dbg_show = VAR_9;

 VAR_25->gc.base = -1;
 VAR_25->gc.label = VAR_21->name;
 VAR_25->gc.owner = VAR_8;
 VAR_25->gc.parent = &VAR_21->dev;
 VAR_25->gc.ngpio = FUNC_19(VAR_24) / 4;




 VAR_25->hwbank_num = VAR_25->gc.ngpio / 64;
 VAR_25->groups = VAR_20;
 VAR_25->ngroups = FUNC_0(VAR_20);

 VAR_18.name = FUNC_5(&VAR_21->dev);
 VAR_25->pctrl = FUNC_9(&VAR_21->dev, &VAR_18,
      VAR_25);
 if (FUNC_1(VAR_25->pctrl)) {
  FUNC_4(&VAR_21->dev, "Couldn't register pinctrl driver\n");
  return FUNC_2(VAR_25->pctrl);
 }

 VAR_22 = FUNC_11(&VAR_25->gc, VAR_25);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_12(&VAR_25->gc, FUNC_5(&VAR_21->dev),
    0, 0, VAR_25->gc.ngpio);
 if (VAR_22) {
  FUNC_4(&VAR_21->dev, "Failed to add pin range\n");
  goto out2;
 }

 VAR_22 = FUNC_13(&VAR_25->gc,
    &VAR_15,
    0,
    VAR_19,
    VAR_6);
 if (VAR_22) {
  FUNC_4(&VAR_21->dev, "could not add irqchip\n");
  VAR_22 = -VAR_1;
  goto out2;
 }

 VAR_22 = FUNC_10(&VAR_21->dev, VAR_23, VAR_14,
          VAR_5, VAR_7, VAR_25);
 if (VAR_22)
  goto out2;

 FUNC_17(VAR_21, VAR_25);

 FUNC_3(&VAR_21->dev, "amd gpio driver loaded\n");
 return VAR_22;

out2:
 FUNC_14(&VAR_25->gc);

 return VAR_22;
}
