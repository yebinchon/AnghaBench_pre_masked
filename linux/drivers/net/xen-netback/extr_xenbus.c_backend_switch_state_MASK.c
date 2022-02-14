
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; } ;
struct backend_info {int state; int have_hotplug_status_watch; struct xenbus_device* dev; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xenbus_device*,int) ;

__attribute__((used)) static inline void FUNC_3(struct backend_info *VAR_0,
     enum xenbus_state VAR_1)
{
 struct xenbus_device *VAR_2 = VAR_0->dev;

 FUNC_0("%s -> %s\n", VAR_2->nodename, FUNC_1(VAR_1));
 VAR_0->state = VAR_1;




 if (!VAR_0->have_hotplug_status_watch)
  FUNC_2(VAR_2, VAR_1);
}
