
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct c67x00_platform_data {int hpi_regstep; } ;
struct TYPE_2__ {int base; int regstep; int lock; } ;
struct c67x00_device {TYPE_1__ hpi; int * sie; struct platform_device* pdev; void* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct c67x00_device*) ;
 int FUNC_1 (struct c67x00_device*) ;
 int FUNC_2 (struct c67x00_device*) ;
 int FUNC_3 (int *,struct c67x00_device*,int) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int ,struct c67x00_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct c67x00_device*) ;
 struct c67x00_device* FUNC_10 (int,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct c67x00_device*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,struct c67x00_device*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (struct resource*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct c67x00_device *VAR_10;
 struct c67x00_platform_data *VAR_11;
 struct resource *VAR_12, *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_11(VAR_9, VAR_7, 0);
 if (!VAR_12)
  return -VAR_3;

 VAR_13 = FUNC_11(VAR_9, VAR_6, 0);
 if (!VAR_13)
  return -VAR_3;

 VAR_11 = FUNC_5(&VAR_9->dev);
 if (!VAR_11)
  return -VAR_3;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 if (!FUNC_15(VAR_12->start, FUNC_16(VAR_12),
    VAR_9->name)) {
  FUNC_4(&VAR_9->dev, "Memory region busy\n");
  VAR_14 = -VAR_1;
  goto request_mem_failed;
 }
 VAR_10->hpi.base = FUNC_7(VAR_12->start, FUNC_16(VAR_12));
 if (!VAR_10->hpi.base) {
  FUNC_4(&VAR_9->dev, "Unable to map HPI registers\n");
  VAR_14 = -VAR_2;
  goto map_failed;
 }

 FUNC_17(&VAR_10->hpi.lock);
 VAR_10->hpi.regstep = VAR_11->hpi_regstep;
 VAR_10->pdata = FUNC_5(&VAR_9->dev);
 VAR_10->pdev = VAR_9;

 FUNC_1(VAR_10);
 FUNC_0(VAR_10);

 VAR_14 = FUNC_14(VAR_13->start, VAR_8, 0, VAR_9->name, VAR_10);
 if (VAR_14) {
  FUNC_4(&VAR_9->dev, "Cannot claim IRQ\n");
  goto request_irq_failed;
 }

 VAR_14 = FUNC_2(VAR_10);
 if (VAR_14) {
  FUNC_4(&VAR_9->dev, "Device reset failed\n");
  goto reset_failed;
 }

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  FUNC_3(&VAR_10->sie[VAR_15], VAR_10, VAR_15);

 FUNC_12(VAR_9, VAR_10);

 return 0;

 reset_failed:
 FUNC_6(VAR_13->start, VAR_10);
 request_irq_failed:
 FUNC_8(VAR_10->hpi.base);
 map_failed:
 FUNC_13(VAR_12->start, FUNC_16(VAR_12));
 request_mem_failed:
 FUNC_9(VAR_10);

 return VAR_14;
}
