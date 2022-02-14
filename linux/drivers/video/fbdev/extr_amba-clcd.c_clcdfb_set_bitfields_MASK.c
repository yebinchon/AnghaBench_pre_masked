
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_9__ {int length; scalar_t__ offset; scalar_t__ msb_right; } ;
struct TYPE_8__ {int length; scalar_t__ offset; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_5__ green; TYPE_4__ blue; TYPE_3__ red; int transp; } ;
struct clcd_fb {TYPE_2__* panel; TYPE_1__* board; } ;
struct TYPE_7__ {int caps; int cntl; } ;
struct TYPE_6__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct clcd_fb *VAR_9, struct fb_var_screeninfo *VAR_10)
{
 u32 VAR_11;
 int VAR_12 = 0;

 if (VAR_9->panel->caps && VAR_9->board->caps)
  VAR_11 = VAR_9->panel->caps & VAR_9->board->caps;
 else {

  VAR_11 = VAR_9->panel->cntl & VAR_6 ?
   VAR_4 : VAR_5;

  VAR_11 &= ~VAR_0;
 }


 if (!(VAR_9->panel->cntl & VAR_7))
  VAR_11 &= ~VAR_3;

 FUNC_0(&VAR_10->transp, 0, sizeof(VAR_10->transp));

 VAR_10->red.msb_right = 0;
 VAR_10->green.msb_right = 0;
 VAR_10->blue.msb_right = 0;

 switch (VAR_10->bits_per_pixel) {
 case 1:
 case 2:
 case 4:
 case 8:

  VAR_11 &= VAR_1;
  if (!VAR_11) {
   VAR_12 = -VAR_8;
   break;
  }

  VAR_10->red.length = VAR_10->bits_per_pixel;
  VAR_10->red.offset = 0;
  VAR_10->green.length = VAR_10->bits_per_pixel;
  VAR_10->green.offset = 0;
  VAR_10->blue.length = VAR_10->bits_per_pixel;
  VAR_10->blue.offset = 0;
  break;

 case 16:

  if (!(VAR_11 & (VAR_0 | VAR_1 | VAR_2))) {
   VAR_12 = -VAR_8;
   break;
  }





  if (VAR_10->green.length == 4 && VAR_11 & VAR_0)
   VAR_11 &= VAR_0;
  if (VAR_10->green.length == 5 && VAR_11 & VAR_1)
   VAR_11 &= VAR_1;
  else if (VAR_10->green.length == 6 && VAR_11 & VAR_2)
   VAR_11 &= VAR_2;
  else {




   if (VAR_11 & VAR_2) {
    VAR_10->green.length = 6;
    VAR_11 &= VAR_2;
   } else if (VAR_11 & VAR_1) {
    VAR_10->green.length = 5;
    VAR_11 &= VAR_1;
   } else {
    VAR_10->green.length = 4;
    VAR_11 &= VAR_0;
   }
  }

  if (VAR_10->green.length >= 5) {
   VAR_10->red.length = 5;
   VAR_10->blue.length = 5;
  } else {
   VAR_10->red.length = 4;
   VAR_10->blue.length = 4;
  }
  break;
 case 32:

  VAR_11 &= VAR_3;
  if (!VAR_11) {
   VAR_12 = -VAR_8;
   break;
  }

  VAR_10->red.length = 8;
  VAR_10->green.length = 8;
  VAR_10->blue.length = 8;
  break;
 default:
  VAR_12 = -VAR_8;
  break;
 }






 if (VAR_12 == 0 && VAR_10->bits_per_pixel >= 16) {
  bool VAR_13, VAR_14;

  VAR_13 = VAR_11 & VAR_4 && VAR_10->blue.offset == 0;
  VAR_14 = VAR_11 & VAR_5 && VAR_10->red.offset == 0;

  if (!VAR_13 && !VAR_14)





   VAR_13 = VAR_11 & VAR_4;

  if (VAR_13) {
   VAR_10->blue.offset = 0;
   VAR_10->green.offset = VAR_10->blue.offset + VAR_10->blue.length;
   VAR_10->red.offset = VAR_10->green.offset + VAR_10->green.length;
  } else {
   VAR_10->red.offset = 0;
   VAR_10->green.offset = VAR_10->red.offset + VAR_10->red.length;
   VAR_10->blue.offset = VAR_10->green.offset + VAR_10->green.length;
  }
 }

 return VAR_12;
}
