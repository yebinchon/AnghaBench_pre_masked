
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int start; int end; int flags; } ;
struct device {int coherent_dma_mask; int dma_parms; int dma_mask; int type; } ;
struct platform_device {struct device dev; } ;
struct dwc3_qcom {TYPE_3__* dwc3; TYPE_2__* acpi_pdata; } ;
struct TYPE_7__ {int coherent_dma_mask; int dma_parms; int dma_mask; int type; struct device* parent; } ;
struct TYPE_9__ {TYPE_1__ dev; } ;
struct TYPE_8__ {int dwc3_core_base_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_6 ;
 struct resource* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,struct resource*,int) ;
 TYPE_3__* FUNC_6 (char*,int ) ;
 struct dwc3_qcom* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct dwc3_qcom *VAR_8 = FUNC_7(VAR_7);
 struct device *VAR_9 = &VAR_7->dev;
 struct resource *VAR_10, *VAR_11 = ((void*)0);
 int VAR_12;
 int VAR_13;

 VAR_8->dwc3 = FUNC_6("dwc3", VAR_5);
 if (!VAR_8->dwc3)
  return -VAR_1;

 VAR_8->dwc3->dev.parent = VAR_9;
 VAR_8->dwc3->dev.type = VAR_9->type;
 VAR_8->dwc3->dev.dma_mask = VAR_9->dma_mask;
 VAR_8->dwc3->dev.dma_parms = VAR_9->dma_parms;
 VAR_8->dwc3->dev.coherent_dma_mask = VAR_9->coherent_dma_mask;

 VAR_11 = FUNC_1(2, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_7, VAR_4, 0);
 if (!VAR_10) {
  FUNC_0(&VAR_7->dev, "failed to get memory resource\n");
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_11[0].flags = VAR_10->flags;
 VAR_11[0].start = VAR_10->start;
 VAR_11[0].end = VAR_11[0].start +
  VAR_8->acpi_pdata->dwc3_core_base_size;

 VAR_12 = FUNC_8(VAR_7, 0);
 VAR_11[1].flags = VAR_3;
 VAR_11[1].start = VAR_11[1].end = VAR_12;

 VAR_13 = FUNC_5(VAR_8->dwc3, VAR_11, 2);
 if (VAR_13) {
  FUNC_0(&VAR_7->dev, "failed to add resources\n");
  goto out;
 }

 VAR_13 = FUNC_4(VAR_8->dwc3,
          VAR_6);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_7->dev, "failed to add properties\n");
  goto out;
 }

 VAR_13 = FUNC_3(VAR_8->dwc3);
 if (VAR_13)
  FUNC_0(&VAR_7->dev, "failed to add device\n");

out:
 FUNC_2(VAR_11);
 return VAR_13;
}
