
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct xenbus_device {TYPE_1__ dev; int nodename; } ;
struct backend_info {struct backend_info* hotplug_script; int * vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct backend_info* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct backend_info*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct backend_info*,int ) ;
 int FUNC_5 (struct backend_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_3)
{
 struct backend_info *VAR_4 = FUNC_0(&VAR_3->dev);

 FUNC_4(VAR_4, VAR_2);

 FUNC_5(VAR_4);
 if (VAR_4->vif) {
  FUNC_3(&VAR_3->dev.kobj, VAR_0);
  FUNC_6(VAR_4->vif);
  FUNC_7(VAR_1, VAR_3->nodename, "hotplug-status");
  FUNC_8(VAR_4->vif);
  VAR_4->vif = ((void*)0);
 }
 FUNC_2(VAR_4->hotplug_script);
 FUNC_2(VAR_4);
 FUNC_1(&VAR_3->dev, ((void*)0));
 return 0;
}
