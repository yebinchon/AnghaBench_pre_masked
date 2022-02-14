
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct ddb_output {TYPE_4__* dma; TYPE_3__* port; } ;
struct ddb {int dummy; } ;
struct TYPE_10__ {int bufval; int running; int lock; scalar_t__ stat; scalar_t__ coff; scalar_t__ cbuf; } ;
struct TYPE_9__ {TYPE_2__** input; struct ddb* dev; } ;
struct TYPE_8__ {TYPE_1__* port; } ;
struct TYPE_7__ {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct ddb_output*) ;
 int FUNC_4 (struct ddb_output*) ;
 int FUNC_5 (struct ddb_output*,int*,int*,int ) ;
 int FUNC_6 (struct ddb*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ddb_output *VAR_2)
{
 struct ddb *VAR_3 = VAR_2->port->dev;
 u32 VAR_4 = 0x11c, VAR_5 = 0;

 FUNC_7(&VAR_2->dma->lock);
 VAR_2->dma->cbuf = 0;
 VAR_2->dma->coff = 0;
 VAR_2->dma->stat = 0;
 FUNC_6(VAR_3, 0, FUNC_1(VAR_2->dma));

 if (VAR_2->port->input[0]->port->class == VAR_0)
  VAR_4 = (1UL << 13) | 0x14;
 else
  FUNC_5(VAR_2, &VAR_4, &VAR_5, 0);

 FUNC_6(VAR_3, 0, FUNC_3(VAR_2));
 FUNC_6(VAR_3, 2, FUNC_3(VAR_2));
 FUNC_6(VAR_3, 0, FUNC_3(VAR_2));
 FUNC_6(VAR_3, VAR_4, FUNC_3(VAR_2));
 FUNC_6(VAR_3, VAR_5, FUNC_4(VAR_2));

 FUNC_6(VAR_3, VAR_2->dma->bufval,
    FUNC_2(VAR_2->dma));
 FUNC_6(VAR_3, 0, FUNC_0(VAR_2->dma));
 FUNC_6(VAR_3, 1, VAR_1);
 FUNC_6(VAR_3, 7, FUNC_1(VAR_2->dma));

 FUNC_6(VAR_3, VAR_4 | 1, FUNC_3(VAR_2));

 VAR_2->dma->running = 1;
 FUNC_8(&VAR_2->dma->lock);
}
