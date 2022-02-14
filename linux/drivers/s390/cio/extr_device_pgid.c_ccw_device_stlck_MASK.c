
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct subchannel {int lock; } ;
struct stlck_data {int rc; int done; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_3__* private; scalar_t__ drv; TYPE_1__ dev; } ;
typedef scalar_t__ addr_t ;
struct TYPE_5__ {int force; } ;
struct TYPE_6__ {int state; TYPE_2__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ccw_device*,struct stlck_data*,int *,int *) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct subchannel*) ;
 int FUNC_3 (struct subchannel*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct subchannel* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

int FUNC_12(struct ccw_device *VAR_7)
{
 struct subchannel *VAR_8 = FUNC_9(VAR_7->dev.parent);
 struct stlck_data VAR_9;
 u8 *VAR_10;
 int VAR_11;


 if (VAR_7->drv) {
  if (!VAR_7->private->options.force)
   return -VAR_2;
 }
 VAR_10 = FUNC_6(64, VAR_5 | VAR_6);
 if (!VAR_10)
  return -VAR_4;
 FUNC_4(&VAR_9.done);
 VAR_9.rc = -VAR_3;
 FUNC_7(VAR_8->lock);
 VAR_11 = FUNC_3(VAR_8, (u32) (addr_t) VAR_8);
 if (VAR_11)
  goto out_unlock;

 VAR_7->private->state = VAR_1;
 FUNC_0(VAR_7, &VAR_9, &VAR_10[0], &VAR_10[32]);
 FUNC_8(VAR_8->lock);

 if (FUNC_11(&VAR_9.done)) {

  FUNC_7(VAR_8->lock);
  FUNC_1(VAR_7);
  FUNC_8(VAR_8->lock);
  FUNC_10(&VAR_9.done);
 }
 VAR_11 = VAR_9.rc;

 FUNC_7(VAR_8->lock);
 FUNC_2(VAR_8);
 VAR_7->private->state = VAR_0;
out_unlock:
 FUNC_8(VAR_8->lock);
 FUNC_5(VAR_10);

 return VAR_11;
}
