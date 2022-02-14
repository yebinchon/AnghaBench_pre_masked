
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_plane_pix_format {int sizeimage; int bytesperline; int reserved; } ;
struct v4l2_pix_format_mplane {scalar_t__ pixelformat; int num_planes; scalar_t__ field; void* height; void* width; int reserved; struct v4l2_plane_pix_format* plane_fmt; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct amvdec_session {struct amvdec_format* fmt_out; TYPE_3__* core; } ;
struct amvdec_format {scalar_t__* pixfmts_cap; int max_height; int max_width; } ;
struct TYPE_6__ {TYPE_2__* platform; } ;
struct TYPE_5__ {struct amvdec_format* formats; } ;


 int FUNC_0 (void*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (void*,int ,int ) ;
 struct amvdec_format* FUNC_2 (struct amvdec_format const*,int ,scalar_t__) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct amvdec_format const*,scalar_t__) ;

__attribute__((used)) static const struct amvdec_format *
FUNC_6(struct amvdec_session *VAR_7, u32 VAR_8,
      struct v4l2_format *VAR_9)
{
 struct v4l2_pix_format_mplane *VAR_10 = &VAR_9->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_11 = VAR_10->plane_fmt;
 const struct amvdec_format *VAR_12 = VAR_7->core->platform->formats;
 const struct amvdec_format *VAR_13;

 FUNC_4(VAR_11[0].reserved, 0, sizeof(VAR_11[0].reserved));
 FUNC_4(VAR_10->reserved, 0, sizeof(VAR_10->reserved));

 if (VAR_9->type == VAR_1) {
  VAR_13 = FUNC_2(VAR_12, VAR_8, VAR_10->pixelformat);
  if (!VAR_13) {
   VAR_10->pixelformat = VAR_4;
   VAR_13 = FUNC_2(VAR_12, VAR_8, VAR_10->pixelformat);
  }

  VAR_11[0].sizeimage =
   FUNC_3(VAR_10->width, VAR_10->height);
  VAR_11[0].bytesperline = 0;
  VAR_10->num_planes = 1;
 } else if (VAR_9->type == VAR_0) {
  VAR_13 = VAR_7->fmt_out;
  if (!FUNC_5(VAR_13, VAR_10->pixelformat))
   VAR_10->pixelformat = VAR_13->pixfmts_cap[0];

  FUNC_4(VAR_11[1].reserved, 0, sizeof(VAR_11[1].reserved));
  if (VAR_10->pixelformat == VAR_5) {
   VAR_11[0].sizeimage =
    FUNC_3(VAR_10->width, VAR_10->height);
   VAR_11[0].bytesperline = FUNC_0(VAR_10->width, 64);

   VAR_11[1].sizeimage =
         FUNC_3(VAR_10->width, VAR_10->height) / 2;
   VAR_11[1].bytesperline = FUNC_0(VAR_10->width, 64);
   VAR_10->num_planes = 2;
  } else if (VAR_10->pixelformat == VAR_6) {
   VAR_11[0].sizeimage =
    FUNC_3(VAR_10->width, VAR_10->height);
   VAR_11[0].bytesperline = FUNC_0(VAR_10->width, 64);

   VAR_11[1].sizeimage =
         FUNC_3(VAR_10->width, VAR_10->height) / 4;
   VAR_11[1].bytesperline = FUNC_0(VAR_10->width, 64) / 2;

   VAR_11[2].sizeimage =
         FUNC_3(VAR_10->width, VAR_10->height) / 4;
   VAR_11[2].bytesperline = FUNC_0(VAR_10->width, 64) / 2;
   VAR_10->num_planes = 3;
  }
 } else {
  return ((void*)0);
 }

 VAR_10->width = FUNC_1(VAR_10->width, (u32)256, VAR_13->max_width);
 VAR_10->height = FUNC_1(VAR_10->height, (u32)144, VAR_13->max_height);

 if (VAR_10->field == VAR_2)
  VAR_10->field = VAR_3;

 return VAR_13;
}
