
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int height; int width; int top; int left; } ;
struct v4l2_selection {int target; TYPE_5__ r; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct TYPE_9__ {TYPE_3__ fmt; TYPE_5__ compose; } ;
struct capture_priv {TYPE_4__ vdev; } ;


 int VAR_0 ;




 struct capture_priv* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
          struct v4l2_selection *VAR_3)
{
 struct capture_priv *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_3->target) {
 case 131:
 case 129:
 case 130:

  VAR_3->r = VAR_4->vdev.compose;
  break;
 case 128:





  VAR_3->r.left = 0;
  VAR_3->r.top = 0;
  VAR_3->r.width = VAR_4->vdev.fmt.fmt.pix.width;
  VAR_3->r.height = VAR_4->vdev.fmt.fmt.pix.height;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
