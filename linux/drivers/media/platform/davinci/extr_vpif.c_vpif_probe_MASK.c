
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_7__ {struct TYPE_7__* parent; int coherent_dma_mask; int dma_mask; int of_node; } ;
struct platform_device {char* name; int id; int num_resources; TYPE_1__ dev; struct resource* resource; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct platform_device* FUNC_5 (TYPE_1__*,int,int ) ;
 struct device_node* FUNC_6 (int ,struct device_node*) ;
 int FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 static struct resource *VAR_7, *VAR_8;
 struct platform_device *VAR_9, *VAR_10;
 struct device_node *VAR_11 = ((void*)0);

 VAR_7 = FUNC_8(VAR_6, VAR_3, 0);
 VAR_4 = FUNC_4(&VAR_6->dev, VAR_7);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_9(&VAR_6->dev);
 FUNC_10(&VAR_6->dev);

 FUNC_11(&VAR_5);
 FUNC_2(&VAR_6->dev, "vpif probe success\n");







 VAR_11 = FUNC_6(VAR_6->dev.of_node,
           VAR_11);
 if (!VAR_11)
  return 0;





 VAR_8 = FUNC_8(VAR_6, VAR_2, 0);
 if (!VAR_8) {
  FUNC_3(&VAR_6->dev, "Missing IRQ resource.\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(*VAR_9),
        VAR_1);
 if (VAR_9) {
  VAR_9->name = "vpif_capture";
  VAR_9->id = -1;
  VAR_9->resource = VAR_8;
  VAR_9->num_resources = 1;
  VAR_9->dev.dma_mask = VAR_6->dev.dma_mask;
  VAR_9->dev.coherent_dma_mask = VAR_6->dev.coherent_dma_mask;
  VAR_9->dev.parent = &VAR_6->dev;
  FUNC_7(VAR_9);
 } else {
  FUNC_3(&VAR_6->dev, "Unable to allocate memory for pdev_capture.\n");
 }

 VAR_10 = FUNC_5(&VAR_6->dev, sizeof(*VAR_10),
        VAR_1);
 if (VAR_10) {
  VAR_10->name = "vpif_display";
  VAR_10->id = -1;
  VAR_10->resource = VAR_8;
  VAR_10->num_resources = 1;
  VAR_10->dev.dma_mask = VAR_6->dev.dma_mask;
  VAR_10->dev.coherent_dma_mask = VAR_6->dev.coherent_dma_mask;
  VAR_10->dev.parent = &VAR_6->dev;
  FUNC_7(VAR_10);
 } else {
  FUNC_3(&VAR_6->dev, "Unable to allocate memory for pdev_display.\n");
 }

 return 0;
}
