
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_rect {scalar_t__ top; scalar_t__ height; scalar_t__ left; scalar_t__ width; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; struct v4l2_rect r; } ;
struct saa7134_dev {int video_vbq; scalar_t__ overlay_owner; struct v4l2_rect crop_current; struct v4l2_rect crop_bounds; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 struct saa7134_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, struct v4l2_selection *VAR_7)
{
 struct saa7134_dev *VAR_8 = FUNC_1(VAR_5);
 struct v4l2_rect *VAR_9 = &VAR_8->crop_bounds;
 struct v4l2_rect *VAR_10 = &VAR_8->crop_current;

 if (VAR_7->type != VAR_2 &&
     VAR_7->type != VAR_3)
  return -VAR_1;

 if (VAR_7->target != VAR_4)
  return -VAR_1;

 if (VAR_8->overlay_owner)
  return -VAR_0;
 if (FUNC_0(&VAR_8->video_vbq))
  return -VAR_0;

 *VAR_10 = VAR_7->r;
 if (VAR_10->top < VAR_9->top)
  VAR_10->top = VAR_9->top;
 if (VAR_10->top > VAR_9->top + VAR_9->height)
  VAR_10->top = VAR_9->top + VAR_9->height;
 if (VAR_10->height > VAR_9->top - VAR_10->top + VAR_9->height)
  VAR_10->height = VAR_9->top - VAR_10->top + VAR_9->height;

 if (VAR_10->left < VAR_9->left)
  VAR_10->left = VAR_9->left;
 if (VAR_10->left > VAR_9->left + VAR_9->width)
  VAR_10->left = VAR_9->left + VAR_9->width;
 if (VAR_10->width > VAR_9->left - VAR_10->left + VAR_9->width)
  VAR_10->width = VAR_9->left - VAR_10->left + VAR_9->width;
 VAR_7->r = *VAR_10;
 return 0;
}
