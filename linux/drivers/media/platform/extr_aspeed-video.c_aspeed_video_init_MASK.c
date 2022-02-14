
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct TYPE_2__ {int virt; } ;
struct aspeed_video {void* eclk; void* vclk; int yuv420; TYPE_1__ jpeg; struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int FUNC_3 (struct aspeed_video*,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct device*,char*,...) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,int,int *,int ,int ,int ,struct aspeed_video*) ;
 int FUNC_10 (struct device*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;

__attribute__((used)) static int FUNC_14(struct aspeed_video *VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct device *VAR_9 = VAR_6->dev;

 VAR_7 = FUNC_11(VAR_9->of_node, 0);
 if (!VAR_7) {
  FUNC_7(VAR_9, "Unable to find IRQ\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_9(VAR_9, VAR_7, ((void*)0), VAR_5,
           VAR_3, VAR_0, VAR_6);
 if (VAR_8 < 0) {
  FUNC_7(VAR_9, "Unable to request IRQ %d\n", VAR_7);
  return VAR_8;
 }

 VAR_6->eclk = FUNC_8(VAR_9, "eclk");
 if (FUNC_1(VAR_6->eclk)) {
  FUNC_7(VAR_9, "Unable to get ECLK\n");
  return FUNC_2(VAR_6->eclk);
 }

 VAR_8 = FUNC_5(VAR_6->eclk);
 if (VAR_8)
  return VAR_8;

 VAR_6->vclk = FUNC_8(VAR_9, "vclk");
 if (FUNC_1(VAR_6->vclk)) {
  FUNC_7(VAR_9, "Unable to get VCLK\n");
  VAR_8 = FUNC_2(VAR_6->vclk);
  goto err_unprepare_eclk;
 }

 VAR_8 = FUNC_5(VAR_6->vclk);
 if (VAR_8)
  goto err_unprepare_eclk;

 FUNC_12(VAR_9);

 VAR_8 = FUNC_10(VAR_9, FUNC_0(32));
 if (VAR_8) {
  FUNC_7(VAR_9, "Failed to set DMA mask\n");
  goto err_release_reserved_mem;
 }

 if (!FUNC_3(VAR_6, &VAR_6->jpeg,
        VAR_4)) {
  FUNC_7(VAR_9, "Failed to allocate DMA for JPEG header\n");
  VAR_8 = -VAR_2;
  goto err_release_reserved_mem;
 }

 FUNC_4(VAR_6->jpeg.virt, VAR_6->yuv420);

 return 0;

err_release_reserved_mem:
 FUNC_13(VAR_9);
 FUNC_6(VAR_6->vclk);
err_unprepare_eclk:
 FUNC_6(VAR_6->eclk);

 return VAR_8;
}
