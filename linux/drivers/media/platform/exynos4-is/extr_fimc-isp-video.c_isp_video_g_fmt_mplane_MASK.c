
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_4__ {int pixfmt; } ;
struct fimc_isp {TYPE_2__ video_capture; } ;
struct file {int dummy; } ;


 struct fimc_isp* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct fimc_isp *VAR_3 = FUNC_0(VAR_0);

 VAR_2->fmt.pix_mp = VAR_3->video_capture.pixfmt;
 return 0;
}
