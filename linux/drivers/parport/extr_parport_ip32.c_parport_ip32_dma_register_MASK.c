
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cntlstat; } ;
struct TYPE_7__ {TYPE_1__ parport; } ;
struct TYPE_8__ {TYPE_2__ ctrl; } ;
struct TYPE_10__ {TYPE_3__ perif; } ;
struct TYPE_9__ {int irq_on; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 TYPE_5__* VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_8;

 FUNC_2(&VAR_5.lock);
 VAR_5.irq_on = 1;


 FUNC_3(VAR_3, &VAR_4->perif.ctrl.parport.cntlstat);


 VAR_8 = FUNC_1(VAR_0, VAR_6,
     0, "parport_ip32", ((void*)0));
 if (VAR_8)
  goto fail_a;
 VAR_8 = FUNC_1(VAR_1, VAR_6,
     0, "parport_ip32", ((void*)0));
 if (VAR_8)
  goto fail_b;







 return 0;





fail_b:
 FUNC_0(VAR_0, ((void*)0));
fail_a:
 return VAR_8;
}
