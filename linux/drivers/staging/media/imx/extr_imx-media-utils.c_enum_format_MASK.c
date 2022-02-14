
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct imx_media_pixfmt {size_t fourcc; size_t* codes; int bayer; } ;
typedef enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;





 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct imx_media_pixfmt* VAR_5 ;
 struct imx_media_pixfmt* VAR_6 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_7, u32 *VAR_8, u32 VAR_9,
         enum codespace_sel VAR_10,
         bool VAR_11,
         bool VAR_12)
{
 const struct imx_media_pixfmt *VAR_13;
 u32 VAR_14 = VAR_2;
 u32 VAR_15 = VAR_1;
 u32 VAR_16 = VAR_4;
 u32 VAR_17 = VAR_3;

 switch (VAR_10) {
 case 128:
  if (VAR_9 >= VAR_16 ||
      (!VAR_11 && VAR_9 >= VAR_14))
   return -VAR_0;
  VAR_13 = &VAR_6[VAR_9];
  break;
 case 129:
  if (VAR_9 >= VAR_17 ||
      (!VAR_11 && VAR_9 >= VAR_15))
   return -VAR_0;
  VAR_13 = &VAR_5[VAR_9];
  if (!VAR_12 && VAR_13->bayer)
   return -VAR_0;
  break;
 case 130:
  if (!VAR_11) {
   if (VAR_9 >= VAR_14) {
    VAR_9 -= VAR_14;
    if (VAR_9 >= VAR_15)
     return -VAR_0;
    VAR_13 = &VAR_5[VAR_9];
    if (!VAR_12 && VAR_13->bayer)
     return -VAR_0;
   } else {
    VAR_13 = &VAR_6[VAR_9];
   }
  } else {
   if (VAR_9 >= VAR_16 + VAR_17)
    return -VAR_0;
   if (VAR_9 >= VAR_16) {
    VAR_13 = &VAR_5[VAR_9 - VAR_16];
    if (!VAR_12 && VAR_13->bayer)
     return -VAR_0;
   } else {
    VAR_13 = &VAR_6[VAR_9];
   }
  }
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7)
  *VAR_7 = VAR_13->fourcc;
 if (VAR_8)
  *VAR_8 = VAR_13->codes[0];

 return 0;
}
