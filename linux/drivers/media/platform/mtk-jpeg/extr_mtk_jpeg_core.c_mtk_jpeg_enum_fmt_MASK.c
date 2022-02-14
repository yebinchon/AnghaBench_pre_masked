
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct mtk_jpeg_fmt {int flags; int fourcc; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtk_jpeg_fmt *VAR_1, int VAR_2,
        struct v4l2_fmtdesc *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (VAR_1[VAR_5].flags & VAR_4) {
   if (VAR_6 == VAR_3->index)
    break;
   ++VAR_6;
  }
 }

 if (VAR_5 >= VAR_2)
  return -VAR_0;

 VAR_3->pixelformat = VAR_1[VAR_5].fourcc;

 return 0;
}
