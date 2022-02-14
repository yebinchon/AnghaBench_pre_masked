
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stop; int start; } ;
struct TYPE_5__ {char* name; TYPE_1__ dev_ops; int detach_dev; int attach_dev; } ;
struct ti_sci_pm_domain {TYPE_2__ pd; struct device* dev; int ti_sci; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ti_sci_pm_domain* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device_node*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct ti_sci_pm_domain *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->ti_sci = FUNC_3(VAR_7);
 if (FUNC_0(VAR_9->ti_sci))
  return FUNC_1(VAR_9->ti_sci);

 VAR_9->dev = VAR_7;

 VAR_9->pd.name = "ti_sci_pd";

 VAR_9->pd.attach_dev = VAR_4;
 VAR_9->pd.detach_dev = VAR_5;

 VAR_9->pd.dev_ops.start = VAR_2;
 VAR_9->pd.dev_ops.stop = VAR_3;

 FUNC_5(&VAR_9->pd, ((void*)0), 1);

 VAR_10 = FUNC_4(VAR_8, &VAR_9->pd);

 return VAR_10;
}
