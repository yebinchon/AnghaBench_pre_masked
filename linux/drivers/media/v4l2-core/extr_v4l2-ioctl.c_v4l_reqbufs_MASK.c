
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int type; } ;
struct v4l2_ioctl_ops {int (* vidioc_reqbufs ) (struct file*,void*,struct v4l2_requestbuffers*) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_requestbuffers*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,int ) ;
 int FUNC_2 (struct file*,void*,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_3(const struct v4l2_ioctl_ops *VAR_1,
    struct file *VAR_2, void *VAR_3, void *VAR_4)
{
 struct v4l2_requestbuffers *VAR_5 = VAR_4;
 int VAR_6 = FUNC_1(VAR_2, VAR_5->type);

 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_5, VAR_0);

 return VAR_1->vidioc_reqbufs(VAR_2, VAR_3, VAR_5);
}
