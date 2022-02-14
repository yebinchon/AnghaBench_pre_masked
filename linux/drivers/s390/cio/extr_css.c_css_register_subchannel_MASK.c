
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; int * type; int groups; int * bus; int * parent; } ;
struct TYPE_4__ {int sch_no; int ssid; } ;
struct subchannel {scalar_t__ st; TYPE_2__ dev; int driver; TYPE_1__ schid; } ;
struct TYPE_6__ {int device; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct subchannel*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct subchannel *VAR_6)
{
 int VAR_7;


 VAR_6->dev.parent = &VAR_2[0]->device;
 VAR_6->dev.bus = &VAR_3;
 VAR_6->dev.groups = VAR_4;

 if (VAR_6->st == VAR_1)
  VAR_6->dev.type = &VAR_5;
 FUNC_3(&VAR_6->dev, 1);
 FUNC_2(VAR_6);

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_0(0, "Could not register sch 0.%x.%04x: %d\n",
         VAR_6->schid.ssid, VAR_6->schid.sch_no, VAR_7);
  return VAR_7;
 }
 if (!VAR_6->driver) {





  FUNC_3(&VAR_6->dev, 0);
  FUNC_4(&VAR_6->dev.kobj, VAR_0);
 }
 return VAR_7;
}
