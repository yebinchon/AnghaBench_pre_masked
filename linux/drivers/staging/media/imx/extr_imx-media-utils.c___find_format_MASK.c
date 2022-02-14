
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_media_pixfmt {int* codes; int fourcc; scalar_t__ bayer; } ;



__attribute__((used)) static const
struct imx_media_pixfmt *FUNC_0(u32 VAR_0,
           u32 VAR_1,
           bool VAR_2,
           bool VAR_3,
           const struct imx_media_pixfmt *VAR_4,
           u32 VAR_5)
{
 const struct imx_media_pixfmt *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = &VAR_4[VAR_7];

  if ((!VAR_2 && !VAR_6->codes[0]) ||
      (!VAR_3 && VAR_6->bayer))
   continue;

  if (VAR_0 && VAR_6->fourcc == VAR_0)
   return VAR_6;

  if (!VAR_1)
   continue;

  for (VAR_8 = 0; VAR_6->codes[VAR_8]; VAR_8++) {
   if (VAR_1 == VAR_6->codes[VAR_8])
    return VAR_6;
  }
 }
 return ((void*)0);
}
