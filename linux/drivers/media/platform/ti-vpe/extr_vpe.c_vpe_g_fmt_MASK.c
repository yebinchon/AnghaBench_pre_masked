
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpe_q_data {int nplanes; int * sizeimage; int * bytesperline; int colorspace; int field; TYPE_3__* fmt; int height; int width; } ;
struct TYPE_6__ {int m2m_ctx; } ;
struct vpe_ctx {TYPE_2__ fh; } ;
struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {int num_planes; TYPE_4__* plane_fmt; int colorspace; int field; int pixelformat; int height; int width; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int sizeimage; int bytesperline; } ;
struct TYPE_7__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct vpe_ctx* FUNC_1 (struct file*) ;
 struct vpe_q_data* FUNC_2 (struct vpe_ctx*,int ) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_4->fmt.pix_mp;
 struct vpe_ctx *VAR_6 = FUNC_1(VAR_2);
 struct vb2_queue *VAR_7;
 struct vpe_q_data *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_6->fh.m2m_ctx, VAR_4->type);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_4->type);

 VAR_5->width = VAR_8->width;
 VAR_5->height = VAR_8->height;
 VAR_5->pixelformat = VAR_8->fmt->fourcc;
 VAR_5->field = VAR_8->field;

 if (FUNC_0(VAR_4->type)) {
  VAR_5->colorspace = VAR_8->colorspace;
 } else {
  struct vpe_q_data *VAR_10;


  VAR_10 = FUNC_2(VAR_6, VAR_1);

  VAR_5->colorspace = VAR_10->colorspace;
 }

 VAR_5->num_planes = VAR_8->nplanes;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_planes; VAR_9++) {
  VAR_5->plane_fmt[VAR_9].bytesperline = VAR_8->bytesperline[VAR_9];
  VAR_5->plane_fmt[VAR_9].sizeimage = VAR_8->sizeimage[VAR_9];
 }

 return 0;
}
