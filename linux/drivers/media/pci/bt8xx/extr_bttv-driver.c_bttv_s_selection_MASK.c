
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int left; int width; int top; int height; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; TYPE_2__ r; } ;
struct v4l2_rect {int left; int width; int top; int height; } ;
struct file {int dummy; } ;
struct bttv_fh {int do_crop; scalar_t__ width; scalar_t__ height; struct bttv* btv; } ;
struct bttv_crop {scalar_t__ min_scaled_width; scalar_t__ max_scaled_width; scalar_t__ min_scaled_height; scalar_t__ max_scaled_height; TYPE_2__ rect; } ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; } ;
struct bttv {size_t tvnorm; TYPE_3__ init; struct bttv_crop* crop; int vbi_end; } ;
typedef int __s32 ;
struct TYPE_5__ {struct v4l2_rect bounds; } ;
struct TYPE_8__ {TYPE_1__ cropcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bttv_crop*) ;
 TYPE_4__* VAR_7 ;
 void* FUNC_1 (int ,int,int,int) ;
 scalar_t__ FUNC_2 (struct bttv*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_9, void *VAR_10, struct v4l2_selection *VAR_11)
{
 struct bttv_fh *VAR_12 = VAR_10;
 struct bttv *VAR_13 = VAR_12->btv;
 const struct v4l2_rect *VAR_14;
 int VAR_15;
 struct bttv_crop VAR_16;
 __s32 VAR_17;
 __s32 VAR_18;
 __s32 VAR_19;
 __s32 VAR_20;

 if (VAR_11->type != VAR_3 &&
     VAR_11->type != VAR_4)
  return -VAR_1;

 if (VAR_11->target != VAR_5)
  return -VAR_1;




 VAR_15 = -VAR_0;

 if (FUNC_2(VAR_12->btv, VAR_6)) {
  return VAR_15;
 }

 VAR_14 = &VAR_7[VAR_13->tvnorm].cropcap.bounds;

 VAR_17 = VAR_14->left;
 VAR_19 = VAR_17 + VAR_14->width;
 VAR_20 = VAR_14->top + VAR_14->height;

 VAR_18 = FUNC_3(VAR_14->top, VAR_13->vbi_end);
 if (VAR_18 + 32 >= VAR_20) {
  return VAR_15;
 }


 VAR_16.rect.left = FUNC_1(VAR_8, VAR_11->r.left, VAR_17, VAR_19 - 48);
 VAR_16.rect.left = FUNC_4(VAR_16.rect.left, (__s32) VAR_2);

 VAR_16.rect.width = FUNC_1(VAR_8, VAR_11->r.width,
        48, VAR_19 - VAR_16.rect.left);

 VAR_16.rect.top = FUNC_1(VAR_8, VAR_11->r.top, VAR_18, VAR_20 - 32);

 VAR_16.rect.top = (VAR_16.rect.top + 1) & ~1;

 VAR_16.rect.height = FUNC_1(VAR_8, VAR_11->r.height,
         32, VAR_20 - VAR_16.rect.top);
 VAR_16.rect.height = (VAR_16.rect.height + 1) & ~1;

 FUNC_0(&VAR_16);

 VAR_11->r = VAR_16.rect;

 VAR_13->crop[1] = VAR_16;

 VAR_12->do_crop = 1;

 if (VAR_12->width < VAR_16.min_scaled_width) {
  VAR_12->width = VAR_16.min_scaled_width;
  VAR_13->init.width = VAR_16.min_scaled_width;
 } else if (VAR_12->width > VAR_16.max_scaled_width) {
  VAR_12->width = VAR_16.max_scaled_width;
  VAR_13->init.width = VAR_16.max_scaled_width;
 }

 if (VAR_12->height < VAR_16.min_scaled_height) {
  VAR_12->height = VAR_16.min_scaled_height;
  VAR_13->init.height = VAR_16.min_scaled_height;
 } else if (VAR_12->height > VAR_16.max_scaled_height) {
  VAR_12->height = VAR_16.max_scaled_height;
  VAR_13->init.height = VAR_16.max_scaled_height;
 }

 return 0;
}
