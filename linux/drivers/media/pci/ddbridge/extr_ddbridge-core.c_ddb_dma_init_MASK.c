
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ddb_regmap {TYPE_4__* idma_buf; TYPE_3__* idma; TYPE_2__* odma_buf; TYPE_1__* odma; } ;
struct ddb_io {int nr; TYPE_5__* port; struct ddb_dma* dma; } ;
struct ddb_dma {int size; int div; scalar_t__ bufregs; scalar_t__ regs; void* num; int work; int wq; int lock; struct ddb_io* io; } ;
struct TYPE_12__ {int dev; struct ddb_dma* idma; struct ddb_dma* odma; } ;
struct TYPE_11__ {int lnr; TYPE_6__* dev; } ;
struct TYPE_10__ {int size; scalar_t__ base; } ;
struct TYPE_9__ {int size; scalar_t__ base; } ;
struct TYPE_8__ {int size; scalar_t__ base; } ;
struct TYPE_7__ {int size; scalar_t__ base; } ;


 int FUNC_0 (struct ddb_dma*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int,scalar_t__,scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 struct ddb_regmap* FUNC_5 (struct ddb_io*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ddb_io *VAR_4, int VAR_5, int VAR_6)
{
 struct ddb_dma *VAR_7;
 const struct ddb_regmap *VAR_8 = FUNC_5(VAR_4, 0);

 VAR_7 = VAR_6 ? &VAR_4->port->dev->odma[VAR_5] : &VAR_4->port->dev->idma[VAR_5];
 VAR_4->dma = VAR_7;
 VAR_7->io = VAR_4;

 FUNC_6(&VAR_7->lock);
 FUNC_4(&VAR_7->wq);
 if (VAR_6) {
  FUNC_1(&VAR_7->work, VAR_3);
  VAR_7->regs = VAR_8->odma->base + VAR_8->odma->size * VAR_5;
  VAR_7->bufregs = VAR_8->odma_buf->base + VAR_8->odma_buf->size * VAR_5;
  VAR_7->num = VAR_0;
  VAR_7->size = VAR_1 * 128 * 47;
  VAR_7->div = 1;
 } else {
  FUNC_1(&VAR_7->work, VAR_2);
  VAR_7->regs = VAR_8->idma->base + VAR_8->idma->size * VAR_5;
  VAR_7->bufregs = VAR_8->idma_buf->base + VAR_8->idma_buf->size * VAR_5;
  VAR_7->num = VAR_0;
  VAR_7->size = VAR_1 * 128 * 47;
  VAR_7->div = 1;
 }
 FUNC_2(VAR_4->port->dev, 0, FUNC_0(VAR_7));
 FUNC_3(VAR_4->port->dev->dev, "init link %u, io %u, dma %u, dmaregs %08x bufregs %08x\n",
  VAR_4->port->lnr, VAR_4->nr, VAR_5, VAR_7->regs, VAR_7->bufregs);
}
