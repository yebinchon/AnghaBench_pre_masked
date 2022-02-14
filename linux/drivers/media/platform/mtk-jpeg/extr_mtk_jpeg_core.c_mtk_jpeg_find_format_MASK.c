
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mtk_jpeg_fmt {scalar_t__ fourcc; unsigned int flags; } ;
struct mtk_jpeg_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct mtk_jpeg_fmt* VAR_4 ;

__attribute__((used)) static struct mtk_jpeg_fmt *FUNC_0(struct mtk_jpeg_ctx *VAR_5,
       u32 VAR_6,
       unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;

 VAR_9 = (VAR_7 == VAR_2) ?
     VAR_1 :
     VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct mtk_jpeg_fmt *VAR_10 = &VAR_4[VAR_8];

  if (VAR_10->fourcc == VAR_6 && VAR_10->flags & VAR_9)
   return VAR_10;
 }

 return ((void*)0);
}
