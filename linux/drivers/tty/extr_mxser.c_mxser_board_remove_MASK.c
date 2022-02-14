
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxser_board {int irq; TYPE_2__* ports; scalar_t__ idx; TYPE_1__* info; } ;
struct TYPE_4__ {int port; } ;
struct TYPE_3__ {unsigned int nports; } ;


 int FUNC_0 (int ,struct mxser_board*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mxser_board *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->info->nports; VAR_2++) {
  FUNC_2(VAR_0, VAR_1->idx + VAR_2);
  FUNC_1(&VAR_1->ports[VAR_2].port);
 }
 FUNC_0(VAR_1->irq, VAR_1);
}
