
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct cmb_data {int last_update; int size; int last_block; void* hw_block; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_1__ dev; } ;
struct TYPE_6__ {struct cmb_data* cmb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct subchannel*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct subchannel* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ccw_device *VAR_7)
{
 struct subchannel *VAR_8 = FUNC_6(VAR_7->dev.parent);
 struct cmb_data *VAR_9;
 void *VAR_10;

 if (FUNC_0(VAR_8))
  return -VAR_1;

 if (FUNC_4(&VAR_8->schib.scsw) & VAR_5) {

  if ((!(FUNC_3(&VAR_8->schib.scsw) & VAR_4)) &&
      (FUNC_3(&VAR_8->schib.scsw) &
       (VAR_2 | VAR_3)) &&
      (!(FUNC_5(&VAR_8->schib.scsw) & VAR_6)))
   return -VAR_0;
 }
 VAR_9 = VAR_7->private->cmb;
 VAR_10 = VAR_9->hw_block;
 FUNC_2(VAR_9->last_block, VAR_10, VAR_9->size);
 VAR_9->last_update = FUNC_1();
 return 0;
}
