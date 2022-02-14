
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_5__ {int bytesperline; int sizeimage; int height; int width; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
struct g2d_frame {int stride; struct g2d_fmt* fmt; int height; int bottom; int width; int right; int c_height; int c_width; scalar_t__ o_height; scalar_t__ o_width; int size; } ;
struct g2d_fmt {int dummy; } ;
struct g2d_dev {int v4l2_dev; } ;
struct TYPE_4__ {int m2m_ctx; } ;
struct g2d_ctx {TYPE_1__ fh; struct g2d_dev* dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 struct g2d_fmt* FUNC_2 (struct v4l2_format*) ;
 struct g2d_frame* FUNC_3 (struct g2d_ctx*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 struct vb2_queue* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct g2d_ctx *VAR_5 = VAR_3;
 struct g2d_dev *VAR_6 = VAR_5->dev;
 struct vb2_queue *VAR_7;
 struct g2d_frame *VAR_8;
 struct g2d_fmt *VAR_9;
 int VAR_10 = 0;



 VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_4);
 if (VAR_10)
  return VAR_10;
 VAR_7 = FUNC_5(VAR_5->fh.m2m_ctx, VAR_4->type);
 if (FUNC_6(VAR_7)) {
  FUNC_4(&VAR_6->v4l2_dev, "queue (%d) bust\n", VAR_4->type);
  return -VAR_0;
 }
 VAR_8 = FUNC_3(VAR_5, VAR_4->type);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_9 = FUNC_2(VAR_4);
 if (!VAR_9)
  return -VAR_1;
 VAR_8->width = VAR_4->fmt.pix.width;
 VAR_8->height = VAR_4->fmt.pix.height;
 VAR_8->size = VAR_4->fmt.pix.sizeimage;

 VAR_8->o_width = 0;
 VAR_8->o_height = 0;
 VAR_8->c_width = VAR_8->width;
 VAR_8->c_height = VAR_8->height;
 VAR_8->right = VAR_8->width;
 VAR_8->bottom = VAR_8->height;
 VAR_8->fmt = VAR_9;
 VAR_8->stride = VAR_4->fmt.pix.bytesperline;
 return 0;
}
