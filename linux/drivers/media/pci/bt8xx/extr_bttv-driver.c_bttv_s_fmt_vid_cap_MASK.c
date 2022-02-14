
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int field; int height; int width; int pixelformat; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct file {int dummy; } ;
struct bttv_format {int dummy; } ;
struct TYPE_5__ {int field; int last; } ;
struct bttv_fh {int height; int width; TYPE_1__ cap; struct bttv_format const* fmt; struct bttv* btv; } ;
struct TYPE_6__ {int height; int width; struct bttv_format const* fmt; } ;
struct bttv {TYPE_2__ init; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct bttv_format const*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct bttv_fh*,int ) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 struct bttv_format* FUNC_3 (int ) ;
 int FUNC_4 (struct bttv_fh*,int *,int *,int,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 int VAR_4;
 const struct bttv_format *VAR_5;
 struct bttv_fh *VAR_6 = VAR_2;
 struct bttv *VAR_7 = VAR_6->btv;
 __s32 VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 enum v4l2_field VAR_12;

 VAR_4 = FUNC_1(VAR_6, VAR_3->type);
 if (0 != VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (0 != VAR_4)
  return VAR_4;

 VAR_8 = VAR_3->fmt.pix.width;
 VAR_9 = VAR_3->fmt.pix.height;
 VAR_12 = VAR_3->fmt.pix.field;

 VAR_5 = FUNC_3(VAR_3->fmt.pix.pixelformat);
 FUNC_0(VAR_5, &VAR_10, &VAR_11);
 VAR_4 = FUNC_4(VAR_6, &VAR_8, &VAR_9, VAR_3->fmt.pix.field,
          VAR_10, VAR_11,
                            1,
                            1);
 if (0 != VAR_4)
  return VAR_4;

 VAR_3->fmt.pix.field = VAR_12;


 VAR_6->fmt = VAR_5;
 VAR_6->cap.field = VAR_3->fmt.pix.field;
 VAR_6->cap.last = VAR_0;
 VAR_6->width = VAR_3->fmt.pix.width;
 VAR_6->height = VAR_3->fmt.pix.height;
 VAR_7->init.fmt = VAR_5;
 VAR_7->init.width = VAR_3->fmt.pix.width;
 VAR_7->init.height = VAR_3->fmt.pix.height;

 return 0;
}
