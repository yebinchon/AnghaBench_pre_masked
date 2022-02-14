
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_media_pixfmt {int* codes; } ;
typedef enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;





 int VAR_0 ;
 int VAR_1 ;
 struct imx_media_pixfmt* VAR_2 ;
 struct imx_media_pixfmt* VAR_3 ;

const struct imx_media_pixfmt *
FUNC_0(u32 VAR_4, enum codespace_sel VAR_5)
{
 const struct imx_media_pixfmt *VAR_6, *VAR_7, *VAR_8 = ((void*)0);
 u32 VAR_9;
 int VAR_10, VAR_11;

 switch (VAR_5) {
 case 128:
  VAR_9 = VAR_1;
  VAR_6 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_0;
  VAR_6 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_1 + VAR_0;
  VAR_6 = VAR_3;
  break;
 default:
  return ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  if (VAR_5 == 130 && VAR_10 >= VAR_1)
   VAR_7 = &VAR_2[VAR_10 - VAR_1];
  else
   VAR_7 = &VAR_6[VAR_10];

  for (VAR_11 = 0; VAR_4 && VAR_7->codes[VAR_11]; VAR_11++) {
   if (VAR_4 == VAR_7->codes[VAR_11]) {
    VAR_8 = VAR_7;
    goto out;
   }
  }
 }

out:
 return VAR_8;
}
