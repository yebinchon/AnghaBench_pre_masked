
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_pipeline {int state; } ;
struct TYPE_2__ {int entity; } ;
struct isp_ccp2_device {scalar_t__ state; int video_in; TYPE_1__ subdev; } ;
struct isp_buffer {int dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isp_ccp2_device*,int ) ;
 scalar_t__ FUNC_1 (struct isp_pipeline*) ;
 int FUNC_2 (struct isp_pipeline*,scalar_t__) ;
 struct isp_buffer* FUNC_3 (int *) ;
 struct isp_pipeline* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct isp_ccp2_device *VAR_2)
{
 struct isp_pipeline *VAR_3 = FUNC_4(&VAR_2->subdev.entity);
 struct isp_buffer *VAR_4;

 VAR_4 = FUNC_3(&VAR_2->video_in);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_2, VAR_4->dma);

 VAR_3->state |= VAR_0;

 if (VAR_2->state == VAR_1) {
  if (FUNC_1(VAR_3))
   FUNC_2(VAR_3,
      VAR_1);
 }
}
