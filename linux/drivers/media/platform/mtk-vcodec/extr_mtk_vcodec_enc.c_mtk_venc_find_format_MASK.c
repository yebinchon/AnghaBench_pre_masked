
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct mtk_video_fmt {scalar_t__ fourcc; } ;


 unsigned int VAR_0 ;
 struct mtk_video_fmt* VAR_1 ;

__attribute__((used)) static const struct mtk_video_fmt *FUNC_0(struct v4l2_format *VAR_2)
{
 const struct mtk_video_fmt *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_3->fourcc == VAR_2->fmt.pix.pixelformat)
   return VAR_3;
 }

 return ((void*)0);
}
