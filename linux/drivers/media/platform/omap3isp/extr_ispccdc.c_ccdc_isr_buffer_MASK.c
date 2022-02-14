
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isp_pipeline {int state; } ;
struct isp_device {int crashed; int dev; } ;
struct TYPE_4__ {int dmaqueue; } ;
struct TYPE_3__ {int entity; } ;
struct isp_ccdc_device {scalar_t__ state; TYPE_2__ video_out; TYPE_1__ subdev; scalar_t__ underrun; } ;
struct isp_buffer {int dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct isp_ccdc_device*) ;
 scalar_t__ FUNC_1 (struct isp_ccdc_device*,int) ;
 int FUNC_2 (struct isp_ccdc_device*,int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct isp_pipeline*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct isp_pipeline*) ;
 int FUNC_8 (struct isp_pipeline*,scalar_t__) ;
 struct isp_buffer* FUNC_9 (TYPE_2__*) ;
 struct isp_device* FUNC_10 (struct isp_ccdc_device*) ;
 struct isp_pipeline* FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct isp_ccdc_device *VAR_3)
{
 struct isp_pipeline *VAR_4 = FUNC_11(&VAR_3->subdev.entity);
 struct isp_device *VAR_5 = FUNC_10(VAR_3);
 struct isp_buffer *VAR_6;







 if (FUNC_5(&VAR_3->video_out.dmaqueue))
  return 0;





 if (VAR_3->state == VAR_1 && VAR_3->underrun) {
  VAR_3->underrun = 0;
  return 1;
 }


 if (FUNC_1(VAR_3, 1000)) {
  FUNC_3(VAR_5->dev, "CCDC won't become idle!\n");
  FUNC_6(&VAR_5->crashed, &VAR_3->subdev.entity);
  FUNC_7(VAR_4);
  return 0;
 }

 if (!FUNC_0(VAR_3))
  return 1;

 VAR_6 = FUNC_9(&VAR_3->video_out);
 if (VAR_6 != ((void*)0))
  FUNC_2(VAR_3, VAR_6->dma);

 VAR_4->state |= VAR_0;

 if (VAR_3->state == VAR_2 &&
     FUNC_4(VAR_4))
  FUNC_8(VAR_4,
     VAR_2);

 return VAR_6 != ((void*)0);
}
