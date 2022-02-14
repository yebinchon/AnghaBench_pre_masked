
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format_mplane {TYPE_4__* plane_fmt; int num_planes; int pixelformat; void* field; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct s5p_mfc_ctx {int chroma_size; int buf_width; int luma_size; TYPE_3__* src_fmt; scalar_t__ img_height; scalar_t__ img_width; int enc_dst_buf_size; TYPE_2__* dst_fmt; int state; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int sizeimage; int bytesperline; } ;
struct TYPE_7__ {int num_planes; int fourcc; } ;
struct TYPE_6__ {int num_planes; int fourcc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*,scalar_t__,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct s5p_mfc_ctx *VAR_7 = FUNC_0(VAR_5);
 struct v4l2_pix_format_mplane *VAR_8 = &VAR_6->fmt.pix_mp;

 FUNC_1(2, "f->type = %d ctx->state = %d\n", VAR_6->type, VAR_7->state);
 if (VAR_6->type == VAR_1) {

  VAR_8->width = 0;
  VAR_8->height = 0;
  VAR_8->field = VAR_3;
  VAR_8->pixelformat = VAR_7->dst_fmt->fourcc;
  VAR_8->num_planes = VAR_7->dst_fmt->num_planes;

  VAR_8->plane_fmt[0].bytesperline = VAR_7->enc_dst_buf_size;
  VAR_8->plane_fmt[0].sizeimage = VAR_7->enc_dst_buf_size;
 } else if (VAR_6->type == VAR_2) {

  VAR_8->width = VAR_7->img_width;
  VAR_8->height = VAR_7->img_height;

  VAR_8->field = VAR_3;
  VAR_8->pixelformat = VAR_7->src_fmt->fourcc;
  VAR_8->num_planes = VAR_7->src_fmt->num_planes;

  VAR_8->plane_fmt[0].bytesperline = VAR_7->buf_width;
  VAR_8->plane_fmt[0].sizeimage = VAR_7->luma_size;
  VAR_8->plane_fmt[1].bytesperline = VAR_7->buf_width;
  VAR_8->plane_fmt[1].sizeimage = VAR_7->chroma_size;
 } else {
  FUNC_2("invalid buf type\n");
  return -VAR_0;
 }
 return 0;
}
