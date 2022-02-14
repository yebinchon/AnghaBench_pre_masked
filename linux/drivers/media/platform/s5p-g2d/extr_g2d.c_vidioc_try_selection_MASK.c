
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {scalar_t__ target; TYPE_1__ r; int type; } ;
struct g2d_frame {int dummy; } ;
struct g2d_dev {int v4l2_dev; } ;
struct g2d_ctx {struct g2d_dev* dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct g2d_frame* FUNC_2 (struct g2d_ctx*,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
    const struct v4l2_selection *VAR_7)
{
 struct g2d_ctx *VAR_8 = VAR_6;
 struct g2d_dev *VAR_9 = VAR_8->dev;
 struct g2d_frame *VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_7->type);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 if (VAR_7->type == VAR_1) {
  if (VAR_7->target != VAR_3)
   return -VAR_0;
 } else if (VAR_7->type == VAR_2) {
  if (VAR_7->target != VAR_4)
   return -VAR_0;
 }

 if (VAR_7->r.top < 0 || VAR_7->r.left < 0) {
  FUNC_3(&VAR_9->v4l2_dev,
   "doesn't support negative values for top & left\n");
  return -VAR_0;
 }

 return 0;
}
