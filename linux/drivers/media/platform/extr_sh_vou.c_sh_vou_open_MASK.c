
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct sh_vou_device {scalar_t__ status; int fop_lock; TYPE_1__ v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sh_vou_device*) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct sh_vou_device* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_3)
{
 struct sh_vou_device *VAR_4 = FUNC_8(VAR_3);
 int VAR_5;

 if (FUNC_0(&VAR_4->fop_lock))
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  goto done_open;
 if (FUNC_5(VAR_3) &&
     VAR_4->status == VAR_2) {

  FUNC_2(VAR_4->v4l2_dev.dev);
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 < 0) {
   FUNC_3(VAR_4->v4l2_dev.dev);
   FUNC_7(VAR_3);
  } else {
   VAR_4->status = VAR_1;
  }
 }
done_open:
 FUNC_1(&VAR_4->fop_lock);
 return VAR_5;
}
