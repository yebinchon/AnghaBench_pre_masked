
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct mtk_video_fmt {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int fourcc; } ;


 size_t VAR_0 ;
 struct mtk_video_fmt* FUNC_0 (struct v4l2_format*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct v4l2_format*,struct mtk_video_fmt const*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 const struct mtk_video_fmt *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5) {
  VAR_4->fmt.pix.pixelformat = VAR_1[VAR_0].fourcc;
  VAR_5 = FUNC_0(VAR_4);
 }

 return FUNC_1(VAR_4, VAR_5);
}
