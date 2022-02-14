
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_device {int notif_work; int notif_cb; } ;
struct mei_cl {int notify_ev; struct mei_cl_device* cldev; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct mei_cl *VAR_0)
{
 struct mei_cl_device *VAR_1 = VAR_0->cldev;

 if (!VAR_1 || !VAR_1->notif_cb)
  return 0;

 if (!VAR_0->notify_ev)
  return 0;

 FUNC_0(&VAR_1->notif_work);

 VAR_0->notify_ev = 0;

 return 1;
}
