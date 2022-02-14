
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct mei_cl {int notify_ev; scalar_t__ ev_async; int ev_wait; int notify_en; struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;
 int FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mei_cl *VAR_2)
{
 struct mei_device *VAR_3;

 if (!VAR_2 || !VAR_2->dev)
  return;

 VAR_3 = VAR_2->dev;

 if (!VAR_2->notify_en)
  return;

 FUNC_0(VAR_3, VAR_2, "notify event");
 VAR_2->notify_ev = 1;
 if (!FUNC_2(VAR_2))
  FUNC_3(&VAR_2->ev_wait);

 if (VAR_2->ev_async)
  FUNC_1(&VAR_2->ev_async, VAR_1, VAR_0);

}
