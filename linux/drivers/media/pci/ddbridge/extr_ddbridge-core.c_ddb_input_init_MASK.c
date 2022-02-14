
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ddb_regmap {int irq_base_idma; TYPE_1__* input; } ;
struct ddb_port {int lnr; struct ddb_input** input; struct ddb* dev; } ;
struct ddb_input {int nr; int regs; struct ddb_port* port; } ;
struct ddb {int dev; scalar_t__ has_dma; struct ddb_input* input; } ;
struct TYPE_2__ {int base; int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ddb_input*,int,int ) ;
 int FUNC_2 (struct ddb*,int ,int,int *,struct ddb_input*) ;
 int FUNC_3 (int ,char*,int ,int,int) ;
 int VAR_0 ;
 struct ddb_regmap* FUNC_4 (struct ddb_input*,int) ;

__attribute__((used)) static void FUNC_5(struct ddb_port *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct ddb *VAR_5 = VAR_1->dev;
 struct ddb_input *VAR_6 = &VAR_5->input[VAR_4];
 const struct ddb_regmap *VAR_7;

 VAR_1->input[VAR_3] = VAR_6;
 VAR_6->nr = VAR_2;
 VAR_6->port = VAR_1;
 VAR_7 = FUNC_4(VAR_6, 1);
 VAR_6->regs = FUNC_0(VAR_1->lnr) |
  (VAR_7->input->base + VAR_7->input->size * VAR_2);
 FUNC_3(VAR_5->dev, "init link %u, input %u, regs %08x\n",
  VAR_1->lnr, VAR_2, VAR_6->regs);

 if (VAR_5->has_dma) {
  const struct ddb_regmap *VAR_8 = FUNC_4(VAR_6, 0);
  u32 VAR_9 = VAR_8->irq_base_idma;
  u32 VAR_10 = VAR_2;

  if (VAR_1->lnr)
   VAR_10 += 32 + (VAR_1->lnr - 1) * 8;

  FUNC_3(VAR_5->dev, "init link %u, input %u, handler %u\n",
   VAR_1->lnr, VAR_2, VAR_10 + VAR_9);

  FUNC_2(VAR_5, 0, VAR_10 + VAR_9, &VAR_0, VAR_6);
  FUNC_1(VAR_6, VAR_10, 0);
 }
}
