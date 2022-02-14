
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmpe_variant_info {int num_blocks; struct stmpe_variant_block* blocks; } ;
struct stmpe_variant_block {unsigned int block; TYPE_2__* cell; scalar_t__ irq; } ;
struct stmpe {int dev; TYPE_1__* pdata; struct stmpe_variant_info* variant; } ;
struct resource {int flags; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_4__ {int num_resources; int * resources; } ;
struct TYPE_3__ {unsigned int blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct stmpe*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct stmpe *VAR_2)
{
 struct stmpe_variant_info *VAR_3 = VAR_2->variant;
 unsigned int VAR_4 = VAR_2->pdata->blocks;
 int VAR_5 = -VAR_0;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_blocks; VAR_6++) {
  struct stmpe_variant_block *VAR_8 = &VAR_3->blocks[VAR_6];

  if (!(VAR_4 & VAR_8->block))
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_8->cell->num_resources; VAR_7++) {
   struct resource *VAR_9 =
    (struct resource *) &VAR_8->cell->resources[VAR_7];


   if (VAR_9->flags & VAR_1)
    VAR_9->start = VAR_9->end = VAR_8->irq + VAR_7;
  }

  VAR_4 &= ~VAR_8->block;
  VAR_5 = FUNC_1(VAR_2, VAR_8->cell);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_4)
  FUNC_0(VAR_2->dev,
    "platform wants blocks (%#x) not present on variant",
    VAR_4);

 return VAR_5;
}
