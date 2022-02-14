
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_requestbuffers {scalar_t__ count; } ;
struct TYPE_2__ {scalar_t__ reqbufs_count; } ;
struct fimc_isp {TYPE_1__ video_capture; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct file*,void*,struct v4l2_requestbuffers*) ;
 struct fimc_isp* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_requestbuffers *VAR_4)
{
 struct fimc_isp *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_4->count && VAR_4->count < VAR_1) {
  VAR_4->count = 0;
  FUNC_0(VAR_2, VAR_3, VAR_4);
  VAR_6 = -VAR_0;
 }

 VAR_5->video_capture.reqbufs_count = VAR_4->count;
 return VAR_6;
}
