
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vivid_fmt {int dummy; } ;
struct vivid_dev {int timeperframe_vid_cap; } ;
struct v4l2_frmivalenum {int index; scalar_t__ width; scalar_t__ height; int discrete; void* type; int pixel_format; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 struct vivid_fmt* FUNC_2 (struct vivid_dev*,int ) ;
 int FUNC_3 (struct vivid_dev*) ;
 int * VAR_8 ;
 TYPE_1__* VAR_9 ;

int FUNC_4(struct file *VAR_10, void *VAR_11,
          struct v4l2_frmivalenum *VAR_12)
{
 struct vivid_dev *VAR_13 = FUNC_1(VAR_10);
 const struct vivid_fmt *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(VAR_13, VAR_12->pixel_format);
 if (!VAR_14)
  return -VAR_0;

 if (!FUNC_3(VAR_13)) {
  if (VAR_12->index)
   return -VAR_0;
  if (VAR_12->width < VAR_5 || VAR_12->width > VAR_2 * VAR_3)
   return -VAR_0;
  if (VAR_12->height < VAR_4 || VAR_12->height > VAR_1 * VAR_3)
   return -VAR_0;
  VAR_12->type = VAR_6;
  VAR_12->discrete = VAR_13->timeperframe_vid_cap;
  return 0;
 }

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9); VAR_15++)
  if (VAR_12->width == VAR_9[VAR_15].width &&
      VAR_12->height == VAR_9[VAR_15].height)
   break;
 if (VAR_15 == FUNC_0(VAR_9))
  return -VAR_0;
 if (VAR_12->index >= 2 * (VAR_7 - VAR_15))
  return -VAR_0;
 VAR_12->type = VAR_6;
 VAR_12->discrete = VAR_8[VAR_12->index];
 return 0;
}
