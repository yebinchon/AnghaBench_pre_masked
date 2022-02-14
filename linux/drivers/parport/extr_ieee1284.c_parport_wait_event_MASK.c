
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parport {int timer; TYPE_3__* physport; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_6__ {TYPE_1__ ieee1284; TYPE_2__* cad; } ;
struct TYPE_5__ {int timeout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4 (struct parport *VAR_2, signed long VAR_3)
{
 int VAR_4;

 if (!VAR_2->physport->cad->timeout)


  return 1;

 FUNC_3(&VAR_2->timer, VAR_1, 0);
 FUNC_2(&VAR_2->timer, VAR_0 + VAR_3);
 VAR_4 = FUNC_1 (&VAR_2->physport->ieee1284.irq);
 if (!FUNC_0(&VAR_2->timer) && !VAR_4)

  VAR_4 = 1;

 return VAR_4;
}
