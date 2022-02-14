
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int v4l2_dev; } ;
struct TYPE_3__ {int * pipe; } ;
struct TYPE_4__ {TYPE_1__ ve; } ;
struct fimc_isp {TYPE_2__ video_capture; } ;


 int VAR_0 ;
 int FUNC_0 (struct fimc_isp*,int ,int ) ;
 int * FUNC_1 (struct v4l2_subdev*) ;
 struct fimc_isp* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1)
{
 struct fimc_isp *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;


 VAR_2->video_capture.ve.pipe = FUNC_1(VAR_1);

 VAR_3 = FUNC_0(VAR_2, VAR_1->v4l2_dev,
   VAR_0);
 if (VAR_3 < 0)
  VAR_2->video_capture.ve.pipe = ((void*)0);

 return VAR_3;
}
