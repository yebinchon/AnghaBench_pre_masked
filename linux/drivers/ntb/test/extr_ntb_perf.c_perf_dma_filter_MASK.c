
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_ctx {TYPE_1__* ntb; } ;
struct dma_chan {TYPE_2__* device; } ;
struct TYPE_4__ {int * dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_1, void *VAR_2)
{
 struct perf_ctx *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->ntb->dev);

 return VAR_4 == VAR_0 || VAR_4 == FUNC_0(VAR_1->device->dev);
}
