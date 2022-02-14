
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxser_board {TYPE_2__* info; TYPE_1__* ports; } ;
struct TYPE_4__ {int nports; } ;
struct TYPE_3__ {int ioaddr; } ;


 int FUNC_0 (struct mxser_board*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct mxser_board *VAR_0)
{
 FUNC_1(VAR_0->ports[0].ioaddr, 8 * VAR_0->info->nports);
 FUNC_0(VAR_0);
}
