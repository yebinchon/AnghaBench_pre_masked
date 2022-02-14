
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vicodec_ctx {scalar_t__ is_stateless; } ;
struct v4l2_plane_pix_format {int bytesperline; int sizeimage; int reserved; } ;
struct v4l2_pix_format_mplane {int num_planes; int width; int height; int reserved; int pixelformat; void* field; struct v4l2_plane_pix_format* plane_fmt; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int pixelformat; void* field; } ;
struct v4l2_fwht_pixfmt_info {int bytesperline_mult; int sizeimage_mult; int sizeimage_div; int height_div; int width_div; } ;
struct TYPE_2__ {struct v4l2_pix_format_mplane pix_mp; struct v4l2_pix_format pix; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct fwht_cframe_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int,int ,int ) ;
 struct v4l2_fwht_pixfmt_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct v4l2_fwht_pixfmt_info VAR_8 ;
 struct v4l2_fwht_pixfmt_info VAR_9 ;
 void* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct vicodec_ctx *VAR_10, struct v4l2_format *VAR_11)
{
 struct v4l2_pix_format_mplane *VAR_12;
 struct v4l2_pix_format *VAR_13;
 struct v4l2_plane_pix_format *VAR_14;
 const struct v4l2_fwht_pixfmt_info *VAR_15 = VAR_10->is_stateless ?
  &VAR_9 : &VAR_8;

 switch (VAR_11->type) {
 case 131:
 case 129:
  VAR_13 = &VAR_11->fmt.pix;
  if (VAR_13->pixelformat != VAR_6 &&
      VAR_13->pixelformat != VAR_7)
   VAR_15 = FUNC_1(VAR_13->pixelformat);

  VAR_13->width = FUNC_0(VAR_13->width, VAR_4, VAR_2);
  VAR_13->width = FUNC_3(VAR_13->width, VAR_15->width_div);

  VAR_13->height = FUNC_0(VAR_13->height, VAR_3, VAR_1);
  VAR_13->height = FUNC_3(VAR_13->height, VAR_15->height_div);

  VAR_13->field = VAR_5;
  VAR_13->bytesperline =
   VAR_13->width * VAR_15->bytesperline_mult;
  VAR_13->sizeimage = VAR_13->width * VAR_13->height *
   VAR_15->sizeimage_mult / VAR_15->sizeimage_div;
  if (VAR_13->pixelformat == VAR_6)
   VAR_13->sizeimage += sizeof(struct fwht_cframe_hdr);
  break;
 case 130:
 case 128:
  VAR_12 = &VAR_11->fmt.pix_mp;
  VAR_14 = VAR_12->plane_fmt;
  if (VAR_12->pixelformat != VAR_6 &&
      VAR_12->pixelformat != VAR_7)
   VAR_15 = FUNC_1(VAR_12->pixelformat);
  VAR_12->num_planes = 1;

  VAR_12->width = FUNC_0(VAR_12->width, VAR_4, VAR_2);
  VAR_12->width = FUNC_3(VAR_12->width, VAR_15->width_div);

  VAR_12->height = FUNC_0(VAR_12->height, VAR_3, VAR_1);
  VAR_12->height = FUNC_3(VAR_12->height,
            VAR_15->height_div);

  VAR_12->field = VAR_5;
  VAR_14->bytesperline =
   VAR_12->width * VAR_15->bytesperline_mult;
  VAR_14->sizeimage = VAR_12->width * VAR_12->height *
   VAR_15->sizeimage_mult / VAR_15->sizeimage_div;
  if (VAR_12->pixelformat == VAR_6)
   VAR_14->sizeimage += sizeof(struct fwht_cframe_hdr);
  FUNC_2(VAR_12->reserved, 0, sizeof(VAR_12->reserved));
  FUNC_2(VAR_14->reserved, 0, sizeof(VAR_14->reserved));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
