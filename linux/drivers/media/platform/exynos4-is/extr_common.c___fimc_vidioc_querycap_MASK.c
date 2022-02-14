
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_2__ {int name; } ;


 char* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct device *VAR_0, struct v4l2_capability *VAR_1)
{
 FUNC_2(VAR_1->driver, VAR_0->driver->name, sizeof(VAR_1->driver));
 FUNC_2(VAR_1->card, VAR_0->driver->name, sizeof(VAR_1->card));
 FUNC_1(VAR_1->bus_info, sizeof(VAR_1->bus_info),
    "platform:%s", FUNC_0(VAR_0));
}
