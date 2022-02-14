
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_3__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct file {int dummy; } ;
struct cedrus_dev {int dummy; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct cedrus_ctx {int dst_fmt; TYPE_2__ fh; struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cedrus_dev*,int *) ;
 struct cedrus_ctx* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cedrus_ctx *VAR_4 = FUNC_1(VAR_1);
 struct cedrus_dev *VAR_5 = VAR_4->dev;
 struct vb2_queue *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4->fh.m2m_ctx, VAR_3->type);
 if (FUNC_4(VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_4->dst_fmt = VAR_3->fmt.pix;

 FUNC_0(VAR_5, &VAR_4->dst_fmt);

 return 0;
}
