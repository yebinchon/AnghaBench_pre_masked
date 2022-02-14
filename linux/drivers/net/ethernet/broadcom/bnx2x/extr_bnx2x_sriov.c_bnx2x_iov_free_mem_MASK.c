
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hw_dma {int size; int mapping; int addr; } ;
struct bnx2x {TYPE_1__* vfdb; } ;
struct TYPE_7__ {int size; int mapping; int addr; } ;
struct TYPE_10__ {TYPE_2__ sp_dma; } ;
struct TYPE_9__ {int size; int mapping; int addr; } ;
struct TYPE_8__ {int size; int mapping; int addr; } ;
struct TYPE_6__ {struct hw_dma* context; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (struct bnx2x*) ;
 TYPE_4__* FUNC_2 (struct bnx2x*) ;
 TYPE_3__* FUNC_3 (struct bnx2x*) ;
 int VAR_1 ;
 int FUNC_4 (struct bnx2x*) ;

void FUNC_5(struct bnx2x *VAR_2)
{
 int VAR_3;

 if (!FUNC_4(VAR_2))
  return;


 for (VAR_3 = 0; VAR_3 < VAR_0/VAR_1; VAR_3++) {
  struct hw_dma *VAR_4 = &VAR_2->vfdb->context[VAR_3];
  FUNC_0(VAR_4->addr, VAR_4->mapping, VAR_4->size);
 }

 FUNC_0(FUNC_1(VAR_2)->sp_dma.addr,
         FUNC_1(VAR_2)->sp_dma.mapping,
         FUNC_1(VAR_2)->sp_dma.size);

 FUNC_0(FUNC_3(VAR_2)->addr,
         FUNC_3(VAR_2)->mapping,
         FUNC_3(VAR_2)->size);

 FUNC_0(FUNC_2(VAR_2)->addr,
         FUNC_2(VAR_2)->mapping,
         FUNC_2(VAR_2)->size);
}
