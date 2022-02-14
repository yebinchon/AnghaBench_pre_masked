
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_msit_ctx {TYPE_1__* peers; TYPE_2__* ntb; } ;
struct ntb_msi_desc {void* data; void* addr_offset; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int num_irqs; int init_comp; struct ntb_msi_desc* msi_desc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,int) ;
 void* FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ntb_msit_ctx *VAR_0, int VAR_1)
{
 int VAR_2;
 struct ntb_msi_desc *VAR_3 = VAR_0->peers[VAR_1].msi_desc;
 int VAR_4 = VAR_0->peers[VAR_1].num_irqs;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_3[VAR_2].addr_offset = FUNC_2(VAR_0->ntb, VAR_1,
        2 * VAR_2 + 1);
  VAR_3[VAR_2].data = FUNC_2(VAR_0->ntb, VAR_1, 2 * VAR_2 + 2);
 }

 FUNC_1(&VAR_0->ntb->dev, "Found %d interrupts on peer %d\n",
   VAR_4, VAR_1);

 FUNC_0(&VAR_0->peers[VAR_1].init_comp);
}
