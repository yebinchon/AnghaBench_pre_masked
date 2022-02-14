
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * vaddr; int paddr; int size; } ;
struct coda_ctx {int bitstream_fifo; TYPE_2__ bitstream; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct coda_ctx *VAR_0)
{
 if (VAR_0->bitstream.vaddr == ((void*)0))
  return;

 FUNC_0(VAR_0->dev->dev, VAR_0->bitstream.size, VAR_0->bitstream.vaddr,
      VAR_0->bitstream.paddr);
 VAR_0->bitstream.vaddr = ((void*)0);
 FUNC_1(&VAR_0->bitstream_fifo, ((void*)0), 0);
}
