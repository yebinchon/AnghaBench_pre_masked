
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int width; int pixelformat; int bytesperline; int colorspace; int sizeimage; int field; int height; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct deinterlace_q_data {int width; int sizeimage; TYPE_2__* fmt; int field; int height; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct deinterlace_ctx {int colorspace; TYPE_1__ fh; } ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;


 struct deinterlace_q_data* FUNC_0 (int ) ;
 struct vb2_queue* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct deinterlace_ctx *VAR_1, struct v4l2_format *VAR_2)
{
 struct vb2_queue *VAR_3;
 struct deinterlace_q_data *VAR_4;

 VAR_3 = FUNC_1(VAR_1->fh.m2m_ctx, VAR_2->type);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2->type);

 VAR_2->fmt.pix.width = VAR_4->width;
 VAR_2->fmt.pix.height = VAR_4->height;
 VAR_2->fmt.pix.field = VAR_4->field;
 VAR_2->fmt.pix.pixelformat = VAR_4->fmt->fourcc;

 switch (VAR_4->fmt->fourcc) {
 case 129:
  VAR_2->fmt.pix.bytesperline = VAR_4->width * 3 / 2;
  break;
 case 128:
 default:
  VAR_2->fmt.pix.bytesperline = VAR_4->width * 2;
 }

 VAR_2->fmt.pix.sizeimage = VAR_4->sizeimage;
 VAR_2->fmt.pix.colorspace = VAR_1->colorspace;

 return 0;
}
