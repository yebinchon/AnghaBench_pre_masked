
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct isp_res_device {scalar_t__ state; scalar_t__ input; int video_in; int video_out; TYPE_1__ subdev; } ;
struct isp_pipeline {int state; } ;
struct isp_buffer {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct isp_pipeline*) ;
 int FUNC_1 (struct isp_pipeline*,scalar_t__) ;
 struct isp_buffer* FUNC_2 (int *) ;
 int FUNC_3 (struct isp_res_device*) ;
 int FUNC_4 (struct isp_res_device*,int ) ;
 int FUNC_5 (struct isp_res_device*,int ) ;
 struct isp_pipeline* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct isp_res_device *VAR_5)
{
 struct isp_pipeline *VAR_6 = FUNC_6(&VAR_5->subdev.entity);
 struct isp_buffer *VAR_7;
 int VAR_8 = 0;

 if (VAR_5->state == VAR_3)
  return;




 VAR_7 = FUNC_2(&VAR_5->video_out);
 if (VAR_7 != ((void*)0)) {
  FUNC_5(VAR_5, VAR_7->dma);
  VAR_8 = 1;
 }

 VAR_6->state |= VAR_1;

 if (VAR_5->input == VAR_4) {
  VAR_7 = FUNC_2(&VAR_5->video_in);
  if (VAR_7 != ((void*)0))
   FUNC_4(VAR_5, VAR_7->dma);
  VAR_6->state |= VAR_0;
 }

 if (VAR_5->state == VAR_2) {
  if (FUNC_0(VAR_6))
   FUNC_1(VAR_6,
      VAR_2);
 } else {



  if (VAR_8)
   FUNC_3(VAR_5);
 }
}
