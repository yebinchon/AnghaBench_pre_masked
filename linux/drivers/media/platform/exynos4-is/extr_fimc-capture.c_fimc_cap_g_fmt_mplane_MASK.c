
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_format {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ctx; } ;
struct fimc_dev {TYPE_2__ vid_cap; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int d_frame; } ;


 int FUNC_0 (int *,struct v4l2_format*) ;
 struct fimc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct fimc_dev *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_3->vid_cap.ctx->d_frame, VAR_2);
 return 0;
}
