
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe_q_data {int flags; int height; scalar_t__ width; } ;
struct vpe_ctx {int dev; } ;
struct TYPE_2__ {scalar_t__ top; scalar_t__ left; scalar_t__ width; int height; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 struct vpe_q_data* FUNC_0 (struct vpe_ctx*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__,int,int*,int ,int,int ,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct vpe_ctx *VAR_8, struct v4l2_selection *VAR_9)
{
 struct vpe_q_data *VAR_10;
 int VAR_11;

 if ((VAR_9->type != VAR_6) &&
     (VAR_9->type != VAR_7))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_9->type);
 if (!VAR_10)
  return -VAR_0;

 switch (VAR_9->target) {
 case 129:




  if (VAR_9->type == VAR_7)
   return -VAR_0;
  break;
 case 128:




  if (VAR_9->type == VAR_6)
   return -VAR_0;
  break;




 default:
  return -VAR_0;
 }





 if (VAR_10->flags & VAR_4)
  VAR_11 = VAR_10->height / 2;
 else
  VAR_11 = VAR_10->height;

 if (VAR_9->r.top < 0 || VAR_9->r.left < 0) {
  FUNC_2(VAR_8->dev, "negative values for top and left\n");
  VAR_9->r.top = VAR_9->r.left = 0;
 }

 FUNC_1(&VAR_9->r.width, VAR_3, VAR_10->width, 1,
  &VAR_9->r.height, VAR_2, VAR_11, VAR_1, VAR_5);


 if (VAR_9->r.left + VAR_9->r.width > VAR_10->width)
  VAR_9->r.left = VAR_10->width - VAR_9->r.width;
 if (VAR_9->r.top + VAR_9->r.height > VAR_10->height)
  VAR_9->r.top = VAR_10->height - VAR_9->r.height;

 return 0;
}
