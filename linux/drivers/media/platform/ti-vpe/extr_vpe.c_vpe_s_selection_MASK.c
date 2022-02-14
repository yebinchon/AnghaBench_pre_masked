
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ left; scalar_t__ top; scalar_t__ width; scalar_t__ height; } ;
struct vpe_q_data {TYPE_1__ c_rect; } ;
struct vpe_ctx {int dev; } ;
struct v4l2_selection {TYPE_1__ r; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vpe_ctx*,struct v4l2_selection*) ;
 struct vpe_ctx* FUNC_1 (struct file*) ;
 struct vpe_q_data* FUNC_2 (struct vpe_ctx*,int ) ;
 int FUNC_3 (struct vpe_ctx*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
  struct v4l2_selection *VAR_3)
{
 struct vpe_ctx *VAR_4 = FUNC_1(VAR_1);
 struct vpe_q_data *VAR_5;
 struct v4l2_selection VAR_6 = *VAR_3;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_2(VAR_4, VAR_6.type);
 if (!VAR_5)
  return -VAR_0;

 if ((VAR_5->c_rect.left == VAR_6.r.left) &&
   (VAR_5->c_rect.top == VAR_6.r.top) &&
   (VAR_5->c_rect.width == VAR_6.r.width) &&
   (VAR_5->c_rect.height == VAR_6.r.height)) {
  FUNC_4(VAR_4->dev,
   "requested crop/compose values are already set\n");
  return 0;
 }

 VAR_5->c_rect = VAR_6.r;

 return FUNC_3(VAR_4);
}
