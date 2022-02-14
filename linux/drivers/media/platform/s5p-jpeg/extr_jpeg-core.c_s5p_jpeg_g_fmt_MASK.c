
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vb2_queue {int dummy; } ;
struct v4l2_pix_format {int width; scalar_t__ pixelformat; int bytesperline; int sizeimage; int field; int height; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct s5p_jpeg_q_data {int w; int size; TYPE_3__* fmt; int h; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; int hdr_parsed; TYPE_2__ fh; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ fourcc; int colplanes; int depth; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct s5p_jpeg_ctx* FUNC_1 (void*) ;
 struct s5p_jpeg_q_data* FUNC_2 (struct s5p_jpeg_ctx*,int ) ;
 struct vb2_queue* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct vb2_queue *VAR_8;
 struct s5p_jpeg_q_data *VAR_9 = ((void*)0);
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;
 struct s5p_jpeg_ctx *VAR_11 = FUNC_1(VAR_6);

 VAR_8 = FUNC_3(VAR_11->fh.m2m_ctx, VAR_7->type);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_7->type == VAR_2 &&
     VAR_11->mode == VAR_1 && !VAR_11->hdr_parsed)
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_11, VAR_7->type);
 FUNC_0(VAR_9 == ((void*)0));

 VAR_10->width = VAR_9->w;
 VAR_10->height = VAR_9->h;
 VAR_10->field = VAR_3;
 VAR_10->pixelformat = VAR_9->fmt->fourcc;
 VAR_10->bytesperline = 0;
 if (VAR_9->fmt->fourcc != VAR_4) {
  u32 VAR_12 = VAR_9->w;

  if (VAR_9->fmt->colplanes == 1)
   VAR_12 = (VAR_12 * VAR_9->fmt->depth) >> 3;
  VAR_10->bytesperline = VAR_12;
 }
 VAR_10->sizeimage = VAR_9->size;

 return 0;
}
