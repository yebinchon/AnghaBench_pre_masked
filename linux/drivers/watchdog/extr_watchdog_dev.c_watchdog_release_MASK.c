
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {int id; TYPE_1__* info; int status; } ;
struct TYPE_4__ {int owner; } ;
struct watchdog_core_data {int kref; TYPE_2__ cdev; int lock; int status; struct watchdog_device* wdd; } ;
struct inode {int dummy; } ;
struct file {struct watchdog_core_data* private_data; } ;
struct TYPE_3__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (struct watchdog_device*) ;
 int FUNC_9 (struct watchdog_device*) ;
 int FUNC_10 (struct watchdog_device*) ;
 int FUNC_11 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_6, struct file *VAR_7)
{
 struct watchdog_core_data *VAR_8 = VAR_7->private_data;
 struct watchdog_device *VAR_9;
 int VAR_10 = -VAR_0;
 bool VAR_11;

 FUNC_3(&VAR_8->lock);

 VAR_9 = VAR_8->wdd;
 if (!VAR_9)
  goto done;






 if (!FUNC_7(VAR_2, &VAR_9->status))
  VAR_10 = 0;
 else if (FUNC_6(VAR_3, &VAR_8->status) ||
   !(VAR_9->info->options & VAR_1))
  VAR_10 = FUNC_10(VAR_9);


 if (VAR_10 < 0) {
  FUNC_5("watchdog%d: watchdog did not stop!\n", VAR_9->id);
  FUNC_9(VAR_9);
 }

 FUNC_11(VAR_9);


 FUNC_0(VAR_4, &VAR_8->status);

done:
 VAR_11 = VAR_9 && FUNC_8(VAR_9);
 FUNC_4(&VAR_8->lock);





 if (!VAR_11) {
  FUNC_2(VAR_8->cdev.owner);
  FUNC_1(&VAR_8->kref, VAR_5);
 }
 return 0;
}
