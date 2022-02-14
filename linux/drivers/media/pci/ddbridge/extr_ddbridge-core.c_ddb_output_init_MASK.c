
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ddb_regmap {scalar_t__ irq_base_odma; TYPE_1__* output; } ;
struct ddb_port {int lnr; struct ddb_output* output; struct ddb* dev; } ;
struct ddb_output {int nr; int regs; struct ddb_port* port; } ;
struct ddb {scalar_t__ has_dma; int dev; struct ddb_output* output; } ;
struct TYPE_2__ {int base; int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ddb_output*,int,int) ;
 int FUNC_2 (struct ddb*,int ,scalar_t__,int *,struct ddb_output*) ;
 int FUNC_3 (int ,char*,int ,int,int) ;
 struct ddb_regmap* FUNC_4 (struct ddb_output*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct ddb_port *VAR_1, int VAR_2)
{
 struct ddb *VAR_3 = VAR_1->dev;
 struct ddb_output *VAR_4 = &VAR_3->output[VAR_2];
 const struct ddb_regmap *VAR_5;

 VAR_1->output = VAR_4;
 VAR_4->nr = VAR_2;
 VAR_4->port = VAR_1;
 VAR_5 = FUNC_4(VAR_4, 1);
 VAR_4->regs = FUNC_0(VAR_1->lnr) |
  (VAR_5->output->base + VAR_5->output->size * VAR_2);

 FUNC_3(VAR_3->dev, "init link %u, output %u, regs %08x\n",
  VAR_1->lnr, VAR_2, VAR_4->regs);

 if (VAR_3->has_dma) {
  const struct ddb_regmap *VAR_6 = FUNC_4(VAR_4, 0);
  u32 VAR_7 = VAR_6->irq_base_odma;

  FUNC_2(VAR_3, 0, VAR_2 + VAR_7, &VAR_0, VAR_4);
  FUNC_1(VAR_4, VAR_2, 1);
 }
}
