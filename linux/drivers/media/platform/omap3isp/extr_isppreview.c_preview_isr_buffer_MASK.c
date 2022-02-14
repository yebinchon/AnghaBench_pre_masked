
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct isp_prev_device {int output; scalar_t__ input; int state; int video_in; int video_out; TYPE_1__ subdev; } ;
struct isp_pipeline {int state; } ;
struct isp_buffer {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp_pipeline*) ;
 int FUNC_1 (struct isp_pipeline*,int const) ;
 struct isp_buffer* FUNC_2 (int *) ;
 int FUNC_3 (struct isp_prev_device*) ;
 int FUNC_4 (struct isp_prev_device*,int ) ;
 int FUNC_5 (struct isp_prev_device*,int ) ;
 struct isp_pipeline* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct isp_prev_device *VAR_4)
{
 struct isp_pipeline *VAR_5 = FUNC_6(&VAR_4->subdev.entity);
 struct isp_buffer *VAR_6;
 int VAR_7 = 0;

 if (VAR_4->output & VAR_3) {
  VAR_6 = FUNC_2(&VAR_4->video_out);
  if (VAR_6 != ((void*)0)) {
   FUNC_5(VAR_4, VAR_6->dma);
   VAR_7 = 1;
  }
  VAR_5->state |= VAR_1;
 }

 if (VAR_4->input == VAR_2) {
  VAR_6 = FUNC_2(&VAR_4->video_in);
  if (VAR_6 != ((void*)0))
   FUNC_4(VAR_4, VAR_6->dma);
  VAR_5->state |= VAR_0;
 }

 switch (VAR_4->state) {
 case 129:
  if (FUNC_0(VAR_5))
   FUNC_1(VAR_5,
      129);
  break;

 case 130:



  if (VAR_7)
   FUNC_3(VAR_4);
  break;

 case 128:
 default:
  return;
 }
}
