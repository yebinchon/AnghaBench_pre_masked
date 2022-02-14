
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {int misc_host_ctrl; int irq_max; TYPE_1__* napi; } ;
struct TYPE_2__ {int int_mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1,
      (VAR_2->misc_host_ctrl | VAR_0));
 for (VAR_3 = 0; VAR_3 < VAR_2->irq_max; VAR_3++)
  FUNC_1(VAR_2->napi[VAR_3].int_mbox, 0x00000001);
}
