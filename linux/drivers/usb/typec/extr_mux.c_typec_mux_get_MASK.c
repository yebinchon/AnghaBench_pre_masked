
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* parent; } ;
struct typec_mux {TYPE_3__ dev; } ;
struct typec_altmode_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (struct typec_mux*) ;
 int FUNC_1 (int) ;
 struct typec_mux* FUNC_2 (struct device*,char*,void*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

struct typec_mux *FUNC_4(struct device *VAR_1,
    const struct typec_altmode_desc *VAR_2)
{
 struct typec_mux *VAR_3;

 VAR_3 = FUNC_2(VAR_1, "mode-switch", (void *)VAR_2,
        VAR_0);
 if (!FUNC_0(VAR_3))
  FUNC_1(!FUNC_3(VAR_3->dev.parent->driver->owner));

 return VAR_3;
}
