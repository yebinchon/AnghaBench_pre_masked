
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int height; scalar_t__ field; TYPE_1__* plane_fmt; } ;
struct fdp1_q_data {int vsize; int stride_y; int stride_c; struct v4l2_pix_format_mplane format; struct fdp1_fmt const* fmt; } ;
struct fdp1_fmt {int dummy; } ;
struct fdp1_ctx {struct fdp1_q_data cap_q; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int bytesperline; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct fdp1_ctx*,struct fdp1_fmt const**,struct v4l2_pix_format_mplane*) ;
 int FUNC_1 (struct fdp1_ctx*,struct fdp1_fmt const**,struct v4l2_pix_format_mplane*) ;
 struct fdp1_q_data* FUNC_2 (struct fdp1_ctx*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct fdp1_ctx *VAR_6,
       struct v4l2_pix_format_mplane *VAR_7,
       enum v4l2_buf_type VAR_8)
{
 struct fdp1_q_data *VAR_9 = FUNC_2(VAR_6, VAR_8);
 const struct fdp1_fmt *VAR_10;

 if (VAR_8 == VAR_0)
  FUNC_1(VAR_6, &VAR_10, VAR_7);
 else
  FUNC_0(VAR_6, &VAR_10, VAR_7);

 VAR_9->fmt = VAR_10;
 VAR_9->format = *VAR_7;

 VAR_9->vsize = VAR_7->height;
 if (VAR_7->field != VAR_5)
  VAR_9->vsize /= 2;

 VAR_9->stride_y = VAR_7->plane_fmt[0].bytesperline;
 VAR_9->stride_c = VAR_7->plane_fmt[1].bytesperline;


 if (VAR_7->field == VAR_2 ||
     VAR_7->field == VAR_4 ||
     VAR_7->field == VAR_3) {
  VAR_9->stride_y *= 2;
  VAR_9->stride_c *= 2;
 }


 if (VAR_8 == VAR_0) {
  struct fdp1_q_data *VAR_11 = &VAR_6->cap_q;





  VAR_11->format = VAR_9->format;
  FUNC_3(VAR_11->format.plane_fmt, 0,
         sizeof(VAR_11->format.plane_fmt));

  VAR_11->format.field = VAR_5;
  if (VAR_7->field == VAR_1)
   VAR_11->format.height *= 2;

  FUNC_0(VAR_6, &VAR_11->fmt, &VAR_11->format);

  VAR_11->vsize = VAR_11->format.height;
  VAR_11->stride_y = VAR_11->format.plane_fmt[0].bytesperline;
  VAR_11->stride_c = VAR_11->format.plane_fmt[1].bytesperline;
 }
}
