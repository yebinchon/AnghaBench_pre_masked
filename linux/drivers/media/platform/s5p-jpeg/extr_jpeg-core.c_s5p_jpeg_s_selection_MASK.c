
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {int dummy; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; struct v4l2_rect r; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_2__* jpeg; } ;
struct file {int private_data; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {scalar_t__ hw3250_compat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct s5p_jpeg_ctx*,struct v4l2_rect*) ;
 int FUNC_1 (struct s5p_jpeg_ctx*,struct v4l2_rect*) ;
 struct s5p_jpeg_ctx* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
      struct v4l2_selection *VAR_8)
{
 struct s5p_jpeg_ctx *VAR_9 = FUNC_2(VAR_6->private_data);
 struct v4l2_rect *VAR_10 = &VAR_8->r;
 int VAR_11 = -VAR_0;

 if (VAR_8->type != VAR_3)
  return -VAR_0;

 if (VAR_8->target == VAR_4) {
  if (VAR_9->mode != VAR_1)
   return -VAR_0;
  if (VAR_9->jpeg->variant->hw3250_compat)
   VAR_11 = FUNC_1(VAR_9, VAR_10);
 } else if (VAR_8->target == VAR_5) {
  if (VAR_9->mode != VAR_2)
   return -VAR_0;
  if (VAR_9->jpeg->variant->hw3250_compat)
   VAR_11 = FUNC_0(VAR_9, VAR_10);
 }

 return VAR_11;
}
