
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct csc_data {int dummy; } ;
struct colorspace_coeffs {int* sd; int* hd; } ;
typedef enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct colorspace_coeffs* VAR_4 ;

void FUNC_0(struct csc_data *VAR_5, u32 *VAR_6,
  enum v4l2_colorspace VAR_7,
  enum v4l2_colorspace VAR_8)
{
 u32 *VAR_9 = VAR_6 + 5;
 u32 *VAR_10 = VAR_6;
 struct colorspace_coeffs *VAR_11;
 u16 *VAR_12, *VAR_13;
 enum v4l2_colorspace VAR_14;
 int VAR_15 = 0;






 if (VAR_8 == VAR_3 &&
   (VAR_7 == VAR_2 ||
   VAR_7 == VAR_1)) {

  VAR_15 = 1;
  VAR_14 = VAR_7;
 } else if ((VAR_8 == VAR_2 ||
   VAR_8 == VAR_1) &&
   VAR_7 == VAR_3) {

  VAR_15 = 3;
  VAR_14 = VAR_8;
 } else {
  *VAR_9 |= VAR_0;
  return;
 }

 VAR_11 = &VAR_4[VAR_15];


 if (VAR_14 == VAR_2)
  VAR_12 = VAR_11->sd;
 else
  VAR_12 = VAR_11->hd;

 VAR_13 = VAR_12 + 12;

 for (; VAR_12 < VAR_13; VAR_12 += 2)
  *VAR_10++ = (*(VAR_12 + 1) << 16) | *VAR_12;
}
