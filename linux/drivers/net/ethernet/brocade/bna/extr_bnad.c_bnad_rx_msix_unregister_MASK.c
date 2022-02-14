
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnad_rx_info {TYPE_2__* rx_ctrl; } ;
struct bnad {TYPE_1__* msix_table; } ;
struct TYPE_6__ {int intr_vector; } ;
struct TYPE_5__ {TYPE_3__* ccb; } ;
struct TYPE_4__ {int vector; } ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(struct bnad *VAR_0, struct bnad_rx_info *VAR_1,
   int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1->rx_ctrl[VAR_3].ccb == ((void*)0))
   continue;

  VAR_4 = VAR_1->rx_ctrl[VAR_3].ccb->intr_vector;
  FUNC_0(VAR_0->msix_table[VAR_4].vector,
    VAR_1->rx_ctrl[VAR_3].ccb);
 }
}
