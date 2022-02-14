
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b53_device {int ds; int core_rev; int name; int chip_id; TYPE_1__* pdata; int enabled_ports; } ;
struct TYPE_2__ {int enabled_ports; int chip_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct b53_device*) ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(struct b53_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->pdata) {
  VAR_1->chip_id = VAR_1->pdata->chip_id;
  VAR_1->enabled_ports = VAR_1->pdata->enabled_ports;
 }

 if (!VAR_1->chip_id && FUNC_0(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_3("found switch: %s, rev %i\n", VAR_1->name, VAR_1->core_rev);

 return FUNC_2(VAR_1->ds);
}
