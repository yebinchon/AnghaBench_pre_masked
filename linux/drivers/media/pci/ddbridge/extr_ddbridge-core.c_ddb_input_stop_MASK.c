
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ddb_input {TYPE_2__* dma; TYPE_1__* port; } ;
struct ddb {int dummy; } ;
struct TYPE_4__ {int lock; scalar_t__ running; } ;
struct TYPE_3__ {int lnr; struct ddb* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ddb_input*) ;
 int FUNC_3 (struct ddb*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ddb_input *VAR_0)
{
 struct ddb *VAR_1 = VAR_0->port->dev;
 u32 VAR_2 = FUNC_0(VAR_0->port->lnr);

 FUNC_4(&VAR_0->dma->lock);

 FUNC_3(VAR_1, 0, VAR_2 | FUNC_2(VAR_0));

 FUNC_3(VAR_1, 0, FUNC_1(VAR_0->dma));
 VAR_0->dma->running = 0;
 FUNC_5(&VAR_0->dma->lock);
}
