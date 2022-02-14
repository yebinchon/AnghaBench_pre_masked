
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ioctl_ops {int (* vidioc_create_bufs ) (struct file*,void*,struct v4l2_create_buffers*) ;} ;
struct TYPE_4__ {int priv; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ fmt; } ;
struct v4l2_create_buffers {TYPE_3__ format; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_create_buffers*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct file*,scalar_t__) ;
 int FUNC_2 (struct file*,void*,struct v4l2_create_buffers*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(const struct v4l2_ioctl_ops *VAR_4,
    struct file *VAR_5, void *VAR_6, void *VAR_7)
{
 struct v4l2_create_buffers *VAR_8 = VAR_7;
 int VAR_9 = FUNC_1(VAR_5, VAR_8->format.type);

 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_8, VAR_3);

 FUNC_3(&VAR_8->format);

 VAR_9 = VAR_4->vidioc_create_bufs(VAR_5, VAR_6, VAR_8);

 if (VAR_8->format.type == VAR_0 ||
     VAR_8->format.type == VAR_1)
  VAR_8->format.fmt.pix.priv = VAR_2;

 return VAR_9;
}
