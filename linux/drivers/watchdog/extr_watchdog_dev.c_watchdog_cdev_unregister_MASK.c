
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {scalar_t__ id; struct watchdog_core_data* wd_data; int status; } ;
struct watchdog_core_data {int kref; int work; int timer; int lock; int * wdd; int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_1 ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct watchdog_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct watchdog_device*) ;

__attribute__((used)) static void FUNC_10(struct watchdog_device *VAR_4)
{
 struct watchdog_core_data *VAR_5 = VAR_4->wd_data;

 FUNC_0(&VAR_5->cdev);
 if (VAR_4->id == 0) {
  FUNC_4(&VAR_3);
  VAR_1 = ((void*)0);
 }

 if (FUNC_8(VAR_4) &&
     FUNC_7(VAR_0, &VAR_4->status)) {
  FUNC_9(VAR_4);
 }

 FUNC_5(&VAR_5->lock);
 VAR_5->wdd = ((void*)0);
 VAR_4->wd_data = ((void*)0);
 FUNC_6(&VAR_5->lock);

 FUNC_1(&VAR_5->timer);
 FUNC_3(&VAR_5->work);

 FUNC_2(&VAR_5->kref, VAR_2);
}
