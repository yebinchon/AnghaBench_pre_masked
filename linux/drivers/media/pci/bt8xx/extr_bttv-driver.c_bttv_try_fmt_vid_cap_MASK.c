
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int field; int height; int width; int colorspace; int pixelformat; } ;
struct TYPE_7__ {TYPE_4__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct bttv_format {int flags; } ;
struct bttv_fh {int do_crop; struct bttv* btv; } ;
struct bttv {TYPE_2__* crop; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef int __s32 ;
struct TYPE_5__ {int height; } ;
struct TYPE_6__ {TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct bttv_format const*,unsigned int*,unsigned int*) ;
 struct bttv_format* FUNC_1 (int ) ;
 int FUNC_2 (struct bttv_fh*,int*,int*,int,unsigned int,unsigned int,int,int ) ;
 int FUNC_3 (TYPE_4__*,struct bttv_format const*,int,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
      struct v4l2_format *VAR_5)
{
 const struct bttv_format *VAR_6;
 struct bttv_fh *VAR_7 = VAR_4;
 struct bttv *VAR_8 = VAR_7->btv;
 enum v4l2_field VAR_9;
 __s32 VAR_10, VAR_11;
 __s32 VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 VAR_6 = FUNC_1(VAR_5->fmt.pix.pixelformat);
 if (((void*)0) == VAR_6)
  return -VAR_0;

 VAR_9 = VAR_5->fmt.pix.field;

 switch (VAR_9) {
 case 128:
 case 132:
 case 133:
 case 131:
  break;
 case 130:
 case 129:
  if (!(VAR_6->flags & VAR_1)) {
   VAR_9 = 129;
   break;
  }

 default:
  VAR_12 = VAR_8->crop[!!VAR_7->do_crop].rect.height >> 1;
  VAR_9 = (VAR_5->fmt.pix.height > VAR_12)
   ? 131
   : 132;
  break;
 }

 VAR_10 = VAR_5->fmt.pix.width;
 VAR_11 = VAR_5->fmt.pix.height;

 FUNC_0(VAR_6, &VAR_13, &VAR_14);
 VAR_15 = FUNC_2(VAR_7, &VAR_10, &VAR_11, VAR_9,
          VAR_13, VAR_14,
                            1,
                            0);
 if (0 != VAR_15)
  return VAR_15;


 VAR_5->fmt.pix.field = VAR_9;
 FUNC_3(&VAR_5->fmt.pix, VAR_6, VAR_10, VAR_11);
 VAR_5->fmt.pix.colorspace = VAR_2;

 return 0;
}
