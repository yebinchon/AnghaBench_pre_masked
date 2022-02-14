
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int flags; int pixelformat; } ;
struct mtk_video_fmt {scalar_t__ type; int flags; int fourcc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mtk_video_fmt* VAR_4 ;

__attribute__((used)) static int FUNC_0(struct v4l2_fmtdesc *VAR_5, bool VAR_6)
{
 const struct mtk_video_fmt *VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_6 && (VAR_4[VAR_8].type != VAR_1))
   continue;
  if (!VAR_6 &&
   (VAR_4[VAR_8].type != VAR_2))
   continue;

  if (VAR_9 == VAR_5->index)
   break;
  ++VAR_9;
 }

 if (VAR_8 == VAR_3)
  return -VAR_0;

 VAR_7 = &VAR_4[VAR_8];
 VAR_5->pixelformat = VAR_7->fourcc;
 VAR_5->flags = VAR_7->flags;

 return 0;
}
