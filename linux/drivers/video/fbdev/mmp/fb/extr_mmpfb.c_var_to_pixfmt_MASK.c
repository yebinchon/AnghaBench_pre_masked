
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {scalar_t__ length; int offset; } ;
struct TYPE_5__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ red; TYPE_2__ transp; TYPE_1__ green; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_17)
{



 if (VAR_17->bits_per_pixel == 8)
  return VAR_5;




 if (VAR_17->bits_per_pixel == 16 && VAR_17->red.length == 8 &&
   VAR_17->green.length == 4 && VAR_17->blue.length == 4) {
  if (VAR_17->green.offset >= VAR_17->blue.offset)
   return VAR_13;
  else
   return VAR_16;
 }




 if (VAR_17->bits_per_pixel == 12 && VAR_17->red.length == 8 &&
   VAR_17->green.length == 2 && VAR_17->blue.length == 2) {
  if (VAR_17->green.offset >= VAR_17->blue.offset)
   return VAR_12;
  else
   return VAR_15;
 }




 if (VAR_17->bits_per_pixel == 16 && VAR_17->red.length == 16 &&
   VAR_17->green.length == 16 && VAR_17->blue.length == 16) {
  if (VAR_17->red.offset == 0)
   return VAR_14;
  else if (VAR_17->green.offset >= VAR_17->blue.offset)
   return VAR_10;
  else
   return VAR_11;
 }




 if (VAR_17->bits_per_pixel == 16 && VAR_17->red.length <= 5 &&
   VAR_17->green.length <= 6 && VAR_17->blue.length <= 5) {
  if (VAR_17->transp.length == 0) {
   if (VAR_17->red.offset >= VAR_17->blue.offset)
    return VAR_6;
   else
    return VAR_1;
  }
 }




 if (VAR_17->bits_per_pixel <= 32 && VAR_17->red.length <= 8 &&
   VAR_17->green.length <= 8 && VAR_17->blue.length <= 8) {
  if (VAR_17->bits_per_pixel == 24 && VAR_17->transp.length == 0) {
   if (VAR_17->red.offset >= VAR_17->blue.offset)
    return VAR_7;
   else
    return VAR_2;
  }

  if (VAR_17->bits_per_pixel == 32 && VAR_17->transp.offset == 24) {
   if (VAR_17->red.offset >= VAR_17->blue.offset)
    return VAR_9;
   else
    return VAR_4;
  } else {
   if (VAR_17->red.offset >= VAR_17->blue.offset)
    return VAR_8;
   else
    return VAR_3;
  }


 }

 return -VAR_0;
}
