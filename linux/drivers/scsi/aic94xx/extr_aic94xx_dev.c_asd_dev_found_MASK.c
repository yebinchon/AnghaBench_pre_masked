
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct domain_device {int dev_type; int tproto; TYPE_2__* port; } ;
struct TYPE_6__ {int ddb_lock; } ;
struct asd_ha_struct {TYPE_3__ hw_prof; } ;
struct TYPE_5__ {TYPE_1__* ha; } ;
struct TYPE_4__ {struct asd_ha_struct* lldd_ha; } ;




 int FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct domain_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct domain_device *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 0;
 struct asd_ha_struct *VAR_3 = VAR_0->port->ha->lldd_ha;

 FUNC_4(&VAR_3->hw_prof.ddb_lock, VAR_1);
 switch (VAR_0->dev_type) {
 case 129:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_0);
  break;
 default:
  if (VAR_0->tproto)
   VAR_2 = FUNC_3(VAR_0);
  else
   VAR_2 = FUNC_0(VAR_0);
 }
 FUNC_5(&VAR_3->hw_prof.ddb_lock, VAR_1);

 return VAR_2;
}
