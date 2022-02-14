
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int high; int low; } ;
union MEGASAS_REQUEST_DESCRIPTOR_UNION {TYPE_1__ u; } ;
typedef int u64 ;
struct megasas_instance {int hba_lock; TYPE_2__* reg_set; } ;
struct TYPE_4__ {int inbound_high_queue_port; int inbound_low_queue_port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void
FUNC_5(struct megasas_instance *VAR_0,
  union MEGASAS_REQUEST_DESCRIPTOR_UNION *VAR_1)
{





 unsigned long VAR_2;
 FUNC_1(&VAR_0->hba_lock, VAR_2);
 FUNC_3(FUNC_0(VAR_1->u.low),
  &VAR_0->reg_set->inbound_low_queue_port);
 FUNC_3(FUNC_0(VAR_1->u.high),
  &VAR_0->reg_set->inbound_high_queue_port);
 FUNC_2(&VAR_0->hba_lock, VAR_2);

}
