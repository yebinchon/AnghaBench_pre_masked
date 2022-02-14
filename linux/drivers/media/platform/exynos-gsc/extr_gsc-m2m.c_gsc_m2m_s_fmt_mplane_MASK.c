
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {int height; int width; TYPE_2__* plane_fmt; int colorspace; int pixelformat; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct gsc_frame {int f_height; int f_width; int * payload; TYPE_3__* fmt; int colorspace; } ;
struct gsc_ctx {struct gsc_frame d_frame; struct gsc_frame s_frame; int m2m_ctx; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int num_planes; } ;
struct TYPE_5__ {int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct gsc_ctx* FUNC_1 (void*) ;
 TYPE_3__* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int,struct gsc_ctx*) ;
 int FUNC_4 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_5 (struct gsc_frame*,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 struct vb2_queue* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_6, void *VAR_7,
     struct v4l2_format *VAR_8)
{
 struct gsc_ctx *VAR_9 = FUNC_1(VAR_7);
 struct vb2_queue *VAR_10;
 struct gsc_frame *VAR_11;
 struct v4l2_pix_format_mplane *VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_8);
 if (VAR_14)
  return VAR_14;

 VAR_10 = FUNC_8(VAR_9->m2m_ctx, VAR_8->type);

 if (FUNC_9(VAR_10)) {
  FUNC_7("queue (%d) busy", VAR_8->type);
  return -VAR_0;
 }

 if (FUNC_0(VAR_8->type))
  VAR_11 = &VAR_9->s_frame;
 else
  VAR_11 = &VAR_9->d_frame;

 VAR_12 = &VAR_8->fmt.pix_mp;
 VAR_11->fmt = FUNC_2(&VAR_12->pixelformat, ((void*)0), 0);
 VAR_11->colorspace = VAR_12->colorspace;
 if (!VAR_11->fmt)
  return -VAR_1;

 for (VAR_13 = 0; VAR_13 < VAR_11->fmt->num_planes; VAR_13++)
  VAR_11->payload[VAR_13] = VAR_12->plane_fmt[VAR_13].sizeimage;

 FUNC_5(VAR_11, VAR_12->width, VAR_12->height);

 if (VAR_8->type == VAR_5)
  FUNC_3(VAR_3 | VAR_2, VAR_9);
 else
  FUNC_3(VAR_3 | VAR_4, VAR_9);

 FUNC_6("f_w: %d, f_h: %d", VAR_11->f_width, VAR_11->f_height);

 return 0;
}
