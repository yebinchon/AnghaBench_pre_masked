
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddb_output {TYPE_3__* dma; TYPE_1__* port; } ;
struct ddb_input {TYPE_2__* dma; } ;
struct TYPE_6__ {int cbuf; int coff; } ;
struct TYPE_5__ {int stat; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ddb_input *VAR_0,
          struct ddb_output *VAR_1)
{
 FUNC_1(VAR_1->port->dev,
    VAR_0->dma->stat, FUNC_0(VAR_1->dma));
 VAR_1->dma->cbuf = (VAR_0->dma->stat >> 11) & 0x1f;
 VAR_1->dma->coff = (VAR_0->dma->stat & 0x7ff) << 7;
}
