
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int width; int bytesperline; int sizeimage; int pixelformat; int field; int height; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct g2d_frame {int width; int size; TYPE_2__* fmt; int height; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct g2d_ctx {TYPE_1__ fh; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int depth; int fourcc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 int VAR_1 ;
 struct g2d_frame* FUNC_2 (struct g2d_ctx*,int ) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct g2d_ctx *VAR_5 = VAR_3;
 struct vb2_queue *VAR_6;
 struct g2d_frame *VAR_7;

 VAR_6 = FUNC_3(VAR_5->fh.m2m_ctx, VAR_4->type);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_2(VAR_5, VAR_4->type);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_4->fmt.pix.width = VAR_7->width;
 VAR_4->fmt.pix.height = VAR_7->height;
 VAR_4->fmt.pix.field = VAR_1;
 VAR_4->fmt.pix.pixelformat = VAR_7->fmt->fourcc;
 VAR_4->fmt.pix.bytesperline = (VAR_7->width * VAR_7->fmt->depth) >> 3;
 VAR_4->fmt.pix.sizeimage = VAR_7->size;
 return 0;
}
