
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int flags; int id; int val; } ;
struct bdisp_ctx {int state; TYPE_1__* bdisp_dev; int vflip; int hflip; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct bdisp_ctx *VAR_3, struct v4l2_ctrl *VAR_4)
{
 if (VAR_4->flags & VAR_2)
  return 0;

 switch (VAR_4->id) {
 case 129:
  VAR_3->hflip = VAR_4->val;
  break;
 case 128:
  VAR_3->vflip = VAR_4->val;
  break;
 default:
  FUNC_0(VAR_3->bdisp_dev->dev, "unknown control %d\n", VAR_4->id);
  return -VAR_1;
 }

 VAR_3->state |= VAR_0;

 return 0;
}
