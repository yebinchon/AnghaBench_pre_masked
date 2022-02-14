
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_requestbuffers {int count; } ;
struct TYPE_2__ {int reqbufs_count; } ;
struct fimc_dev {TYPE_1__ vid_cap; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,void*,struct v4l2_requestbuffers*) ;
 struct fimc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
       struct v4l2_requestbuffers *VAR_2)
{
 struct fimc_dev *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (!VAR_4)
  VAR_3->vid_cap.reqbufs_count = VAR_2->count;

 return VAR_4;
}
