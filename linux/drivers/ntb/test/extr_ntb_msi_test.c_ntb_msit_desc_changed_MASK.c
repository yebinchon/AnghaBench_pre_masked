
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ntb_msit_ctx {TYPE_3__* ntb; TYPE_2__* isr_ctx; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int data; int addr_offset; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct ntb_msit_ctx *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_1(&VAR_2->ntb->dev, "MSI Descriptors Changed\n");

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_4(VAR_2->ntb, 2 * VAR_3 + 1,
          VAR_2->isr_ctx[VAR_3].desc.addr_offset);
  FUNC_4(VAR_2->ntb, 2 * VAR_3 + 2,
          VAR_2->isr_ctx[VAR_3].desc.data);
 }

 FUNC_2(VAR_2->ntb, FUNC_0(FUNC_3(VAR_2->ntb)));
}
