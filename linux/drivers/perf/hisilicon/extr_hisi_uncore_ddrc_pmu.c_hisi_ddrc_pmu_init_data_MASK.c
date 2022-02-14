
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hisi_pmu {int ccl_id; int base; int sccl_id; int index_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,struct resource*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2,
       struct hisi_pmu *VAR_3)
{
 struct resource *VAR_4;





 if (FUNC_3(&VAR_2->dev, "hisilicon,ch-id",
         &VAR_3->index_id)) {
  FUNC_2(&VAR_2->dev, "Can not read ddrc channel-id!\n");
  return -VAR_0;
 }

 if (FUNC_3(&VAR_2->dev, "hisilicon,scl-id",
         &VAR_3->sccl_id)) {
  FUNC_2(&VAR_2->dev, "Can not read ddrc sccl-id!\n");
  return -VAR_0;
 }

 VAR_3->ccl_id = -1;

 VAR_4 = FUNC_5(VAR_2, VAR_1, 0);
 VAR_3->base = FUNC_4(&VAR_2->dev, VAR_4);
 if (FUNC_0(VAR_3->base)) {
  FUNC_2(&VAR_2->dev, "ioremap failed for ddrc_pmu resource\n");
  return FUNC_1(VAR_3->base);
 }

 return 0;
}
