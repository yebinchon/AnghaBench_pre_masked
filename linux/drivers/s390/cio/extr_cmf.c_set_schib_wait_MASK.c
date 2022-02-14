
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct set_schib_struct {int mbfc; unsigned long address; int ret; int wait; int mme; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ state; struct set_schib_struct* cmb_wait; int cmb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ccw_device*,int ,int,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ccw_device *VAR_7, u32 VAR_8,
     int VAR_9, unsigned long VAR_10)
{
 struct set_schib_struct VAR_11;
 int VAR_12 = -VAR_4;

 FUNC_2(VAR_7->ccwlock);
 if (!VAR_7->private->cmb)
  goto out;

 VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_12 != -VAR_3)
  goto out;


 if (VAR_7->private->state != VAR_2)
  goto out;

 FUNC_0(&VAR_11.wait);
 VAR_11.mme = VAR_8;
 VAR_11.mbfc = VAR_9;
 VAR_11.address = VAR_10;
 VAR_11.ret = VAR_0;

 VAR_7->private->state = VAR_1;
 VAR_7->private->cmb_wait = &VAR_11;
 FUNC_3(VAR_7->ccwlock);

 VAR_12 = FUNC_4(VAR_11.wait,
            VAR_11.ret != VAR_0,
            VAR_6);
 FUNC_2(VAR_7->ccwlock);
 if (VAR_12 <= 0) {
  if (VAR_11.ret == VAR_0) {
   VAR_11.ret = (VAR_12 == 0) ? -VAR_5 : VAR_12;
   if (VAR_7->private->state == VAR_1)
    VAR_7->private->state = VAR_2;
  }
 }
 VAR_7->private->cmb_wait = ((void*)0);
 VAR_12 = VAR_11.ret;
out:
 FUNC_3(VAR_7->ccwlock);
 return VAR_12;
}
