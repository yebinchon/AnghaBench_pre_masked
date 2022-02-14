
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct s5p_jpeg_fmt {int flags; int fourcc; } ;
struct s5p_jpeg_ctx {TYPE_2__* jpeg; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {unsigned int fmt_ver_flag; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct s5p_jpeg_ctx *VAR_1,
      struct s5p_jpeg_fmt *VAR_2, int VAR_3,
      struct v4l2_fmtdesc *VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7 = 0;
 unsigned int VAR_8 = VAR_1->jpeg->variant->fmt_ver_flag;

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  if (VAR_2[VAR_6].flags & VAR_5 &&
      VAR_2[VAR_6].flags & VAR_8) {

   if (VAR_7 == VAR_4->index)
    break;



   ++VAR_7;
  }
 }


 if (VAR_6 >= VAR_3)
  return -VAR_0;

 VAR_4->pixelformat = VAR_2[VAR_6].fourcc;

 return 0;
}
