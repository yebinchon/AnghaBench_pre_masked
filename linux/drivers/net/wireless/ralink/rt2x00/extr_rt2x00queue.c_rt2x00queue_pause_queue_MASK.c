
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data_queue {int flags; TYPE_1__* rt2x00dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct data_queue*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct data_queue *VAR_3)
{
 if (!FUNC_2(VAR_0, &VAR_3->rt2x00dev->flags) ||
     !FUNC_2(VAR_2, &VAR_3->flags) ||
     FUNC_1(VAR_1, &VAR_3->flags))
  return;

 FUNC_0(VAR_3);
}
