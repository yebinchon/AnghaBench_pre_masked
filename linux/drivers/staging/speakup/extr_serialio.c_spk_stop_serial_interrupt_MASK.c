
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {scalar_t__ port_tts; } ;
struct TYPE_4__ {int read_buff_add; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_2(void)
{
 if (VAR_2.port_tts == 0)
  return;

 if (!VAR_3->read_buff_add)
  return;


 FUNC_1(0, VAR_2.port_tts + VAR_0);

 FUNC_0(VAR_1->irq, (void *)VAR_4);
}
