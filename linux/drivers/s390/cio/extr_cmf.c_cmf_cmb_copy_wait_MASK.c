
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct copy_block_struct {int ret; int wait; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ state; struct copy_block_struct* cmb_wait; int cmb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_6)
{
 struct copy_block_struct VAR_7;
 int VAR_8 = -VAR_4;

 FUNC_2(VAR_6->ccwlock);
 if (!VAR_6->private->cmb)
  goto out;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 != -VAR_3)
  goto out;

 if (VAR_6->private->state != VAR_2)
  goto out;

 FUNC_1(&VAR_7.wait);
 VAR_7.ret = VAR_0;

 VAR_6->private->state = VAR_1;
 VAR_6->private->cmb_wait = &VAR_7;
 FUNC_3(VAR_6->ccwlock);

 VAR_8 = FUNC_4(VAR_7.wait,
           VAR_7.ret != VAR_0);
 FUNC_2(VAR_6->ccwlock);
 if (VAR_8) {
  if (VAR_7.ret == VAR_0) {
   VAR_7.ret = -VAR_5;
   if (VAR_6->private->state == VAR_1)
    VAR_6->private->state = VAR_2;
  }
 }
 VAR_6->private->cmb_wait = ((void*)0);
 VAR_8 = VAR_7.ret;
out:
 FUNC_3(VAR_6->ccwlock);
 return VAR_8;
}
