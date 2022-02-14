
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ddb_input {TYPE_2__* dma; TYPE_1__* port; } ;
struct ddb {int dummy; } ;
struct TYPE_6__ {int bufval; int running; int lock; scalar_t__ stat; scalar_t__ coff; scalar_t__ cbuf; } ;
struct TYPE_5__ {scalar_t__ type; struct ddb* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ddb_input*) ;
 int FUNC_4 (struct ddb_input*) ;
 int FUNC_5 (struct ddb*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ddb_input *VAR_2)
{
 struct ddb *VAR_3 = VAR_2->port->dev;

 FUNC_6(&VAR_2->dma->lock);
 VAR_2->dma->cbuf = 0;
 VAR_2->dma->coff = 0;
 VAR_2->dma->stat = 0;
 FUNC_5(VAR_3, 0, FUNC_1(VAR_2->dma));

 FUNC_5(VAR_3, 0, FUNC_3(VAR_2));
 FUNC_5(VAR_3, 2, FUNC_3(VAR_2));
 FUNC_5(VAR_3, 0, FUNC_3(VAR_2));

 FUNC_5(VAR_3, VAR_2->dma->bufval,
    FUNC_2(VAR_2->dma));
 FUNC_5(VAR_3, 0, FUNC_0(VAR_2->dma));
 FUNC_5(VAR_3, 1, VAR_1);
 FUNC_5(VAR_3, 3, FUNC_1(VAR_2->dma));

 FUNC_5(VAR_3, 0x09, FUNC_3(VAR_2));

 if (VAR_2->port->type == VAR_0)
  FUNC_5(VAR_3, 0x000fff01, FUNC_4(VAR_2));

 VAR_2->dma->running = 1;
 FUNC_7(&VAR_2->dma->lock);
}
