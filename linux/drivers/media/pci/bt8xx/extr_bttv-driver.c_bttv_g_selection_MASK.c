
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_selection {scalar_t__ type; int target; int r; } ;
struct file {int dummy; } ;
struct bttv_fh {int do_crop; struct bttv* btv; } ;
struct bttv {size_t tvnorm; TYPE_1__* crop; } ;
struct TYPE_5__ {int bounds; int defrect; } ;
struct TYPE_6__ {TYPE_2__ cropcap; } ;
struct TYPE_4__ {int rect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5, struct v4l2_selection *VAR_6)
{
 struct bttv_fh *VAR_7 = VAR_5;
 struct bttv *VAR_8 = VAR_7->btv;

 if (VAR_6->type != VAR_1 &&
     VAR_6->type != VAR_2)
  return -VAR_0;

 switch (VAR_6->target) {
 case 130:





  VAR_6->r = VAR_8->crop[!!VAR_7->do_crop].rect;
  break;
 case 128:
  VAR_6->r = VAR_3[VAR_8->tvnorm].cropcap.defrect;
  break;
 case 129:
  VAR_6->r = VAR_3[VAR_8->tvnorm].cropcap.bounds;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
