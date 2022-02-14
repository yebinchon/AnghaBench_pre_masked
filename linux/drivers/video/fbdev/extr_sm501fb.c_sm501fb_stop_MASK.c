
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sm501fb_info {TYPE_2__* regs_res; int regs; TYPE_2__* regs2d_res; int regs2d; TYPE_2__* fbmem_res; int fbmem; TYPE_1__* dev; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sm501fb_info *VAR_1)
{

 FUNC_3(VAR_1->dev->parent, VAR_0, 0);

 FUNC_0(VAR_1->fbmem);
 FUNC_1(VAR_1->fbmem_res->start,
      FUNC_2(VAR_1->fbmem_res));

 FUNC_0(VAR_1->regs2d);
 FUNC_1(VAR_1->regs2d_res->start,
      FUNC_2(VAR_1->regs2d_res));

 FUNC_0(VAR_1->regs);
 FUNC_1(VAR_1->regs_res->start,
      FUNC_2(VAR_1->regs_res));
}
