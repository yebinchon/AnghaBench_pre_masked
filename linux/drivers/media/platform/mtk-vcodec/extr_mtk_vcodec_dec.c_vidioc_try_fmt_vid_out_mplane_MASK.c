
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format_mplane {TYPE_1__* plane_fmt; } ;
struct TYPE_6__ {int pixelformat; } ;
struct TYPE_7__ {TYPE_2__ pix; struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct mtk_video_fmt {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int fourcc; } ;
struct TYPE_5__ {scalar_t__ sizeimage; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 struct mtk_video_fmt* FUNC_1 (struct v4l2_format*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (struct v4l2_format*,struct mtk_video_fmt const*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct v4l2_pix_format_mplane *VAR_6 = &VAR_5->fmt.pix_mp;
 const struct mtk_video_fmt *VAR_7;

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  VAR_5->fmt.pix.pixelformat = VAR_2[VAR_1].fourcc;
  VAR_7 = FUNC_1(VAR_5);
 }

 if (VAR_6->plane_fmt[0].sizeimage == 0) {
  FUNC_0("sizeimage of output format must be given");
  return -VAR_0;
 }

 return FUNC_2(VAR_5, VAR_7);
}
