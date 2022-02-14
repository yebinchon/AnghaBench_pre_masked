
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct v4l2_window {int clipcount; int field; TYPE_3__ w; scalar_t__ global_alpha; scalar_t__ chromakey; } ;
struct TYPE_5__ {int width; int height; } ;
struct TYPE_4__ {int * base; } ;
struct saa7134_dev {TYPE_2__ crop_current; int * ovfmt; TYPE_1__ ovbuf; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


__attribute__((used)) static int FUNC_0(struct saa7134_dev *VAR_3, struct v4l2_window *VAR_4, bool VAR_5)
{
 enum v4l2_field VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_5 && (VAR_3->ovbuf.base == ((void*)0) || VAR_3->ovfmt == ((void*)0)))
  return -VAR_0;
 if (VAR_4->w.width < 48)
  VAR_4->w.width = 48;
 if (VAR_4->w.height < 32)
  VAR_4->w.height = 32;
 if (VAR_4->clipcount > 8)
  VAR_4->clipcount = 8;

 VAR_4->chromakey = 0;
 VAR_4->global_alpha = 0;
 VAR_6 = VAR_4->field;
 VAR_7 = VAR_3->crop_current.width;
 VAR_8 = VAR_3->crop_current.height;

 if (VAR_1 == VAR_6) {
  VAR_6 = (VAR_4->w.height > VAR_8/2)
   ? VAR_2
   : 128;
 }
 switch (VAR_6) {
 case 128:
 case 129:
  VAR_8 = VAR_8 / 2;
  break;
 default:
  VAR_6 = VAR_2;
  break;
 }

 VAR_4->field = VAR_6;
 if (VAR_4->w.width > VAR_7)
  VAR_4->w.width = VAR_7;
 if (VAR_4->w.height > VAR_8)
  VAR_4->w.height = VAR_8;
 return 0;
}
