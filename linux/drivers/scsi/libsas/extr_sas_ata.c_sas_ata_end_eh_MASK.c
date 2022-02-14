
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {int lock; int eh_active; } ;
struct domain_device {int state; TYPE_1__* port; } ;
struct ata_port {struct domain_device* private_data; } ;
struct TYPE_2__ {struct sas_ha_struct* ha; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct ata_port *VAR_1)
{
 struct domain_device *VAR_2 = VAR_1->private_data;
 struct sas_ha_struct *VAR_3 = VAR_2->port->ha;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);
 if (FUNC_2(VAR_0, &VAR_2->state))
  VAR_3->eh_active--;
 FUNC_1(&VAR_3->lock, VAR_4);
}
