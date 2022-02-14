
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int reserved; int pixelformat; } ;
struct mtk_video_fmt {scalar_t__ type; int fourcc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 struct mtk_video_fmt* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct v4l2_fmtdesc *VAR_5, bool VAR_6)
{
 const struct mtk_video_fmt *VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
  if (VAR_6 && VAR_4[VAR_8].type != VAR_2)
   continue;
  if (!VAR_6 && VAR_4[VAR_8].type != VAR_1)
   continue;

  if (VAR_9 == VAR_5->index) {
   VAR_7 = &VAR_4[VAR_8];
   VAR_5->pixelformat = VAR_7->fourcc;
   FUNC_0(VAR_5->reserved, 0, sizeof(VAR_5->reserved));
   return 0;
  }
  ++VAR_9;
 }

 return -VAR_0;
}
