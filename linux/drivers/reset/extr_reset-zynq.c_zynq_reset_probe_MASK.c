
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct zynq_reset_data {TYPE_2__ rcdev; int offset; int slcr; } ;
struct resource {int start; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct zynq_reset_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct zynq_reset_data*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 struct zynq_reset_data *VAR_9;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;
 FUNC_6(VAR_7, VAR_9);

 VAR_9->slcr = FUNC_8(VAR_7->dev.of_node,
           "syscon");
 if (FUNC_0(VAR_9->slcr)) {
  FUNC_2(&VAR_7->dev, "unable to get zynq-slcr regmap");
  return FUNC_1(VAR_9->slcr);
 }

 VAR_8 = FUNC_5(VAR_7, VAR_4, 0);
 if (!VAR_8) {
  FUNC_2(&VAR_7->dev, "missing IO resource\n");
  return -VAR_1;
 }

 VAR_9->offset = VAR_8->start;

 VAR_9->rcdev.owner = VAR_5;
 VAR_9->rcdev.nr_resets = FUNC_7(VAR_8) / 4 * VAR_0;
 VAR_9->rcdev.ops = &VAR_6;
 VAR_9->rcdev.of_node = VAR_7->dev.of_node;

 return FUNC_4(&VAR_7->dev, &VAR_9->rcdev);
}
