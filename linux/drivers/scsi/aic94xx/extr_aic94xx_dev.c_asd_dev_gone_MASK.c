
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct domain_device {int * lldd_dev; TYPE_2__* port; } ;
struct TYPE_6__ {int ddb_lock; } ;
struct asd_ha_struct {TYPE_3__ hw_prof; } ;
struct TYPE_5__ {TYPE_1__* ha; } ;
struct TYPE_4__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,int,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct domain_device *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned long VAR_4;
 struct asd_ha_struct *VAR_5 = VAR_1->port->ha->lldd_ha;

 FUNC_2(&VAR_5->hw_prof.ddb_lock, VAR_4);
 VAR_2 = (int) (unsigned long) VAR_1->lldd_dev;
 VAR_3 = FUNC_0(VAR_5, VAR_2, VAR_0);

 if (VAR_3 != 0xFFFF)
  FUNC_1(VAR_5, VAR_3);
 FUNC_1(VAR_5, VAR_2);
 VAR_1->lldd_dev = ((void*)0);
 FUNC_3(&VAR_5->hw_prof.ddb_lock, VAR_4);
}
