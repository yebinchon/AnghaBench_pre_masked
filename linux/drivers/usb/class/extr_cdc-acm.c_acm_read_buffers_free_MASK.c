
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acm {int rx_buflimit; TYPE_1__* read_buffers; int readsize; int dev; } ;
struct TYPE_2__ {int dma; int base; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct acm *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_buflimit; VAR_1++)
  FUNC_0(VAR_0->dev, VAR_0->readsize,
     VAR_0->read_buffers[VAR_1].base, VAR_0->read_buffers[VAR_1].dma);
}
