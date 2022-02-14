
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; int hbm_f_ev_supported; } ;
struct mei_cl {int notify_ev; int ev_wait; struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct mei_cl *VAR_3, bool VAR_4, bool *VAR_5)
{
 struct mei_device *VAR_6;
 int VAR_7;

 *VAR_5 = 0;

 if (FUNC_0(!VAR_3 || !VAR_3->dev))
  return -VAR_1;

 VAR_6 = VAR_3->dev;

 if (!VAR_6->hbm_f_ev_supported) {
  FUNC_1(VAR_6, VAR_3, "notifications not supported\n");
  return -VAR_2;
 }

 if (!FUNC_2(VAR_3))
  return -VAR_1;

 if (VAR_3->notify_ev)
  goto out;

 if (!VAR_4)
  return -VAR_0;

 FUNC_4(&VAR_6->device_lock);
 VAR_7 = FUNC_5(VAR_3->ev_wait, VAR_3->notify_ev);
 FUNC_3(&VAR_6->device_lock);

 if (VAR_7 < 0)
  return VAR_7;

out:
 *VAR_5 = VAR_3->notify_ev;
 VAR_3->notify_ev = 0;
 return 0;
}
