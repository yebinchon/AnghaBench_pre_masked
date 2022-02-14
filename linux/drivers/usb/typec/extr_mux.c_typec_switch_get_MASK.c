
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* parent; } ;
struct typec_switch {TYPE_3__ dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (struct typec_switch*) ;
 int FUNC_1 (int) ;
 struct typec_switch* FUNC_2 (struct device*,char*,int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

struct typec_switch *FUNC_4(struct device *VAR_1)
{
 struct typec_switch *VAR_2;

 VAR_2 = FUNC_2(VAR_1, "orientation-switch", ((void*)0),
       VAR_0);
 if (!FUNC_0(VAR_2))
  FUNC_1(!FUNC_3(VAR_2->dev.parent->driver->owner));

 return VAR_2;
}
