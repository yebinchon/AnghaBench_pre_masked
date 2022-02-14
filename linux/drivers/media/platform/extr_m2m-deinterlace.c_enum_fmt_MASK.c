
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct deinterlace_fmt {int types; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct deinterlace_fmt* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_fmtdesc *VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6;
 struct deinterlace_fmt *VAR_7;

 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (VAR_2[VAR_5].types & VAR_4) {

   if (VAR_6 == VAR_3->index)
    break;


   ++VAR_6;
  }
 }

 if (VAR_5 < VAR_1) {

  VAR_7 = &VAR_2[VAR_5];
  VAR_3->pixelformat = VAR_7->fourcc;
  return 0;
 }


 return -VAR_0;
}
