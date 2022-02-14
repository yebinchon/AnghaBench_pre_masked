
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int * bus; int parent; } ;
struct TYPE_2__ {int name; } ;
struct rpmsg_device {struct device dev; int dst; int src; TYPE_1__ id; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int VAR_0 ;

int FUNC_5(struct rpmsg_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 int VAR_3;

 FUNC_2(&VAR_1->dev, "%s.%s.%d.%d", FUNC_1(VAR_2->parent),
       VAR_1->id.name, VAR_1->src, VAR_1->dst);

 VAR_1->dev.bus = &VAR_0;

 VAR_3 = FUNC_3(&VAR_1->dev);
 if (VAR_3) {
  FUNC_0(VAR_2, "device_register failed: %d\n", VAR_3);
  FUNC_4(&VAR_1->dev);
 }

 return VAR_3;
}
