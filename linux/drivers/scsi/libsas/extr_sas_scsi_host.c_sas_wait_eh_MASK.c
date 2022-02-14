
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int shost; } ;
struct sas_ha_struct {TYPE_2__ core; int lock; int eh_wait_q; } ;
struct TYPE_4__ {int ap; } ;
struct domain_device {int state; TYPE_1__ sata_dev; TYPE_3__* port; } ;
struct TYPE_6__ {struct sas_ha_struct* ha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct domain_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(struct domain_device *VAR_3)
{
 struct sas_ha_struct *VAR_4 = VAR_3->port->ha;
 FUNC_0(VAR_2);

 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_3->sata_dev.ap);
  return;
 }
 retry:
 FUNC_8(&VAR_4->lock);

 while (FUNC_10(VAR_0, &VAR_3->state)) {
  FUNC_5(&VAR_4->eh_wait_q, &VAR_2, VAR_1);
  FUNC_9(&VAR_4->lock);
  FUNC_6();
  FUNC_8(&VAR_4->lock);
 }
 FUNC_3(&VAR_4->eh_wait_q, &VAR_2);

 FUNC_9(&VAR_4->lock);


 if (FUNC_7(VAR_4->core.shost)) {
  FUNC_4(10);
  goto retry;
 }
}
