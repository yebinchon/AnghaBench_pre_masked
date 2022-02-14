
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {int in_debug; int debug_lock; int dev; TYPE_1__* asic_funcs; } ;
struct TYPE_2__ {int (* halt_coresight ) (struct hl_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hl_device*) ;

int FUNC_4(struct hl_device *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_1->debug_lock);

 if (!VAR_2) {
  if (!VAR_1->in_debug) {
   FUNC_0(VAR_1->dev,
    "Failed to disable debug mode because device was not in debug mode\n");
   VAR_3 = -VAR_0;
   goto out;
  }

  VAR_1->asic_funcs->halt_coresight(VAR_1);
  VAR_1->in_debug = 0;

  goto out;
 }

 if (VAR_1->in_debug) {
  FUNC_0(VAR_1->dev,
   "Failed to enable debug mode because device is already in debug mode\n");
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_1->in_debug = 1;

out:
 FUNC_2(&VAR_1->debug_lock);

 return VAR_3;
}
