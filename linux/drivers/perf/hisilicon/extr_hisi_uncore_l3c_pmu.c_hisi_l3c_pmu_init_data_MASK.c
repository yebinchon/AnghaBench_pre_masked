
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hisi_pmu {unsigned long long index_id; int base; int ccl_id; int sccl_id; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int *,unsigned long long*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *,struct resource*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2,
      struct hisi_pmu *VAR_3)
{
 unsigned long long VAR_4;
 struct resource *VAR_5;
 acpi_status VAR_6;

 VAR_6 = FUNC_4(FUNC_1(&VAR_2->dev),
           "_UID", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_6))
  return -VAR_0;

 VAR_3->index_id = VAR_4;





 if (FUNC_6(&VAR_2->dev, "hisilicon,scl-id",
         &VAR_3->sccl_id)) {
  FUNC_5(&VAR_2->dev, "Can not read l3c sccl-id!\n");
  return -VAR_0;
 }

 if (FUNC_6(&VAR_2->dev, "hisilicon,ccl-id",
         &VAR_3->ccl_id)) {
  FUNC_5(&VAR_2->dev, "Can not read l3c ccl-id!\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_8(VAR_2, VAR_1, 0);
 VAR_3->base = FUNC_7(&VAR_2->dev, VAR_5);
 if (FUNC_2(VAR_3->base)) {
  FUNC_5(&VAR_2->dev, "ioremap failed for l3c_pmu resource\n");
  return FUNC_3(VAR_3->base);
 }

 return 0;
}
